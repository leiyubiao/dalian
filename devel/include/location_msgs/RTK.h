// Generated by gencpp from file location_msgs/RTK.msg
// DO NOT EDIT!


#ifndef LOCATION_MSGS_MESSAGE_RTK_H
#define LOCATION_MSGS_MESSAGE_RTK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace location_msgs
{
template <class ContainerAllocator>
struct RTK_
{
  typedef RTK_<ContainerAllocator> Type;

  RTK_()
    : gpstime(0.0)
    , longitude(0.0)
    , latitude(0.0)
    , height(0.0)
    , heading(0.0)
    , pitch(0.0)
    , roll(0.0)
    , velocity(0.0)
    , AccelX(0.0)
    , AccelY(0.0)
    , AccelZ(0.0)
    , status(0)  {
    }
  RTK_(const ContainerAllocator& _alloc)
    : gpstime(0.0)
    , longitude(0.0)
    , latitude(0.0)
    , height(0.0)
    , heading(0.0)
    , pitch(0.0)
    , roll(0.0)
    , velocity(0.0)
    , AccelX(0.0)
    , AccelY(0.0)
    , AccelZ(0.0)
    , status(0)  {
  (void)_alloc;
    }



   typedef double _gpstime_type;
  _gpstime_type gpstime;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _height_type;
  _height_type height;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef double _AccelX_type;
  _AccelX_type AccelX;

   typedef double _AccelY_type;
  _AccelY_type AccelY;

   typedef double _AccelZ_type;
  _AccelZ_type AccelZ;

   typedef int32_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::location_msgs::RTK_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::location_msgs::RTK_<ContainerAllocator> const> ConstPtr;

}; // struct RTK_

typedef ::location_msgs::RTK_<std::allocator<void> > RTK;

typedef boost::shared_ptr< ::location_msgs::RTK > RTKPtr;
typedef boost::shared_ptr< ::location_msgs::RTK const> RTKConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::location_msgs::RTK_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::location_msgs::RTK_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::location_msgs::RTK_<ContainerAllocator1> & lhs, const ::location_msgs::RTK_<ContainerAllocator2> & rhs)
{
  return lhs.gpstime == rhs.gpstime &&
    lhs.longitude == rhs.longitude &&
    lhs.latitude == rhs.latitude &&
    lhs.height == rhs.height &&
    lhs.heading == rhs.heading &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll &&
    lhs.velocity == rhs.velocity &&
    lhs.AccelX == rhs.AccelX &&
    lhs.AccelY == rhs.AccelY &&
    lhs.AccelZ == rhs.AccelZ &&
    lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::location_msgs::RTK_<ContainerAllocator1> & lhs, const ::location_msgs::RTK_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace location_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::location_msgs::RTK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::location_msgs::RTK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::location_msgs::RTK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::location_msgs::RTK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::location_msgs::RTK_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::location_msgs::RTK_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::location_msgs::RTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6ebf4ab1d131fdca29632da4008b09ac";
  }

  static const char* value(const ::location_msgs::RTK_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6ebf4ab1d131fdcaULL;
  static const uint64_t static_value2 = 0x29632da4008b09acULL;
};

template<class ContainerAllocator>
struct DataType< ::location_msgs::RTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "location_msgs/RTK";
  }

  static const char* value(const ::location_msgs::RTK_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::location_msgs::RTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 gpstime\n"
"\n"
"float64 longitude\n"
"float64 latitude\n"
"float64 height\n"
"\n"
"float64 heading\n"
"float64 pitch\n"
"float64 roll\n"
"\n"
"float64 velocity\n"
"\n"
"float64 AccelX\n"
"float64 AccelY\n"
"float64 AccelZ\n"
"\n"
"int32 status\n"
;
  }

  static const char* value(const ::location_msgs::RTK_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::location_msgs::RTK_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gpstime);
      stream.next(m.longitude);
      stream.next(m.latitude);
      stream.next(m.height);
      stream.next(m.heading);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.velocity);
      stream.next(m.AccelX);
      stream.next(m.AccelY);
      stream.next(m.AccelZ);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RTK_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::location_msgs::RTK_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::location_msgs::RTK_<ContainerAllocator>& v)
  {
    s << indent << "gpstime: ";
    Printer<double>::stream(s, indent + "  ", v.gpstime);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "AccelX: ";
    Printer<double>::stream(s, indent + "  ", v.AccelX);
    s << indent << "AccelY: ";
    Printer<double>::stream(s, indent + "  ", v.AccelY);
    s << indent << "AccelZ: ";
    Printer<double>::stream(s, indent + "  ", v.AccelZ);
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOCATION_MSGS_MESSAGE_RTK_H
