// Generated by gencpp from file turtlebot_msgs/TakePanoramaRequest.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_MSGS_MESSAGE_TAKEPANORAMAREQUEST_H
#define TURTLEBOT_MSGS_MESSAGE_TAKEPANORAMAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_msgs
{
template <class ContainerAllocator>
struct TakePanoramaRequest_
{
  typedef TakePanoramaRequest_<ContainerAllocator> Type;

  TakePanoramaRequest_()
    : mode(0)
    , pano_angle(0.0)
    , snap_interval(0.0)
    , rot_vel(0.0)  {
    }
  TakePanoramaRequest_(const ContainerAllocator& _alloc)
    : mode(0)
    , pano_angle(0.0)
    , snap_interval(0.0)
    , rot_vel(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef float _pano_angle_type;
  _pano_angle_type pano_angle;

   typedef float _snap_interval_type;
  _snap_interval_type snap_interval;

   typedef float _rot_vel_type;
  _rot_vel_type rot_vel;



  enum {
    SNAPANDROTATE = 0u,
    CONTINUOUS = 1u,
    STOP = 2u,
  };


  typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TakePanoramaRequest_

typedef ::turtlebot_msgs::TakePanoramaRequest_<std::allocator<void> > TakePanoramaRequest;

typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaRequest > TakePanoramaRequestPtr;
typedef boost::shared_ptr< ::turtlebot_msgs::TakePanoramaRequest const> TakePanoramaRequestConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'turtlebot_msgs': ['/home/tranthanh/cafebot_ws/src/turtlebot_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f52c694c82704221735cc576c7587ecc";
  }

  static const char* value(const ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf52c694c82704221ULL;
  static const uint64_t static_value2 = 0x735cc576c7587eccULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_msgs/TakePanoramaRequest";
  }

  static const char* value(const ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 mode\n\
\n\
uint8 SNAPANDROTATE=0\n\
\n\
uint8 CONTINUOUS=1\n\
\n\
uint8 STOP=2\n\
\n\
float32 pano_angle\n\
\n\
float32 snap_interval\n\
\n\
float32 rot_vel\n\
\n\
";
  }

  static const char* value(const ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.pano_angle);
      stream.next(m.snap_interval);
      stream.next(m.rot_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakePanoramaRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot_msgs::TakePanoramaRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "pano_angle: ";
    Printer<float>::stream(s, indent + "  ", v.pano_angle);
    s << indent << "snap_interval: ";
    Printer<float>::stream(s, indent + "  ", v.snap_interval);
    s << indent << "rot_vel: ";
    Printer<float>::stream(s, indent + "  ", v.rot_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_MSGS_MESSAGE_TAKEPANORAMAREQUEST_H
