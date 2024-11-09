import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String, Float32
from tkinter import Tk, Label, StringVar
from PIL import Image as PILImage, ImageTk
from cv_bridge import CvBridge
import cv2
from datetime import datetime, timedelta

# Settings located below

class TopicDisplay:
    def __init__(self, name, topic_type, x, y, root, node, timeout=5):
        self.name = name
        self.type = topic_type
        self.x = x
        self.y = y
        self.node = node
        self.root = root
        self.bridge = CvBridge()
        self.last_message_time = None
        self.timeout = timedelta(seconds=timeout)

        if topic_type == 'string' or topic_type == 'float':
            self.var = StringVar()
            self.label = Label(root, textvariable=self.var, font=("Helvetica", 12))
            self.label.place(x=x, y=y)
            self.var.set(f"{self.name}: No data received")
        elif topic_type == 'camera':
            self.label = Label(root, text="No data received")
            self.label.place(x=x, y=y)

        self.create_subscription()

    def create_subscription(self):
        if self.type == 'string':
            self.node.create_subscription(String, self.name, self.string_callback, 10)
        elif self.type == 'float':
            self.node.create_subscription(Float32, self.name, self.float_callback, 10)
        elif self.type == 'camera':
            self.node.create_subscription(Image, self.name, self.image_callback, 10)

    def string_callback(self, msg):
        self.var.set(f"{self.name}: {msg.data}")
        self.last_message_time = datetime.now()

    def float_callback(self, msg):
        self.var.set(f"{self.name}: {msg.data:.2f}")
        self.last_message_time = datetime.now()

    def image_callback(self, msg):
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        pil_image = PILImage.fromarray(cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB))
        tk_image = ImageTk.PhotoImage(pil_image)
        self.label.config(image=tk_image)
        self.label.image = tk_image
        self.last_message_time = datetime.now()

    def check_timeout(self):
        if self.last_message_time is None or datetime.now() - self.last_message_time > self.timeout:
            if self.type == 'string' or self.type == 'float':
                self.var.set(f"{self.name}: No data received")
            elif self.type == 'camera':
                self.label.config(text="No camera data received")

class RosTkApp(Node):
    def __init__(self):

        # Change the resolution and title
        super().__init__('ros_tk_display')
        self.root = Tk()
        self.root.title("Test GUI Display")
        self.root.geometry("800x600")
        self.topics = []

        # Add topics and change the location
        self.add_topic('string_topic_1', 'string', 10, 10)
        self.add_topic('string_topic_2', 'string', 10, 110)
        self.add_topic('float_topic_1', 'float', 10, 210)
        self.add_topic('float_topic_2', 'float', 10, 310)
        self.add_topic('camera_topic_1', 'camera', 300, 10)
        self.add_topic('camera_topic_1', 'camera', 300, 310)

        self.update()

    def add_topic(self, name, topic_type, x, y):
        topic_display = TopicDisplay(name, topic_type, x, y, self.root, self)
        self.topics.append(topic_display)

    def update(self):
        for topic in self.topics:
            topic.check_timeout()
        self.root.update()
        self.root.after(10, self.update)

def main(args=None):
    rclpy.init(args=args)
    app = RosTkApp()
    try:
        rclpy.spin(app)
    except KeyboardInterrupt:
        pass
    finally:
        app.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()