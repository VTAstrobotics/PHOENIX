# Import necessary libraries for ROS2, PyQt5, and messages
import rclpy  # ROS2 library for handling nodes
from rclpy.node import Node  # To create a custom ROS2 node
from sensor_msgs.msg import Image  # Message type for camera images
from std_msgs.msg import Float32  # Message type for position and battery data
from PyQt5.QtWidgets import QWidget, QVBoxLayout, QLabel, QApplication  # GUI components from PyQt5
import sys
app = QApplication(sys.argv)
# Define the GUI class using PyQt5 to create the user interface
class MCCGuiWidget(QWidget):
    def __init__(self):
        super().__init__()  # Initialize the QWidget (base class)
        self.setWindowTitle("MCC GUI")  # Set the title of the window

        # Create a vertical layout to stack labels
        self.layout = QVBoxLayout()

        # Create labels to display the robot's status (initial values are 'Unknown')
        self.robot_position_label = QLabel("Robot Position: Unknown")
        self.battery_voltage_label = QLabel("Battery Voltage: Unknown")
        self.camera_feed_label = QLabel("Camera Feed: (Loading...)")

        # Add the labels to the layout
        self.layout.addWidget(self.robot_position_label)
        self.layout.addWidget(self.battery_voltage_label)
        self.layout.addWidget(self.camera_feed_label)

        # Set the layout for the GUI window
        self.setLayout(self.layout)

    # Function to update the robot's position label in the GUI
    def update_robot_position(self, position):
        self.robot_position_label.setText(f"Robot Position: {position}")

    # Function to update the battery voltage label
    def update_battery_voltage(self, voltage):
        self.battery_voltage_label.setText(f"Battery Voltage: {voltage} V")

    # Function to update the camera feed label (placeholder for now)
    def update_camera_feed(self, frame):
        self.camera_feed_label.setText("Camera Feed: [New Image Frame]")

# Define the ROS2 node class that handles subscriptions to robot data
class MCCNode(Node):
    def __init__(self):
        super().__init__('mcc_gui_node')  # Initialize the node with a name
        # Subscribe to the robot's position topic (Float32 message)
        self.position_sub = self.create_subscription(Float32, '/robot/position', self.position_callback, 10)
        # Subscribe to the battery voltage topic (Float32 message)
        self.battery_sub = self.create_subscription(Float32, '/robot/battery_voltage', self.battery_callback, 10)
        # Subscribe to the camera feed topic (Image message)
        self.camera_sub = self.create_subscription(Image, '/robot/camera_feed', self.camera_callback, 10)

    # Callback function to update the robot's position in the GUI
    def position_callback(self, msg):
        gui_widget.update_robot_position(msg.data)  # Pass new position data to the GUI

    # Callback function to update the battery voltage in the GUI
    def battery_callback(self, msg):
        gui_widget.update_battery_voltage(msg.data)  # Pass new voltage data to the GUI

    # Callback function to update the camera feed status in the GUI
    def camera_callback(self, msg):
        gui_widget.update_camera_feed(msg)  # Pass new camera data to the GUI (placeholder)

# Main function to start the GUI and ROS2 node
def main():
    rclpy.init()  # Initialize the ROS2 system

    global gui_widget  # Make the GUI widget accessible throughout the program
    gui_widget = MCCGuiWidget()  # Create an instance of the GUI

    node = MCCNode()  # Create an instance of the ROS2 node

    gui_widget.show()  # Display the GUI window
    rclpy.spin(node)  # Keep the node running and listening for new data

    node.destroy_node()  # Clean up the node when done
    rclpy.shutdown()  # Shut down the ROS2 system

# Entry point to run the program
if __name__ == '__main__':
    main()  # Run the main function