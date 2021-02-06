#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "mint");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
