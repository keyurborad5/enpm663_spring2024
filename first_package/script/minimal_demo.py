#!/usr/bin/env python3

<<<<<<< HEAD
import rclpy #Ros2 Python Client Lib
=======
import rclpy
>>>>>>> 0a6e3ab7681613de9b5162cbfda8228dce7bb1f8
from rclpy.node import Node

def main(args=None):
    rclpy.init(args=args)
<<<<<<< HEAD

    node= Node("minimal_py")

    node.get_logger().info(f"Hello from {node.get_name()}")

    rclpy.shutdown()

if __name__=='__main__':
=======
    node = Node("minimal_py")
    node.get_logger().info(f"Hello from {node.get_name()}")
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        # Log a message when the node is manually terminated
        node.get_logger().warn("Keyboard interrupt detected")
    finally:
        # Shut down the ROS 2 Python client library
        rclpy.shutdown()
    
if __name__ == "__main__":
>>>>>>> 0a6e3ab7681613de9b5162cbfda8228dce7bb1f8
    main()