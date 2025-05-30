// Generated by gencpp from file motor_imagery/ReleaseGoal.msg
// DO NOT EDIT!


#ifndef MOTOR_IMAGERY_MESSAGE_RELEASEGOAL_H
#define MOTOR_IMAGERY_MESSAGE_RELEASEGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_imagery
{
template <class ContainerAllocator>
struct ReleaseGoal_
{
  typedef ReleaseGoal_<ContainerAllocator> Type;

  ReleaseGoal_()
    : release_position()  {
      release_position.assign(0.0);
  }
  ReleaseGoal_(const ContainerAllocator& _alloc)
    : release_position()  {
  (void)_alloc;
      release_position.assign(0.0);
  }



   typedef boost::array<double, 3>  _release_position_type;
  _release_position_type release_position;





  typedef boost::shared_ptr< ::motor_imagery::ReleaseGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_imagery::ReleaseGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ReleaseGoal_

typedef ::motor_imagery::ReleaseGoal_<std::allocator<void> > ReleaseGoal;

typedef boost::shared_ptr< ::motor_imagery::ReleaseGoal > ReleaseGoalPtr;
typedef boost::shared_ptr< ::motor_imagery::ReleaseGoal const> ReleaseGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_imagery::ReleaseGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motor_imagery::ReleaseGoal_<ContainerAllocator1> & lhs, const ::motor_imagery::ReleaseGoal_<ContainerAllocator2> & rhs)
{
  return lhs.release_position == rhs.release_position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motor_imagery::ReleaseGoal_<ContainerAllocator1> & lhs, const ::motor_imagery::ReleaseGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motor_imagery

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_imagery::ReleaseGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_imagery::ReleaseGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_imagery::ReleaseGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb30b7fc1693ae8b594278c08451ff30";
  }

  static const char* value(const ::motor_imagery::ReleaseGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb30b7fc1693ae8bULL;
  static const uint64_t static_value2 = 0x594278c08451ff30ULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_imagery/ReleaseGoal";
  }

  static const char* value(const ::motor_imagery::ReleaseGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# GOAL\n"
"float64[3] release_position\n"
;
  }

  static const char* value(const ::motor_imagery::ReleaseGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.release_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReleaseGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_imagery::ReleaseGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_imagery::ReleaseGoal_<ContainerAllocator>& v)
  {
    s << indent << "release_position[]" << std::endl;
    for (size_t i = 0; i < v.release_position.size(); ++i)
    {
      s << indent << "  release_position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.release_position[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_IMAGERY_MESSAGE_RELEASEGOAL_H
