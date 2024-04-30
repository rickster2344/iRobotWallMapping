#import ros dependencies
#check ros2_cheats_sheet by artivis 
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node


#import keyboard reading dependency
from keyboard_msgs.msg import Key


#import geometry dependencies for create3 robot
# more info on any of thes classes using ros2 interface show xxx_msgs/msg/Class_Name
from geometry_msgs.msg import Quaternion
from irobot_create_msgs.srv import ResetPose

#array manipulation packages
import transforms3d as t3d #t3d.quaternions has all q operations
import numpy as np

#QoS imports
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy

#import action definition
from robot1_interfaces.action import Teleop
# pyquaternion, tfquaternion, quaternion_multiply, transforms3d
#quaternion rotation explanation in quaternions: https://docs.ros.org/en/humble/Tutorials/Intermediate/Tf2/Quaternion-Fundamentals.html

#define action server node
class teleopClient(Node):

    def __init__(self):
        super().__init__('teleopActionClient')
        self.teleop_client = ActionClient(
            self,
            Teleop,
            'teleop_cleint',
            self.execute_callback
        )
        #4 arguments for an action server:
        #a ros2 node to add the action client to: self
        #The type of the action (teleopAction)
        #server name, client will send to this name
        # a callback function for executing accepted goals. must return a result message for the action type
        self.get_logger().info("Teleop action client has been started")
        
        qos_prof = QoSProfile(
            reliability = QoSReliabilityPolicy.BEST_EFFORT,
            history = QoSHistoryPolicy.KEEP_LAST,
            depth = 10
        )

         #declaring subscriber to the 'keydown' topic, listening for message of type Key,
        self.keySub = self.create_subscription(Key, 'keydown', self.keypress_callback, 10)

        #Reset the pose of the roomba when you initialise the teleop keyboard node, current pos becomes origin
        self.resetposeclient = self.create_client(ResetPose, '/robot_1/reset_pose')
        while not self.resetPoseclient.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.future = self.resetPoseclient.call_async(ResetPose.Request())
        rclpy.spin_until_future_complete(self, self.future) 
               

    def send_goal(self, order):
        goal_msg = Teleop.Goal()
        goal_msg.order = order

        self.teleop_client.wait_for_server()

        return self.teleop_client.send_goal_async(goal_msg)
    
    def keypress_callback(self, msg_in):
        #function to execute when the subscriber recieves data
        zAxis = [0,0,1]
        match msg_in.code:
            case ord(r):
                #north
                rotation = t3d.quaternions.axangle2quat(zAxis, 0)
            case ord(t):
                #north east
                rotation = t3d.quaternions.axangle2quat(zAxis, 45)
            case ord(g):
                #east
                rotation = t3d.quaternions.axangle2quat(zAxis, 90)
            case ord(b):
                #south east
                rotation = t3d.quaternions.axangle2quat(zAxis, 135)
            case ord(v):
                #south
                rotation = t3d.quaternions.axangle2quat(zAxis, 180)
            case ord(c):
                #south west
                rotation = t3d.quaternions.axangle2quat(zAxis, -135)
            case ord(d):
                #west
                rotation = t3d.quaternions.axangle2quat(zAxis, -90)
            case ord(e):
                #northwest
                rotation = t3d.quaternions.axangle2quat(zAxis, -45)
            case ord(f):
                #cancel rotation
                pass
            case default:
                #unkown keypress
                rotation = t3d.quaternions.axangle2quat(zAxis, 0)
                pass
        self.get_logger().info(f'Key pressed: {chr(msg_in.code)}') #publish keypress to console
        
        #finding the target pose by multiplying the initial orientation by the rotation quaternion
        initQuat = np.array([0.0, 0.0, 0.0, 1.0]) #convert from quaternion object to np array usable in t3d method. 

        target_ori =  t3d.qmult(initQuat, rotation)
        target_oriQuat = Quaternion(x=target_ori[0], y=target_ori[1], z=target_ori[2], w=target_ori[3]) #converting to quaternion form
        self.send_goal(target_oriQuat)

    

def main(args=None):
    rclpy.init(args=args)
    node = teleopClient()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()