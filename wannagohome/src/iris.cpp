#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "iris");
  ros::NodeHandle nh;

  int Count = 0;
  Count = 2;

  if (Count == 2)
  {
    std::cout <<"massage: " << Count << std::endl;
    std::cout <<"massage: " << Count << std::endl;
    std::cout <<"massage: " << Count << std::endl;
    std::cout <<"massage: " << Count << std::endl;
  }
}
