#include <rclcpp/rclcpp.hpp>

<<<<<<< HEAD
int main(int argc, char* argv[]){
    rclcpp::init(argc,argv);

    auto node=rclcpp::Node::make_shared("minimal_cpp");

    RCLCPP_INFO(node->get_logger(),"Hello from %s", node->get_name());

    rclcpp::shutdown();

    return 0;
=======
int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("minimal_cpp");
  RCLCPP_INFO_STREAM(node->get_logger(), "Hello from " << node->get_name());
  RCLCPP_ERROR_STREAM(node->get_logger(), "Hello from " << node->get_name());
  RCLCPP_FATAL_STREAM(node->get_logger(), "Hello from " << node->get_name());
  RCLCPP_WARN_STREAM(node->get_logger(), "Hello from " << node->get_name());

  rclcpp::spin(node);
  rclcpp::shutdown();
>>>>>>> 0a6e3ab7681613de9b5162cbfda8228dce7bb1f8
}