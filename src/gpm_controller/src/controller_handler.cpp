#include <chrono>
#include <functional>
#include <memory>
#include <cstdlib>
#include <string>


#include "rclcpp/rclcpp.hpp"
#include "gpm_interfaces/msg/status.hpp"
#include "gpm_interfaces/srv/command.hpp"
#include "gpm_interfaces/srv/ammr_report.hpp"
#include "gpm_interfaces/srv/scara_report.hpp"
#include "gpm_interfaces/srv/conveyer_report.hpp"


using namespace std::chrono_literals;
using Status = gpm_interfaces::msg::Status;
using Command = gpm_interfaces::srv::Command;
using ScaraReport = gpm_interfaces::srv::ScaraReport;
using AmmrReport = gpm_interfaces::srv::AmmrReport;
using ConveyerReport = gpm_interfaces::srv::ConveyerReport;
using std::placeholders::_1;

#define STATUS_FREQ 1000ms
#define TEST 1


/*
Define command tasks to scara , AMMR and Conveyer 
*/
enum class Task
{
  MOVE,
  FETCH, 
  PUT, 
  BOOT,
  SHUT,
  IDOL,
  RUN,
  RERUN
};


class controllerHandler : public rclcpp::Node
{
  public:
    controllerHandler()
    : Node("controllerHandler")
    {
      RCLCPP_INFO(this->get_logger(), "Initial controller_handler node");
      
      
      /*
      Topic-subscriper[status]:
      Description: receive message from scara , AMMR and conveyer
      Conmunication interface: Status.msg
      */ 
      status_subscription_ = this->create_subscription<Status>("status", 10, std::bind(&controllerHandler::status_callback, this, _1));

      
      /*
      Service-client[cmd_scara][cmd_ammr][cmd_conveyer]:
      Description: give command to scara, command and conveyer
      Conmunication interface: Command.srv
      */ 
      cmdScara_client_ = this->create_client<Command>("cmd_scara");
      timer_cmdScara = this->create_wall_timer(
        5000ms, std::bind(&controllerHandler::cmdScara_callback, this));

      cmdAmmr_client_ = this->create_client<Command>("cmd_ammr");
      timer_cmdAmmr = this->create_wall_timer(
        5000ms, std::bind(&controllerHandler::cmdAmmr_callback, this));

      cmdConveyer_client_ = this->create_client<Command>("cmd_conveyer");
      timer_cmdConveyer = this->create_wall_timer(
        5000ms, std::bind(&controllerHandler::cmdConveyer_callback, this));



      /*
      Service-service[rep_scara][rep_ammr][rep_conveyer]:
      Description: receive command from scara, command and conveyer
      Conmunication interface: AmmrReport.srv , ConveyerReport.srv , ScaraReport.srv
      */
      repScara_server_= this->create_service<ScaraReport>("rep_scara", [this](
      const std::shared_ptr<ScaraReport::Request> request,
      std::shared_ptr<ScaraReport::Response> response) -> void {
        repScara_callback(request, response);}
      );

      repAmmr_server_= this->create_service<AmmrReport>("rep_ammr", [this](
      const std::shared_ptr<AmmrReport::Request> request,
      std::shared_ptr<AmmrReport::Response> response) -> void {
        repAmmr_callback(request, response);}
      );

      repConveyer_server_= this->create_service<ConveyerReport>("rep_conveyer", [this](
      const std::shared_ptr<ConveyerReport::Request> request,
      std::shared_ptr<ConveyerReport::Response> response) -> void {
        repConveyer_callback(request, response);}
      );

    }

  private:

    
    void status_callback(const Status::SharedPtr msg)
    {
      
      RCLCPP_INFO(this->get_logger(), "Receive [%s]'s report, no problem.", msg->device.c_str());
    }
    
