// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from assignment1:action/Pos.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "assignment1/action/detail/pos__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_Goal_type_support_ids_t;

static const _Pos_Goal_type_support_ids_t _Pos_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_Goal_type_support_symbol_names_t _Pos_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_Goal)),
  }
};

typedef struct _Pos_Goal_type_support_data_t
{
  void * data[2];
} _Pos_Goal_type_support_data_t;

static _Pos_Goal_type_support_data_t _Pos_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_Goal_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_Goal>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_Goal)() {
  return get_message_type_support_handle<assignment1::action::Pos_Goal>();
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
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_Result_type_support_ids_t;

static const _Pos_Result_type_support_ids_t _Pos_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_Result_type_support_symbol_names_t _Pos_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_Result)),
  }
};

typedef struct _Pos_Result_type_support_data_t
{
  void * data[2];
} _Pos_Result_type_support_data_t;

static _Pos_Result_type_support_data_t _Pos_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_Result_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_Result>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_Result)() {
  return get_message_type_support_handle<assignment1::action::Pos_Result>();
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
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_Feedback_type_support_ids_t;

static const _Pos_Feedback_type_support_ids_t _Pos_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_Feedback_type_support_symbol_names_t _Pos_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_Feedback)),
  }
};

typedef struct _Pos_Feedback_type_support_data_t
{
  void * data[2];
} _Pos_Feedback_type_support_data_t;

static _Pos_Feedback_type_support_data_t _Pos_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_Feedback_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_Feedback>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_Feedback)() {
  return get_message_type_support_handle<assignment1::action::Pos_Feedback>();
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
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_SendGoal_Request_type_support_ids_t;

static const _Pos_SendGoal_Request_type_support_ids_t _Pos_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_SendGoal_Request_type_support_symbol_names_t _Pos_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_SendGoal_Request)),
  }
};

typedef struct _Pos_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Pos_SendGoal_Request_type_support_data_t;

static _Pos_SendGoal_Request_type_support_data_t _Pos_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_SendGoal_Request_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_SendGoal_Request>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_SendGoal_Request)() {
  return get_message_type_support_handle<assignment1::action::Pos_SendGoal_Request>();
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
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_SendGoal_Response_type_support_ids_t;

static const _Pos_SendGoal_Response_type_support_ids_t _Pos_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_SendGoal_Response_type_support_symbol_names_t _Pos_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_SendGoal_Response)),
  }
};

typedef struct _Pos_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Pos_SendGoal_Response_type_support_data_t;

static _Pos_SendGoal_Response_type_support_data_t _Pos_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_SendGoal_Response_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_SendGoal_Response>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_SendGoal_Response)() {
  return get_message_type_support_handle<assignment1::action::Pos_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_SendGoal_type_support_ids_t;

static const _Pos_SendGoal_type_support_ids_t _Pos_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_SendGoal_type_support_symbol_names_t _Pos_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_SendGoal)),
  }
};

typedef struct _Pos_SendGoal_type_support_data_t
{
  void * data[2];
} _Pos_SendGoal_type_support_data_t;

static _Pos_SendGoal_type_support_data_t _Pos_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_SendGoal_service_typesupport_map = {
  2,
  "assignment1",
  &_Pos_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Pos_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Pos_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Pos_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<assignment1::action::Pos_SendGoal>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<assignment1::action::Pos_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_GetResult_Request_type_support_ids_t;

static const _Pos_GetResult_Request_type_support_ids_t _Pos_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_GetResult_Request_type_support_symbol_names_t _Pos_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_GetResult_Request)),
  }
};

typedef struct _Pos_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Pos_GetResult_Request_type_support_data_t;

static _Pos_GetResult_Request_type_support_data_t _Pos_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_GetResult_Request_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_GetResult_Request>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_GetResult_Request)() {
  return get_message_type_support_handle<assignment1::action::Pos_GetResult_Request>();
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
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_GetResult_Response_type_support_ids_t;

static const _Pos_GetResult_Response_type_support_ids_t _Pos_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_GetResult_Response_type_support_symbol_names_t _Pos_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_GetResult_Response)),
  }
};

typedef struct _Pos_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Pos_GetResult_Response_type_support_data_t;

static _Pos_GetResult_Response_type_support_data_t _Pos_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_GetResult_Response_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_GetResult_Response>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_GetResult_Response)() {
  return get_message_type_support_handle<assignment1::action::Pos_GetResult_Response>();
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
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_GetResult_type_support_ids_t;

static const _Pos_GetResult_type_support_ids_t _Pos_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_GetResult_type_support_symbol_names_t _Pos_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_GetResult)),
  }
};

typedef struct _Pos_GetResult_type_support_data_t
{
  void * data[2];
} _Pos_GetResult_type_support_data_t;

static _Pos_GetResult_type_support_data_t _Pos_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_GetResult_service_typesupport_map = {
  2,
  "assignment1",
  &_Pos_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Pos_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Pos_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Pos_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<assignment1::action::Pos_GetResult>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<assignment1::action::Pos_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "assignment1/action/detail/pos__struct.hpp"
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

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Pos_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pos_FeedbackMessage_type_support_ids_t;

static const _Pos_FeedbackMessage_type_support_ids_t _Pos_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Pos_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pos_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pos_FeedbackMessage_type_support_symbol_names_t _Pos_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment1, action, Pos_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment1, action, Pos_FeedbackMessage)),
  }
};

typedef struct _Pos_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Pos_FeedbackMessage_type_support_data_t;

static _Pos_FeedbackMessage_type_support_data_t _Pos_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pos_FeedbackMessage_message_typesupport_map = {
  2,
  "assignment1",
  &_Pos_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Pos_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Pos_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pos_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pos_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment1::action::Pos_FeedbackMessage>()
{
  return &::assignment1::action::rosidl_typesupport_cpp::Pos_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos_FeedbackMessage)() {
  return get_message_type_support_handle<assignment1::action::Pos_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "assignment1/action/detail/pos__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace assignment1
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Pos_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace assignment1

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<assignment1::action::Pos>()
{
  using ::assignment1::action::rosidl_typesupport_cpp::Pos_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Pos_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::assignment1::action::Pos::Impl::SendGoalService>();
  Pos_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::assignment1::action::Pos::Impl::GetResultService>();
  Pos_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::assignment1::action::Pos::Impl::CancelGoalService>();
  Pos_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::assignment1::action::Pos::Impl::FeedbackMessage>();
  Pos_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::assignment1::action::Pos::Impl::GoalStatusMessage>();
  return &Pos_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, assignment1, action, Pos)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<assignment1::action::Pos>();
}

#ifdef __cplusplus
}
#endif
