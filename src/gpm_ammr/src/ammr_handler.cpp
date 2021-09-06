#include <chrono>
#include <functional>
#include <memory>
#include <cstdlib>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "gpm_interfaces/msg/status.hpp"
#include "gpm_interfaces/srv/command.hpp"
#include "gpm_interfaces/srv/ammr_report.hpp"

using namespace std::chrono_literals;
using namespace std;
using Status = gpm_interfaces::msg::Status;
using Command = gpm_interfaces::srv::Command;
using AmmrReport = gpm_interfaces::srv::AmmrReport;
using std::placeholders::_1;
using std::placeholders::_2;

/*parameter*/
#define STATUS_FREQ 1000ms
string device_name = "ammr";



class ammrHandler : public rclcpp::Node
{
  public:
    ammrHandler()
    : Node("ammr_handler"), count_(0)
    {
       /*
      Topic-publisher[status]:
      Description: publish message to info controller
      Conmunication interface: Status.msg
      */
      status_publisher_ = this->create_publisher<Status>("status", 10);
      timer_ = this->create_wall_timer(STATUS_FREQ, std::bind(&ammrHandler::status_callback, this));


      /*
      Service-server[cmd_ammr]:
      Description: receive command from controller, return "receive" if condition allow
      Conmunication interface: Command.srv
      */ 
      cmdAmmr_server_= this->create_service<Command>("cmd_ammr", [this](
        const std::shared_ptr<Command::Request> request,
        std::shared_ptr<Command::Response> response) -> void {
            cmdAmmr_callback(request, response);}
      );


      /*
      Service-client[rep_ammr]:
      Description: report data and job condition to controller
      Conmunication interface: AmmrReport.srv
      */
      repAmmr_client_ = this->create_client<AmmrReport>("rep_ammr");
      timer_repAmmr = this->create_wall_timer(
        5000ms, std::bind(&ammrHandler::repAmmr_callback, this));

    }

  private:
    void status_callback()
    {
      auto message = gpm_interfaces::msg::Status();
      message.device = device_name;
      message.error = false;
      message.msg = "None";
      RCLCPP_INFO(this->get_logger(), "Publishing: '%s', no problem.", message.device.c_str());
      status_publisher_->publish(message);
    }

    void cmdAmmr_callback(
      const std::shared_ptr<Command::Request> request,
      const std::shared_ptr<Command::Response>response)
    {
      response->device = device_name;
      response->accept = true;
      RCLCPP_INFO(this->get_logger(), "Command from controller action: [%s] dest: [%s]", request->action.c_str(), request->destination.c_str());
      RCLCPP_INFO(this->get_logger(), "Sending response: accept [%s]", response->accept ? "true" : "false");
    }

    void repAmmr_callback()
    {
      RCLCPP_INFO(this->get_logger(), "Report AMMR info");
      auto request = std::make_shared<AmmrReport::Request>();
      request->slot1 = 69115908;
      request->slot2 = 80808080;
      request->position = "A";

      using ServiceResponseFuture =rclcpp::Client<AmmrReport>::SharedFuture;

      auto response_received_callback = [this](ServiceResponseFuture future) {
        auto result = future.get();
        RCLCPP_INFO(this->get_logger(), "Response: [%s]", result->receive ? "true" : "false");
      };

      auto response = repAmmr_client_->async_send_request(request, response_received_callback);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<Status>::SharedPtr status_publisher_;
    rclcpp::Service<Command>::SharedPtr cmdAmmr_server_;
    rclcpp::Client<AmmrReport>::SharedPtr repAmmr_client_;

    rclcpp::TimerBase::SharedPtr timer_repAmmr;

    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ammrHandler>());
  rclcpp::shutdown();
  return 0;
}

