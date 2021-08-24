#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "gpm_interfaces/msg/status.hpp"

using namespace std::chrono_literals;
using namespace std;

/*parameter*/
#define STATUS_FREQ 1000ms
string device_name = "scara";



class scaraHandler : public rclcpp::Node
{
  public:
    scaraHandler()
    : Node("scara_handler"), count_(0)
    {
      status_publisher_ = this->create_publisher<gpm_interfaces::msg::Status>("status", 10);
      timer_ = this->create_wall_timer(
      STATUS_FREQ, std::bind(&scaraHandler::status_callback, this));
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
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<gpm_interfaces::msg::Status>::SharedPtr status_publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<scaraHandler>());
  rclcpp::shutdown();
  return 0;
}