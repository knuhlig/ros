#ifndef MSG_H
#define MSG_H

#include <visualization_msgs/Marker.h>

class Msg {
  public:
    static void publishMarker(std::string topic, visualization_msgs::Marker msg);
};

#endif

