// Generated by gencpp from file clever/SetLEDEffect.msg
// DO NOT EDIT!


#ifndef CLEVER_MESSAGE_SETLEDEFFECT_H
#define CLEVER_MESSAGE_SETLEDEFFECT_H

#include <ros/service_traits.h>


#include <clever/SetLEDEffectRequest.h>
#include <clever/SetLEDEffectResponse.h>


namespace clever
{

struct SetLEDEffect
{

typedef SetLEDEffectRequest Request;
typedef SetLEDEffectResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetLEDEffect
} // namespace clever


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::clever::SetLEDEffect > {
  static const char* value()
  {
    return "044f75c927403b22bd59e8dbf871eabd";
  }

  static const char* value(const ::clever::SetLEDEffect&) { return value(); }
};

template<>
struct DataType< ::clever::SetLEDEffect > {
  static const char* value()
  {
    return "clever/SetLEDEffect";
  }

  static const char* value(const ::clever::SetLEDEffect&) { return value(); }
};


// service_traits::MD5Sum< ::clever::SetLEDEffectRequest> should match 
// service_traits::MD5Sum< ::clever::SetLEDEffect > 
template<>
struct MD5Sum< ::clever::SetLEDEffectRequest>
{
  static const char* value()
  {
    return MD5Sum< ::clever::SetLEDEffect >::value();
  }
  static const char* value(const ::clever::SetLEDEffectRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::clever::SetLEDEffectRequest> should match 
// service_traits::DataType< ::clever::SetLEDEffect > 
template<>
struct DataType< ::clever::SetLEDEffectRequest>
{
  static const char* value()
  {
    return DataType< ::clever::SetLEDEffect >::value();
  }
  static const char* value(const ::clever::SetLEDEffectRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::clever::SetLEDEffectResponse> should match 
// service_traits::MD5Sum< ::clever::SetLEDEffect > 
template<>
struct MD5Sum< ::clever::SetLEDEffectResponse>
{
  static const char* value()
  {
    return MD5Sum< ::clever::SetLEDEffect >::value();
  }
  static const char* value(const ::clever::SetLEDEffectResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::clever::SetLEDEffectResponse> should match 
// service_traits::DataType< ::clever::SetLEDEffect > 
template<>
struct DataType< ::clever::SetLEDEffectResponse>
{
  static const char* value()
  {
    return DataType< ::clever::SetLEDEffect >::value();
  }
  static const char* value(const ::clever::SetLEDEffectResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CLEVER_MESSAGE_SETLEDEFFECT_H
