#include <ros/ros.h>

#define NODE_NAME "example_node"

int main(int argc, char** argv){
  // initialize node
  ros::init(argc, argv, NODE_NAME);
  ros::NodeHandle nh;
  
  ros::Rate loop_rate(10.0);
  int count = 0;
  
  while (ros::ok()) {
    ROS_INFO("hello world, count=%d", count);
    count++;
    
    loop_rate.sleep();
  }
  
  return 0;
}

