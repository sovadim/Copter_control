// Generated by gencpp from file clever/NavigateGlobal.msg
// DO NOT EDIT!


#ifndef CLEVER_MESSAGE_NAVIGATEGLOBAL_H
#define CLEVER_MESSAGE_NAVIGATEGLOBAL_H

#include <ros/service_traits.h>


#include <clever/NavigateGlobalRequest.h>
#include <clever/NavigateGlobalResponse.h>


namespace clever
{

struct NavigateGlobal
{

typedef NavigateGlobalRequest Request;
typedef NavigateGlobalResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct NavigateGlobal
} // namespace clever


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::clever::NavigateGlobal > {
  static const char* value()
  {
    return "fd9375a2b183ad5a1c80cf671893464b";
  }

  static const char* value(const ::clever::NavigateGlobal&) { return value(); }
};

template<>
struct DataType< ::clever::NavigateGlobal > {
  static const char* value()
  {
    return "clever/NavigateGlobal";
  }

  static const char* value(const ::clever::NavigateGlobal&) { return value(); }
};


// service_traits::MD5Sum< ::clever::NavigateGlobalRequest> should match 
// service_traits::MD5Sum< ::clever::NavigateGlobal > 
template<>
struct MD5Sum< ::clever::NavigateGlobalRequest>
{
  static const char* value()
  {
    return MD5Sum< ::clever::NavigateGlobal >::value();
  }
  static const char* value(const ::clever::NavigateGlobalRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::clever::NavigateGlobalRequest> should match 
// service_traits::DataType< ::clever::NavigateGlobal > 
template<>
struct DataType< ::clever::NavigateGlobalRequest>
{
  static const char* value()
  {
    return DataType< ::clever::NavigateGlobal >::value();
  }
  static const char* value(const ::clever::NavigateGlobalRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::clever::NavigateGlobalResponse> should match 
// service_traits::MD5Sum< ::clever::NavigateGlobal > 
template<>
struct MD5Sum< ::clever::NavigateGlobalResponse>
{
  static const char* value()
  {
    return MD5Sum< ::clever::NavigateGlobal >::value();
  }
  static const char* value(const ::clever::NavigateGlobalResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::clever::NavigateGlobalResponse> should match 
// service_traits::DataType< ::clever::NavigateGlobal > 
template<>
struct DataType< ::clever::NavigateGlobalResponse>
{
  static const char* value()
  {
    return DataType< ::clever::NavigateGlobal >::value();
  }
  static const char* value(const ::clever::NavigateGlobalResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CLEVER_MESSAGE_NAVIGATEGLOBAL_H
