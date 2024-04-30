#import ros dependencies
#check ros2_cheats_sheet by artivis 
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

#import geometry dependencies for create3 robot
# more info on any of thes classes using ros2 interface show xxx_msgs/msg/Class_Name

from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
from geometry_msgs.msg import Twist
from irobot_create_msgs.srv import ResetPose

#array manipulation packages
import transforms3d as t3d
import numpy as np

#QoS imports
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy

#import action definition
from robot1_interfaces.action import Teleop
# pyquaternion, tfquaternion, quaternion_multiply, transforms3d

#define action server node
class teleopServer(Node):

    def __init__(self):
        super().__init__('teleopServer')
        self.teleop_server = ActionServer(
            self,
            Teleop,
            'teleop server',
            self.execute_callback
        )
        #4 arguments for an action server:
        #a ros2 node to add the action client to: self
        #The type of the action (teleopAction)
        #server name, client will send to this name
        # a callback function for executing accepted goals. must return a result message for the action type
        self.get_logger().info("Teleop action server has been started")
    
        qos_prof = QoSProfile(
            reliability = QoSReliabilityPolicy.BEST_EFFORT,
            history = QoSHistoryPolicy.KEEP_LAST,
            depth = 10
        )
        self.resetposeclient = self.create_client(ResetPose, '/robot_1/reset_pose')

        self.poseSub = self.create_subscription(Odometry,
                                                'robot_1/odom',
                                                self.pose_callback,
                                                qos_profile =qos_prof)
        
    def pose_callback(self, msg_in: Odometry):
        #Update the position of the roomba constantly
        self.curr_ori = msg_in.orientation


    def execute_callback(self, goal_handle: Quaternion): #Pose is the object type of goal it will receive
        target_rot = goal_handle
        self.get_logger().info('Rotating...')
        
        pass
        #method that is called to execute a goal once it is accepted
        
        # feedback_msg = teleopActionServer.Feedback()
        # teleopAction.updateMessage 
        


def main(args=None):
    rclpy.init(args=args)
    node = teleopServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()