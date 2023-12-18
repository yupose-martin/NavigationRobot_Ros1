# navigationRobot_ros1
ros1-navigation robot as project in ROS class
首先source devel/setup.bash (建议在～里的bashrc里面默认设置)

## 跑的流程

* roslaunch car2_sld gazebo.launch
* roslaunch car2_sld gmapping_demo.launch
* roslaunch car2_sld car2bot_teleop.launch

## 进度

#### 12.17

* 加入了lidar camera（临时外形，后续有时间可以完善下）
* 加入了gmapping teleop
* urdf文件加入了一些gazebo配置
* 没有动car_witharm(moveit)，后面应该要删除掉，毕竟改了urdf,而且后面需要改参数



## 待解决问题

* 机器人的参数问题。从天空中掉下来，会自行移动，靠墙之后不能够teleop移动，估计惯性太大还是啥？
* lidar的高度太低，会识别到机器人本身，会造成建图识别错误

