import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from keyboard_msgs.msg import Key

class teleopNode(Node): #inherit Node
    def __init__(self): #initialise with parameter self, giving it the parameter definitions in the Node class
        super().__init__('teleop_node') #giving it a name
        #declaring publisher node that gives a message of type twist over the robot_1/cmd_vel topic, queue size 10
        self.publisher_ = self.create_publisher(Twist, 'robot_1/cmd_vel', 10)

        #declaring subscriber to the 'keydown' topic, listening for message of type Key,
        self.subscription = self.create_subscription(Key, 'keydown', self.listener_callback, 10)

    def listener_callback(self, msg_in):
        #function to print when the subscriber recieves data
        msg_out = Twist() #msg_out is of message class Twist, defined in geometry_msgs.msg
        keypressed = ''
        match msg_in.code:
            case 273:
                keypressed = 'UP_ARROW'
                msg_out.linear.x = 0.5
                msg_out.linear.y = 0.0
                msg_out.linear.z = 0.0
                msg_out.angular.x = 0.0
                msg_out.angular.y = 0.0
                msg_out.angular.z = 0.0
            case 274:
                keypressed = 'DOWN_ARROW'
                msg_out.linear.x = -0.5
                msg_out.linear.y = 0.0
                msg_out.linear.z = 0.0
                msg_out.angular.x = 0.0
                msg_out.angular.y = 0.0
                msg_out.angular.z = 0.0
            case 275:
                keypressed = 'RIGHT_ARROW'
                msg_out.linear.x = 0.0
                msg_out.linear.y = 0.0
                msg_out.linear.z = 0.0
                msg_out.angular.x = 0.0
                msg_out.angular.y = 0.0
                msg_out.angular.z = -0.5
            case 276:
                keypressed = 'LEFT_ARROW'
                msg_out.linear.x = 0.0
                msg_out.linear.y = 0.0
                msg_out.linear.z = 0.0
                msg_out.angular.x = 0.0
                msg_out.angular.y = 0.0
                msg_out.angular.z = 0.5
            case _:
                keypressed = f'OTHER: {str(msg_in.code)}'
                print(msg_in.code)
                msg_out.linear.x = 0.0
                msg_out.linear.y = 0.0
                msg_out.linear.z = 0.0
                msg_out.angular.x = 0.0
                msg_out.angular.y = 0.0
                msg_out.angular.z = 0.0

        self.get_logger().info(f'Key pressed: {keypressed}') #publish to console
        self.publisher_.publish(msg_out)# publish msg_out to robot_1/cmd_vel

def main(args =None):
    rclpy.init(args= args)
    teleop_node = teleopNode()
    rclpy.spin(teleop_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    teleop_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    #Code executed When the File Runs as a Script, but Not When It’s Imported as a Module
    #allows you to import the teleopNode class into other scripts without running main ig
    main()