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

#### 12.18
*增加了laserholder,抬高laser高度

## 待解决问题

* 机器人的参数问题。从天空中掉下来，会自行移动，靠墙之后不能够teleop移动，估计惯性太大还是啥？
* laser会识别到机械臂（laser已经抬高）

## 怎样上传
* git pull (从远程repository更新自己的文件，一般先pull)
* git add . (将自己更新的文件全部加入这个池子)
* git commit -a -m "你对于此次更新想要说的话"  （-a 是all   -m 是message 在“”里面写入你想要写的信息）（将池子commit）
* git push (push到远程的repository中)
