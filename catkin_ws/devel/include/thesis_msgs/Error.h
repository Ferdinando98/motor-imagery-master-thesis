// Generated by gencpp from file thesis_msgs/Error.msg
// DO NOT EDIT!


#ifndef THESIS_MSGS_MESSAGE_ERROR_H
#define THESIS_MSGS_MESSAGE_ERROR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace thesis_msgs
{
template <class ContainerAllocator>
struct Error_
{
  typedef Error_<ContainerAllocator> Type;

  Error_()
    : positionErrorX(0.0)
    , positionErrorY(0.0)
    , positionErrorZ(0.0)
    , orientationErrorX(0.0)
    , orientationErrorY(0.0)
    , orientationErrorZ(0.0)  {
    }
  Error_(const ContainerAllocator& _alloc)
    : positionErrorX(0.0)
    , positionErrorY(0.0)
    , positionErrorZ(0.0)
    , orientationErrorX(0.0)
    , orientationErrorY(0.0)
    , orientationErrorZ(0.0)  {
  (void)_alloc;
    }



   typedef double _positionErrorX_type;
  _positionErrorX_type positionErrorX;

   typedef double _positionErrorY_type;
  _positionErrorY_type positionErrorY;

   typedef double _positionErrorZ_type;
  _positionErrorZ_type positionErrorZ;

   typedef double _orientationErrorX_type;
  _orientationErrorX_type orientationErrorX;

   typedef double _orientationErrorY_type;
  _orientationErrorY_type orientationErrorY;

   typedef double _orientationErrorZ_type;
  _orientationErrorZ_type orientationErrorZ;





  typedef boost::shared_ptr< ::thesis_msgs::Error_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::thesis_msgs::Error_<ContainerAllocator> const> ConstPtr;

}; // struct Error_

typedef ::thesis_msgs::Error_<std::allocator<void> > Error;

typedef boost::shared_ptr< ::thesis_msgs::Error > ErrorPtr;
typedef boost::shared_ptr< ::thesis_msgs::Error const> ErrorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::thesis_msgs::Error_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::thesis_msgs::Error_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::thesis_msgs::Error_<ContainerAllocator1> & lhs, const ::thesis_msgs::Error_<ContainerAllocator2> & rhs)
{
  return lhs.positionErrorX == rhs.positionErrorX &&
    lhs.positionErrorY == rhs.positionErrorY &&
    lhs.positionErrorZ == rhs.positionErrorZ &&
    lhs.orientationErrorX == rhs.orientationErrorX &&
    lhs.orientationErrorY == rhs.orientationErrorY &&
    lhs.orientationErrorZ == rhs.orientationErrorZ;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::thesis_msgs::Error_<ContainerAllocator1> & lhs, const ::thesis_msgs::Error_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace thesis_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::thesis_msgs::Error_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::thesis_msgs::Error_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::thesis_msgs::Error_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::thesis_msgs::Error_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::thesis_msgs::Error_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::thesis_msgs::Error_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::thesis_msgs::Error_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd3acb1596a75ae2de3d324b855e456f";
  }

  static const char* value(const ::thesis_msgs::Error_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd3acb1596a75ae2ULL;
  static const uint64_t static_value2 = 0xde3d324b855e456fULL;
};

template<class ContainerAllocator>
struct DataType< ::thesis_msgs::Error_<ContainerAllocator> >
{
  static const char* value()
  {
    return "thesis_msgs/Error";
  }

  static const char* value(const ::thesis_msgs::Error_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::thesis_msgs::Error_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 positionErrorX\n"
"float64 positionErrorY\n"
"float64 positionErrorZ\n"
"float64 orientationErrorX\n"
"float64 orientationErrorY\n"
"float64 orientationErrorZ\n"
;
  }

  static const char* value(const ::thesis_msgs::Error_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::thesis_msgs::Error_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.positionErrorX);
      stream.next(m.positionErrorY);
      stream.next(m.positionErrorZ);
      stream.next(m.orientationErrorX);
      stream.next(m.orientationErrorY);
      stream.next(m.orientationErrorZ);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Error_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::thesis_msgs::Error_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::thesis_msgs::Error_<ContainerAllocator>& v)
  {
    s << indent << "positionErrorX: ";
    Printer<double>::stream(s, indent + "  ", v.positionErrorX);
    s << indent << "positionErrorY: ";
    Printer<double>::stream(s, indent + "  ", v.positionErrorY);
    s << indent << "positionErrorZ: ";
    Printer<double>::stream(s, indent + "  ", v.positionErrorZ);
    s << indent << "orientationErrorX: ";
    Printer<double>::stream(s, indent + "  ", v.orientationErrorX);
    s << indent << "orientationErrorY: ";
    Printer<double>::stream(s, indent + "  ", v.orientationErrorY);
    s << indent << "orientationErrorZ: ";
    Printer<double>::stream(s, indent + "  ", v.orientationErrorZ);
  }
};

} // namespace message_operations
} // namespace ros

#endif // THESIS_MSGS_MESSAGE_ERROR_H
