// Generated by gencpp from file clever/SetAttitude.msg
// DO NOT EDIT!


#ifndef CLEVER_MESSAGE_SETATTITUDE_H
#define CLEVER_MESSAGE_SETATTITUDE_H

#include <ros/service_traits.h>


#include <clever/SetAttitudeRequest.h>
#include <clever/SetAttitudeResponse.h>


namespace clever
{

struct SetAttitude
{

typedef SetAttitudeRequest Request;
typedef SetAttitudeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetAttitude
} // namespace clever


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::clever::SetAttitude > {
  static const char* value()
  {
    return "cc2080a08d58c004756f050a7b2dc084";
  }

  static const char* value(const ::clever::SetAttitude&) { return value(); }
};

template<>
struct DataType< ::clever::SetAttitude > {
  static const char* value()
  {
    return "clever/SetAttitude";
  }

  static const char* value(const ::clever::SetAttitude&) { return value(); }
};


// service_traits::MD5Sum< ::clever::SetAttitudeRequest> should match 
// service_traits::MD5Sum< ::clever::SetAttitude > 
template<>
struct MD5Sum< ::clever::SetAttitudeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::clever::SetAttitude >::value();
  }
  static const char* value(const ::clever::SetAttitudeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::clever::SetAttitudeRequest> should match 
// service_traits::DataType< ::clever::SetAttitude > 
template<>
struct DataType< ::clever::SetAttitudeRequest>
{
  static const char* value()
  {
    return DataType< ::clever::SetAttitude >::value();
  }
  static const char* value(const ::clever::SetAttitudeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::clever::SetAttitudeResponse> should match 
// service_traits::MD5Sum< ::clever::SetAttitude > 
template<>
struct MD5Sum< ::clever::SetAttitudeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::clever::SetAttitude >::value();
  }
  static const char* value(const ::clever::SetAttitudeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::clever::SetAttitudeResponse> should match 
// service_traits::DataType< ::clever::SetAttitude > 
template<>
struct DataType< ::clever::SetAttitudeResponse>
{
  static const char* value()
  {
    return DataType< ::clever::SetAttitude >::value();
  }
  static const char* value(const ::clever::SetAttitudeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CLEVER_MESSAGE_SETATTITUDE_H
