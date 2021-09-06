#include <chrono>
#include <functional>
#include <memory>
#include <cstdlib>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "gpm_interfaces/msg/status.hpp"
#include "gpm_interfaces/srv/command.hpp"
#include "gpm_interfaces/srv/scara_report.hpp"

using namespace std::chrono_literals;
using namespace std;

/*parameter*/
#define STATUS_FREQ 1000ms
string device_name = "scara";
using namespace std::chrono_literals;
using Status = gpm_interfaces::msg::Status;
using Command = gpm_interfaces::srv::Command;
using ScaraReport = gpm_interfaces::srv::ScaraReport;
using std::placeholders::_1;
using std::placeholders::_2;


class scaraHandler : public rclcpp::Node
{
  public:
    scaraHandler()
    : Node("scara_handler"), count_(0)
    {
      /*
      Topic-publisher[status]:
      Description: publish message to info controller
      Conmunication interface: Status.msg
      */
      status_publisher_ = this->create_publisher<Status>("status", 10);
      timer_ = this->create_wall_timer(STATUS_FREQ, std::bind(&scaraHandler::status_callback, this));


      /*
      Service-server[cmd_scara]:
      Description: receive command from controller, return "receive" if condition allow
      Conmunication interface: Command.srv
      */ 
      cmdScara_server_= this->create_service<Command>("cmd_scara", [this](
        const std::shared_ptr<Command::Request> request,
        std::shared_ptr<Command::Response> response) -> void {
            cmdScara_callback(request, response);}
      );

      /*
      Service-client[rep_scara]:
      Description: report data and job condition to controller
      Conmunication interface: ScaraReport.srv
      */
      repScara_client_ = this->create_client<ScaraReport>("rep_scara");
      timer_repScara = this->create_wall_timer(
        5000ms, std::bind(&scaraHandler::repScara_callback, this));

    }

  private:
    void status_callback()
    {
      auto message = gpm_interfaces::msg::Status();
      message.device = device_name;
      message.error = false;
      message.msg = "None";
      RCLCPP_INFO(this->get_logger(), "Publishing: [%s], no problem.", message.device.c_str());
      status_publisher_->publish(message);
    }

    void cmdScara_callback(
      const std::shared_ptr<Command::Request> request,
      const std::shared_ptr<Command::Response>response)
    {
      response->device = device_name;
      response->accept = true;
      RCLCPP_INFO(this->get_logger(), "Command from controller action: [%s] dest: [%s]", request->action.c_str(), request->destination.c_str());
      RCLCPP_INFO(this->get_logger(), "Sending response: accept [%s]", response->accept ? "true" : "false");
    }

    void repScara_callback()
    {
      RCLCPP_INFO(this->get_logger(), "Report Scara info");
      auto request = std::make_shared<ScaraReport::Request>();
      request->action = "None";
      request->dummy_wafer = 23;
      request->dummy_cassette = 69115908;
      request->slot_num = 33;
      request->faild = "too ugly";

      using ServiceResponseFuture =rclcpp::Client<ScaraReport>::SharedFuture;

      auto response_received_callback = [this](ServiceResponseFuture future) {
        auto result = future.get();
        RCLCPP_INFO(this->get_logger(), "Response: [%s]", result->receive ? "true" : "false");
      };

      auto response = repScara_client_->async_send_request(request, response_received_callback);
    }

    // define all subscripers, publishers, servers and clients
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<Status>::SharedPtr status_publisher_;
    rclcpp::Service<Command>::SharedPtr cmdScara_server_;
    rclcpp::Client<ScaraReport>::SharedPtr repScara_client_;

    rclcpp::TimerBase::SharedPtr timer_repScara;


    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<scaraHandler>());
  rclcpp::shutdown();
  return 0;
}