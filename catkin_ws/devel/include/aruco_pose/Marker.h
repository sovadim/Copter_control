// Generated by gencpp from file aruco_pose/Marker.msg
// DO NOT EDIT!


#ifndef ARUCO_POSE_MESSAGE_MARKER_H
#define ARUCO_POSE_MESSAGE_MARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <aruco_pose/Point2D.h>
#include <aruco_pose/Point2D.h>
#include <aruco_pose/Point2D.h>
#include <aruco_pose/Point2D.h>

namespace aruco_pose
{
template <class ContainerAllocator>
struct Marker_
{
  typedef Marker_<ContainerAllocator> Type;

  Marker_()
    : id(0)
    , length(0.0)
    , pose()
    , c1()
    , c2()
    , c3()
    , c4()  {
    }
  Marker_(const ContainerAllocator& _alloc)
    : id(0)
    , length(0.0)
    , pose(_alloc)
    , c1(_alloc)
    , c2(_alloc)
    , c3(_alloc)
    , c4(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef float _length_type;
  _length_type length;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::aruco_pose::Point2D_<ContainerAllocator>  _c1_type;
  _c1_type c1;

   typedef  ::aruco_pose::Point2D_<ContainerAllocator>  _c2_type;
  _c2_type c2;

   typedef  ::aruco_pose::Point2D_<ContainerAllocator>  _c3_type;
  _c3_type c3;

   typedef  ::aruco_pose::Point2D_<ContainerAllocator>  _c4_type;
  _c4_type c4;





  typedef boost::shared_ptr< ::aruco_pose::Marker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aruco_pose::Marker_<ContainerAllocator> const> ConstPtr;

}; // struct Marker_

typedef ::aruco_pose::Marker_<std::allocator<void> > Marker;

typedef boost::shared_ptr< ::aruco_pose::Marker > MarkerPtr;
typedef boost::shared_ptr< ::aruco_pose::Marker const> MarkerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aruco_pose::Marker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aruco_pose::Marker_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aruco_pose

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'aruco_pose': ['/home/pi/catkin_ws/src/clever/aruco_pose/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aruco_pose::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aruco_pose::Marker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aruco_pose::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aruco_pose::Marker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aruco_pose::Marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aruco_pose::Marker_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aruco_pose::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac210d89096a042287e44f6279b6b76f";
  }

  static const char* value(const ::aruco_pose::Marker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac210d89096a0422ULL;
  static const uint64_t static_value2 = 0x87e44f6279b6b76fULL;
};

template<class ContainerAllocator>
struct DataType< ::aruco_pose::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aruco_pose/Marker";
  }

  static const char* value(const ::aruco_pose::Marker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aruco_pose::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id\n"
"float32 length\n"
"geometry_msgs/Pose pose\n"
"Point2D c1\n"
"Point2D c2\n"
"Point2D c3\n"
"Point2D c4\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: aruco_pose/Point2D\n"
"float32 x\n"
"float32 y\n"
;
  }

  static const char* value(const ::aruco_pose::Marker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aruco_pose::Marker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.length);
      stream.next(m.pose);
      stream.next(m.c1);
      stream.next(m.c2);
      stream.next(m.c3);
      stream.next(m.c4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Marker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aruco_pose::Marker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aruco_pose::Marker_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "c1: ";
    s << std::endl;
    Printer< ::aruco_pose::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.c1);
    s << indent << "c2: ";
    s << std::endl;
    Printer< ::aruco_pose::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.c2);
    s << indent << "c3: ";
    s << std::endl;
    Printer< ::aruco_pose::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.c3);
    s << indent << "c4: ";
    s << std::endl;
    Printer< ::aruco_pose::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.c4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARUCO_POSE_MESSAGE_MARKER_H
