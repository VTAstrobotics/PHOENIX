import pyrealsense2 as rs
import numpy as np
import cv2

# Configure depth and color streams
pipeline = rs.pipeline()
config = rs.config()

# Get device product line for setting a supporting resolution
pipeline_wrapper = rs.pipeline_wrapper(pipeline)
pipeline_profile = config.resolve(pipeline_wrapper)
device = pipeline_profile.get_device()
device_product_line = str(device.get_info(rs.camera_info.product_line))

found_rgb = False
for s in device.sensors:
    if s.get_info(rs.camera_info.name) == 'RGB Camera':
        found_rgb = True
        break
if not found_rgb:
    print("This program requires Depth camera with Color sensor")
    exit(0)

config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

# Start streaming
pipeline.start(config)

def rectContains(rect,pt):
    ptin = rect[0] < pt[0] < rect[0]+rect[2] and rect[1] < pt[1] < rect[1]+rect[3]
    return ptin

def getContours(img, depth_frame):
    contours,hierarchy = cv2.findContours(img, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
    for cnt in contours:
        area = cv2.contourArea(cnt)
        perimeter = cv2.arcLength(cnt, True)
        # deletes any noise
        if perimeter > 100 and area > 50:
            aprx = cv2.approxPolyDP(cnt, 0.02*perimeter, True) # approximates number of vertices
            x,y,w,h = cv2.boundingRect(aprx)
            if w > 25 and h > 25:
                # draws every cnt on img_copy (-1 means every contour), color red, thickness 3
                # cv2.drawContours(contourVid, cnt, -1, (0,0,255),3)
                # draws bounding rectangle of each countour
                cv2.rectangle(contourVid, (x, y), (x + w, y + h), (255, 255, 255), 2)
                # finds distance to center of object
                distance = round(depth_frame.get_distance(x+(w//2), y+(h//2)), 3)
                # displays this distance in meters
                cv2.putText(contourVid, str(distance) + " m",(x+(w//2),y+(h//2)),cv2.FONT_HERSHEY_COMPLEX,0.5,
                            (255,255,255),2)
    # cv2.groupRectangles(img, 1, 0.2)

try:
    while True:
        # Wait for a coherent pair of frames: depth and color
        frames = pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        if not depth_frame or not color_frame:
            continue

        # Convert images to numpy arrays
        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())

        cap = cv2.VideoCapture(2)
        success, vid = cap.read()
        contourVid = vid.copy()

        grayVid = cv2.cvtColor(vid, cv2.COLOR_BGR2GRAY)
        blurVid = cv2.GaussianBlur(grayVid, (7,7),1)
        cannyVid = cv2.Canny(blurVid,50,50)

        getContours(cannyVid, depth_frame)

        imgResult = cannyVid.copy()

        cv2.imshow("Result", contourVid)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
finally:
    pipeline.stop()
