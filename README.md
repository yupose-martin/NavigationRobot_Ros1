# navigationRobot_ros1
ros1-navigation robot as project in ROS class
首先source devel/setup.bash (建议在～里的bashrc里面默认设置)
如果要跑urdf $roslaunch urdf_tutorial display.launch model:='$(find urdf_model)/urdf/robot.urdf'

12.16 update 增加了laser scan 地图  cmd_vel gmapping（有点问题）

**跑的流程**

* roslaunch car2_sld gazebo.launch
* roslaunch mbot_teleop mbot_teleop.launch(不知道为什么本地的
* roslauch car2_sld mbot_teleop.launch 但是至少mbot_teleop能够跑起来)
* roslaunch car2_sld gmapping_demo.launh(也有一点小问题,wlb有问题，map rostopic有问题)

