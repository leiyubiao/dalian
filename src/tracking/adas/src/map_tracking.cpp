#include "adas_control.h"
#include "plan.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "map_tracking");
    ros::NodeHandle nh;
    ros::Rate loop_rate(50);

    control_space::Controller control_(nh);
    adas_plan map_(nh);    
    map_.GetRouteFromFile();
    
    while(ros::ok)
    {
        control_.adas_tracking(map_.car_, map_.route_data_);

        // control_.Visualization(map_.car_, map_.route_data_[control_.nearest_point_index_]);
        loop_rate.sleep();
        ros::spinOnce();
 
    }

    for (int i = 0; i < 100; ++i)
        ROS_WARN("END!!!");
    return 0;

}