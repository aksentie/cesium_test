#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ghost");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
