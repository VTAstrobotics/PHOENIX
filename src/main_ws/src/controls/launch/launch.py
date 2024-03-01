import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='controls',
            executable='dig',
            name='dig'),
        launch_ros.actions.Node(
            package='controls',
            executable='dump',
            name='dump'),
        launch_ros.actions.Node(
            package='controls',
            executable='drivetrain',
            name='drivetrain'),
  ])