    void cmdScara_callback()
    {
      RCLCPP_INFO(this->get_logger(), "Client to scara command");
      auto request = std::make_shared<Command::Request>();
      request->action = "None";
      request->destination = "None";

      using ServiceResponseFuture =rclcpp::Client<Command>::SharedFuture;

      auto response_received_callback = [this](ServiceResponseFuture future) {
        auto result = future.get();
        RCLCPP_INFO(this->get_logger(), "Response: [%s] accept [%s]", result->device.c_str(), result->accept ? "true" : "false");
      };

      auto response = cmdScara_client_->async_send_request(request, response_received_callback);
    }
    
    void cmdAmmr_callback()
    {
      RCLCPP_INFO(this->get_logger(), "Client to AMMR command");
      auto request = std::make_shared<Command::Request>();
      request->action = "None";
      request->destination = "None";

      using ServiceResponseFuture =rclcpp::Client<Command>::SharedFuture;

      auto response_received_callback = [this](ServiceResponseFuture future) {
        auto result = future.get();
        RCLCPP_INFO(this->get_logger(), "Response: [%s] accept [%s]", result->device.c_str(), result->accept ? "true" : "false");
      };

      auto response = cmdAmmr_client_->async_send_request(request, response_received_callback);
    }

    void cmdConveyer_callback()
    {
      RCLCPP_INFO(this->get_logger(), "Client to Conveyer command");
      auto request = std::make_shared<Command::Request>();
      request->action = "None";
      request->destination = "None";

      using ServiceResponseFuture =rclcpp::Client<Command>::SharedFuture;

      auto response_received_callback = [this](ServiceResponseFuture future) {
        auto result = future.get();
        RCLCPP_INFO(this->get_logger(), "Response: [%s] accept [%s]", result->device.c_str(), result->accept ? "true" : "false");
      };

      auto response = cmdConveyer_client_->async_send_request(request, response_received_callback);
    }

    void repScara_callback(
      const std::shared_ptr<ScaraReport::Request> request,
      const std::shared_ptr<ScaraReport::Response>response)
    {
      RCLCPP_INFO(this->get_logger(), "Report from Scara dummy: [%d] dest: [%s]", request->dummy_wafer, request->faild.c_str());
      response->receive = true;
      RCLCPP_INFO(this->get_logger(), "Sending response: receive [%s]", response->receive ? "true" : "false");
    }
    
    void repAmmr_callback(
      const std::shared_ptr<AmmrReport::Request> request,
      const std::shared_ptr<AmmrReport::Response>response)
    {
      RCLCPP_INFO(this->get_logger(), "Report from AMMR : slot1: [%d] slot2: [%d]", request->slot1, request->slot2);
      response->receive = true;
      RCLCPP_INFO(this->get_logger(), "Sending response: receive [%s]", response->receive ? "true" : "false");
    }

    void repConveyer_callback(
      const std::shared_ptr<ConveyerReport::Request> request,
      const std::shared_ptr<ConveyerReport::Response>response)
    {
      RCLCPP_INFO(this->get_logger(), "Report from Conveyer id: [%d] empty: [%s]", request->id, request->empty ? "true" : "false");
      response->receive = true;
      RCLCPP_INFO(this->get_logger(), "Sending response: receive [%s]", response->receive ? "true" : "false");
    }
    
    // define all subscripers, publishers, servers and clients
    rclcpp::Subscription<Status>::SharedPtr status_subscription_;
    rclcpp::Client<Command>::SharedPtr cmdScara_client_;
    rclcpp::Client<Command>::SharedPtr cmdAmmr_client_;
    rclcpp::Client<Command>::SharedPtr cmdConveyer_client_;
    rclcpp::Service<ScaraReport>::SharedPtr repScara_server_;
    rclcpp::Service<AmmrReport>::SharedPtr repAmmr_server_;
    rclcpp::Service<ConveyerReport>::SharedPtr repConveyer_server_;

    // developing
    rclcpp::TimerBase::SharedPtr timer_cmdScara;
    rclcpp::TimerBase::SharedPtr timer_cmdAmmr;
    rclcpp::TimerBase::SharedPtr timer_cmdConveyer;
    // developing

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<controllerHandler>());
  rclcpp::shutdown();
  return 0;
}