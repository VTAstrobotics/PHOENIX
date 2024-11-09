// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ros_babel_fish_test_msgs:action/SimpleTest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_Goal_type_support_ids_t;

static const _SimpleTest_Goal_type_support_ids_t _SimpleTest_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_Goal_type_support_symbol_names_t _SimpleTest_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Goal)),
  }
};

typedef struct _SimpleTest_Goal_type_support_data_t
{
  void * data[2];
} _SimpleTest_Goal_type_support_data_t;

static _SimpleTest_Goal_type_support_data_t _SimpleTest_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_Goal_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_Goal>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Goal)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_Result_type_support_ids_t;

static const _SimpleTest_Result_type_support_ids_t _SimpleTest_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_Result_type_support_symbol_names_t _SimpleTest_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Result)),
  }
};

typedef struct _SimpleTest_Result_type_support_data_t
{
  void * data[2];
} _SimpleTest_Result_type_support_data_t;

static _SimpleTest_Result_type_support_data_t _SimpleTest_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_Result_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_Result>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Result)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_Feedback_type_support_ids_t;

static const _SimpleTest_Feedback_type_support_ids_t _SimpleTest_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_Feedback_type_support_symbol_names_t _SimpleTest_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Feedback)),
  }
};

typedef struct _SimpleTest_Feedback_type_support_data_t
{
  void * data[2];
} _SimpleTest_Feedback_type_support_data_t;

static _SimpleTest_Feedback_type_support_data_t _SimpleTest_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_Feedback_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_Feedback)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_SendGoal_Request_type_support_ids_t;

static const _SimpleTest_SendGoal_Request_type_support_ids_t _SimpleTest_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_SendGoal_Request_type_support_symbol_names_t _SimpleTest_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal_Request)),
  }
};

typedef struct _SimpleTest_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SimpleTest_SendGoal_Request_type_support_data_t;

static _SimpleTest_SendGoal_Request_type_support_data_t _SimpleTest_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_SendGoal_Request_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal_Request)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_SendGoal_Response_type_support_ids_t;

static const _SimpleTest_SendGoal_Response_type_support_ids_t _SimpleTest_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_SendGoal_Response_type_support_symbol_names_t _SimpleTest_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal_Response)),
  }
};

typedef struct _SimpleTest_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SimpleTest_SendGoal_Response_type_support_data_t;

static _SimpleTest_SendGoal_Response_type_support_data_t _SimpleTest_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_SendGoal_Response_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal_Response)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_SendGoal_type_support_ids_t;

static const _SimpleTest_SendGoal_type_support_ids_t _SimpleTest_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_SendGoal_type_support_symbol_names_t _SimpleTest_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_SendGoal)),
  }
};

typedef struct _SimpleTest_SendGoal_type_support_data_t
{
  void * data[2];
} _SimpleTest_SendGoal_type_support_data_t;

static _SimpleTest_SendGoal_type_support_data_t _SimpleTest_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_SendGoal_service_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SimpleTest_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_SendGoal>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_GetResult_Request_type_support_ids_t;

static const _SimpleTest_GetResult_Request_type_support_ids_t _SimpleTest_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_GetResult_Request_type_support_symbol_names_t _SimpleTest_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult_Request)),
  }
};

typedef struct _SimpleTest_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SimpleTest_GetResult_Request_type_support_data_t;

static _SimpleTest_GetResult_Request_type_support_data_t _SimpleTest_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_GetResult_Request_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult_Request)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_GetResult_Response_type_support_ids_t;

static const _SimpleTest_GetResult_Response_type_support_ids_t _SimpleTest_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_GetResult_Response_type_support_symbol_names_t _SimpleTest_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult_Response)),
  }
};

typedef struct _SimpleTest_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SimpleTest_GetResult_Response_type_support_data_t;

static _SimpleTest_GetResult_Response_type_support_data_t _SimpleTest_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_GetResult_Response_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult_Response)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_GetResult_type_support_ids_t;

static const _SimpleTest_GetResult_type_support_ids_t _SimpleTest_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_GetResult_type_support_symbol_names_t _SimpleTest_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_GetResult)),
  }
};

typedef struct _SimpleTest_GetResult_type_support_data_t
{
  void * data[2];
} _SimpleTest_GetResult_type_support_data_t;

static _SimpleTest_GetResult_type_support_data_t _SimpleTest_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_GetResult_service_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SimpleTest_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_GetResult>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SimpleTest_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimpleTest_FeedbackMessage_type_support_ids_t;

static const _SimpleTest_FeedbackMessage_type_support_ids_t _SimpleTest_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SimpleTest_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimpleTest_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimpleTest_FeedbackMessage_type_support_symbol_names_t _SimpleTest_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_babel_fish_test_msgs, action, SimpleTest_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_babel_fish_test_msgs, action, SimpleTest_FeedbackMessage)),
  }
};

typedef struct _SimpleTest_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SimpleTest_FeedbackMessage_type_support_data_t;

static _SimpleTest_FeedbackMessage_type_support_data_t _SimpleTest_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimpleTest_FeedbackMessage_message_typesupport_map = {
  2,
  "ros_babel_fish_test_msgs",
  &_SimpleTest_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SimpleTest_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SimpleTest_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimpleTest_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimpleTest_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>()
{
  return &::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ros_babel_fish_test_msgs, action, SimpleTest_FeedbackMessage)() {
  return get_message_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ros_babel_fish_test_msgs/action/detail/simple_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ros_babel_fish_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t SimpleTest_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ros_babel_fish_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ros_babel_fish_test_msgs::action::SimpleTest>()
{
  using ::ros_babel_fish_test_msgs::action::rosidl_typesupport_cpp::SimpleTest_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  SimpleTest_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ros_babel_fish_test_msgs::action::SimpleTest::Impl::SendGoalService>();
  SimpleTest_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ros_babel_fish_test_msgs::action::SimpleTest::Impl::GetResultService>();
  SimpleTest_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ros_babel_fish_test_msgs::action::SimpleTest::Impl::CancelGoalService>();
  SimpleTest_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ros_babel_fish_test_msgs::action::SimpleTest::Impl::FeedbackMessage>();
  SimpleTest_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ros_babel_fish_test_msgs::action::SimpleTest::Impl::GoalStatusMessage>();
  return &SimpleTest_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
