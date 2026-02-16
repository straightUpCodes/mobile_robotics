#!/usr/bin/env python3

#General reference: https://docs.ros.org/en/humble/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from assignment1.action import Pos 

class PosActionClient(Node):
    def __init__(self):
        super().__init__('pos_action_client')
        self._action_client = ActionClient(self, Pos, 'pos')

    def send_goal(self,x,y,theta):
        self.goal_msg = Pos.Goal()
        self.goal_msg.x = x
        self.goal_msg.y = y
        self.goal_msg.theta = theta

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(self.goal_msg, feedback_callback=self.feedback_callback)

        self.get_logger().info('Goal sent')

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self,future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected:')
            return
        
        self.get_logger().info(f'Goal accepted: x: {self.goal_msg.x}, y: {self.goal_msg.y}, theta: {self.goal_msg.theta}')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self,future):
        result = future.result().result
        self.get_logger().info(f'Result recieved: "{result.result_message}"')
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Feedback recieved: "{feedback.feedback_message}"')
    


def main(args=None):
    rclpy.init(args=args)

    action_client = PosActionClient()


    while True:
        user_input_x = input("Enter x: ")
        user_input_y = input("Enter y: ")
        user_input_theta = input("Enter theta: ")
        try:
            value_x = float(user_input_x)
            value_y = float(user_input_y)
            value_theta = float(user_input_theta)
            break
        except ValueError:
            print("Invalid input. Please enter numerical values only.")

    action_client.send_goal(value_x, value_y, value_theta)

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()