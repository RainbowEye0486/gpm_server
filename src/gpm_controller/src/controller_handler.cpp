#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "gpm_interfaces/msg/status.hpp"
#include "gpm_interfaces/srv/*"

using std::placeholders::_1;


#define TEST 1

class controllerHandler : public rclcpp::Node
{
  public:
    controllerHandler()
    : Node("controllerHandler")
    {
      //Receiver
      status_subscription_ = this->create_subscription<gpm_interfaces::msg::Status>(
      "status", 10, std::bind(&controllerHandler::status_callback, this, _1));
      
      
      //Publisher
      /*
      command_to_scara_ = this->create_service<gpm_interfaces::srv::Command>(
      "cmd_scara",  &cmdScara_callback);
      command_to_ammr_ = this->create_service<gpm_interfaces::srv::Command>(
      "cmd_ammr",  &cmdAmmr_callback);
      command_to_conveyer_ = this->create_service<gpm_interfaces::srv::Command>(
      "cmd_conveyer",  &cmdConveyer_callback);
      */
      timer_ = this->create_wall_timer(
      2000ms, std::bind(&controllerHandler::test_client, this));

    }

  private:
    
    void status_callback(const gpm_interfaces::msg::Status::SharedPtr msg) const
    {
      RCLCPP_INFO(this->get_logger(), "Receive %s's report, no problem.", msg->device.c_str());
    }
    
    void cmdScara_callback(const std::shared_ptr<gpm_interfaces::srv::Command::Request> request,
          std::shared_ptr<gpm_interfaces::srv::Command::Response> response)
    {
      auto command = std::make_shared<gpm_interfaces::srv::Command::Request>();
      command.action = "None";
      command.destination = "None";

      while (!command_to_scara_->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
          CLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          return 0;
          }
        RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
      }
    
      auto result = command_to_scara_->async_send_request(request);
      if (rclcpp::spin_until_future_complete(this, result) ==
        rclcpp::FutureReturnCode::SUCCESS)
      {
        RCLCPP_INFO(this->get_logger(), " %s accept command: %d", result.get()->device, result.get()->accept);
      } else {
        RCLCPP_ERROR(this->get_logger(), "Failed to assign work");
      }
    }
    void cmdAmmr_callback(const std::shared_ptr<gpm_interfaces::srv::Command::Request> request,
          std::shared_ptr<gpm_interfaces::srv::Command::Response> response)
    {
      auto command = std::make_shared<gpm_interfaces::srv::Command::Request>();
      command.action = "None";
      command.destination = "None";

      while (!command_to_scara_->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
          CLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          return 0;
          }
        RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
      }
    
      auto result = command_to_scara_->async_send_request(request);
      if (rclcpp::spin_until_future_complete(this, result) ==
        rclcpp::FutureReturnCode::SUCCESS)
      {
        RCLCPP_INFO(this->get_logger(), " %s accept command: %d", result.get()->device, result.get()->accept);
      } else {
        RCLCPP_ERROR(this->get_logger(), "Failed to assign work");
      }
      
    }
    void cmdConveyer_callback(const std::shared_ptr<gpm_interfaces::srv::Command::Request> request,
          std::shared_ptr<gpm_interfaces::srv::Command::Response> response)
    {
      auto command = std::make_shared<gpm_interfaces::srv::Command::Request>();
      command.action = "None";
      command.destination = "None";

      while (!command_to_scara_->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
          CLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          return 0;
          }
        RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
      }
    
      auto result = command_to_scara_->async_send_request(request);
      if (rclcpp::spin_until_future_complete(this, result) ==
        rclcpp::FutureReturnCode::SUCCESS)
      {
        RCLCPP_INFO(this->get_logger(), " %s accept command: %d", result.get()->device, result.get()->accept);
      } else {
        RCLCPP_ERROR(this->get_logger(), "Failed to assign work");
      }
    }

    void test_client()
    {
      auto command = std::make_shared<gpm_interfaces::srv::Command::Request>();
      command.action = "None";
      command.destination = "None";

      while (!command_to_scara_->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
          CLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          return 0;
          }
        RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
      }
    
      auto result = command_to_scara_->async_send_request(request);
      if (rclcpp::spin_until_future_complete(this, result) ==
        rclcpp::FutureReturnCode::SUCCESS)
      {
        RCLCPP_INFO(this->get_logger(), " %s accept command: %d", result.get()->device, result.get()->accept);
      } else {
        RCLCPP_ERROR(this->get_logger(), "Failed to assign work");
      }
    }

    rclcpp::Subscription<gpm_interfaces::msg::Status>::SharedPtr status_subscription_;
    rclcpp::Client<gpm_interfaces::srv::Command>::SharedPtr command_to_scara_;
    rclcpp::Client<gpm_interfaces::srv::Command>::SharedPtr command_to_ammr_;
    rclcpp::Client<gpm_interfaces::srv::Command>::SharedPtr command_to_conveyer_;

    if (TEST) rclcpp::TimerBase::SharedPtr timer_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<controllerHandler>());
  rclcpp::shutdown();
  return 0;
}