/**
 * @file subscriber_node_main.cpp
 * @brief Example of a ROS 2 Subscriber Node in C++.
 *
 * This file demonstrates the creation and usage of a ROS 2 subscriber node
 * using the rclcpp library. The SubscriberNode class is utilized here to
 * subscribe to String messages on a topic.
 */

<<<<<<< HEAD
#include "subscriber_interface.hpp"  // Custom subscriber node header
=======
>>>>>>> 0a6e3ab7681613de9b5162cbfda8228dce7bb1f8
#include <std_msgs/msg/string.hpp>  // Include for ROS 2 string messages
#include <string>                   // Include for std::string

#include "first_package/subscriber_interface.hpp"  // Custom subscriber node header

// Allows using the 'ms' literal for milliseconds
using namespace std::chrono_literals;

//=====================================
void SubscriberNode::receive_message(
    const std_msgs::msg::String::SharedPtr msg) {
      saved_msg_.data= msg->data;
    
  // RCLCPP_INFO_STREAM(this->get_logger(), "Received data: " << msg->data);
}
void SubscriberNode::print_msg(){
  RCLCPP_INFO_STREAM(this->get_logger(), "NEWW Received data: " << saved_msg_.data);
}

/**
 * @brief Main function to initialize and run the ROS 2 subscriber node.
 *
 * Initializes the ROS 2 system, creates a SubscriberNode, and keeps it spinning
 * to listen for incoming messages. Shuts down the ROS 2 system before exiting.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return int Execution status code.
 */
int main(int argc, char *argv[]) {
  // Initialize the ROS2 client library for C++
  rclcpp::init(argc, argv);
  // Create an instance of SubscriberNode
  auto subscriber_node = std::make_shared<SubscriberNode>("subscriber_cpp");
  // Keep the node alive and listening for messages
  rclcpp::spin(subscriber_node);
  

  // Shut down ROS 2
  rclcpp::shutdown();
}
