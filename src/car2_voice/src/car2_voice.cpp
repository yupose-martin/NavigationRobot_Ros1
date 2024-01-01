#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"

class VoiceCmdVel {
public:
    VoiceCmdVel() {
        // 初始化订阅者和发布者
        sub = n.subscribe("voiceWords", 1000, &VoiceCmdVel::voiceCallback, this);
        pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 10);
    }

    void voiceCallback(const std_msgs::String::ConstPtr& msg) {
        geometry_msgs::Twist vel;
        // 根据接收到的消息调整速度
        if (msg->data.find("前") != std::string::npos) {
            vel.linear.x = 1.0;
        } else if (msg->data.find("后") != std::string::npos) {
            vel.linear.x = -1.0;
        } else if (msg->data.find("左") != std::string::npos) {
            vel.angular.z = 1.0;
        } else if (msg->data.find("右") != std::string::npos) {
            vel.angular.z = -1.0;
        } else {
            // 停止
            vel.linear.x = 0;
            vel.angular.z = 0;
        }
        pub.publish(vel);
    }

private:
    ros::NodeHandle n;
    ros::Subscriber sub;
    ros::Publisher pub;
};

int main(int argc, char **argv) {
    ros::init(argc, argv, "voice_cmd_vel");
    VoiceCmdVel voiceCmdVel;
    ros::spin();
    return 0;
}
