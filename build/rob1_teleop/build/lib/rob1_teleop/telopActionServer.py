#import ros dependencies
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

#import keyboard reading dependency
from keyboard_msgs.msg import Key

#import geometry dependencies for create3 robot
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist

#QoS imports
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy

#import action definition
from teleopaction.action import teleopAction

#define action server node
class teleopActionServer(Node):

    def __init__(self):
        super().__init__('teleopActionServer')
        # self._action_server = ActionServer(
        #     self,
        #     teleopAction,
        #     'teleopAction',
        #     self.execute_callback
        # )
        #4 arguments for an action server:
        #a ros2 node to add the action client to: self
        #The type of the action (teleopAction)
        #The action name
        # a callback function for executing accepted goals. must return a result message for the action type
        qos_prof = QoSProfile(
            reliability = QoSReliabilityPolicy.BEST_EFFORT,
            history = QoSHistoryPolicy.KEEP_LAST,
            depth = 5
        )
        
        self.poseSub = self.create_subscription(Odometry,
                                                'robot_1/odom',
                                                self.pose_callback,
                                                qos_profile =qos_prof)
        #define storage variables for the position of robot1
        self.init_Pose = Pose()
        self.curr_Pose = Pose()

        #declaring subscriber to the 'keydown' topic, listening for message of type Key,
        self.keySub = self.create_subscription(Key, 'keydown', self.keypress_callback, 10)
        
    def pose_callback(self, msg_in):
        i = 0
        if i == 0:
            #initialising the position of the roomba 
            self.init_Pose = msg_in.pose
            i+=1


    # def execute_callback(self, goal_handle):
    #     #method that is called to execute a goal once it is accepted
    #     self.get_logger().info('Rotating...')

    #     feedback_msg = teleopAction.Feedback()
    #     # teleopAction.updateMessage = 
        
    def keypress_callback(self, msg_in):
        #function to print when the subscriber recieves data
        keypressed = msg_in.code
        self.get_logger().info(f'Key pressed: {keypressed}') #publish to console
        
        # self.publisher_.publish(msg_out)# publish msg_out to robot_1/cmd_vel

