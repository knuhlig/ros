#include <ros/ros.h>
#include <msg_util/Msg.h>
#include <std_msgs/String.h>

#define NODE_NAME "example_node"

int main(int argc, char** argv){
  // initialize node
  ros::init(argc, argv, NODE_NAME);
  ros::NodeHandle nh;
  
  // create a publisher
  ros::Publisher pub = nh.advertise<std_msgs::String>("chatter", 0);
  
  ros::Rate loop_rate(10.0);
  int count = 0;
  char strbuf[1024];
  
  while (ros::ok()) {
    //Msg::publishString("chatter", "Hello world!");
    
    // publish the message
    std_msgs::String msg;
    sprintf(strbuf, "Hello world %d!", count);
    msg.data = strbuf;
    pub.publish(msg);
    
    count++;    
    loop_rate.sleep();
  }
  
  return 0;
}

