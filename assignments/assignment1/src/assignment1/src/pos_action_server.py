#!/usr/bin/env python3

#General guides: 
#https://docs.ros.org/en/humble/Tutorials/Intermediate/Creating-an-Action.html
#https://docs.ros.org/en/humble/Tutorials/Intermediate/Writing-an-Action-Server-Client/Py.html

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

#Callback groups: https://docs.ros.org/en/humble/How-To-Guides/Using-callback-groups.htm   l
from rclpy.callback_groups import ReentrantCallbackGroup

from assignment1.action import Pos 

class PosActionServer(Node):
    def __init__(self):
        super().__init__('pos_action_server')
        
        self._cb_group = ReentrantCallbackGroup()
        
        self._action_server = ActionServer(
            self,
            Pos, 
            'pos',
            self.execute_callback,
            callback_group=self._cb_group
        )
        
        self.get_logger().info('Action Server is ready...')

    #Async reference: https://github.com/ros2/examples/blob/rolling/rclpy/actions/minimal_action_server/examples_rclpy_minimal_action_server/server.py    
    async def execute_callback(self, goal_handle):
        goal_attributes = [goal_handle.request.x, goal_handle.request.y, goal_handle.request.theta]

        print(f"Goal received: {goal_attributes}")
        
        await self.wait_with_ros_timer(5.0)
        
        feedback_msg = Pos.Feedback()
        feedback_msg.feedback_message = "Halfway there"
        goal_handle.publish_feedback(feedback_msg)

        await self.wait_with_ros_timer(5.0)
        
        goal_handle.succeed()
        
        result = Pos.Result()
        result.result_message = "Reached goal"
        
        return result

    #Timer reference: https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html
    async def wait_with_ros_timer(self, duration):

        future = rclpy.task.Future()
        
        def _timer_callback():
            self._timer.cancel()
            self._timer.destroy()
            if not future.done():
                future.set_result(True)

        self._timer = self.create_timer(duration, _timer_callback, callback_group=self._cb_group)
        
        await future

def main(args=None):
    rclpy.init(args=args)
    node = PosActionServer()
    
    from rclpy.executors import MultiThreadedExecutor
    executor = MultiThreadedExecutor()
    
    rclpy.spin(node, executor=executor)
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()