// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from airsim_interfaces:srv/SetAltitudeGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "airsim_interfaces/srv/detail/set_altitude_group__rosidl_typesupport_introspection_c.h"
#include "airsim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "airsim_interfaces/srv/detail/set_altitude_group__functions.h"
#include "airsim_interfaces/srv/detail/set_altitude_group__struct.h"


// Include directives for member types
// Member `vehicle_names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  airsim_interfaces__srv__SetAltitudeGroup_Request__init(message_memory);
}

void airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_fini_function(void * message_memory)
{
  airsim_interfaces__srv__SetAltitudeGroup_Request__fini(message_memory);
}

size_t airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__size_function__SetAltitudeGroup_Request__vehicle_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__get_const_function__SetAltitudeGroup_Request__vehicle_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__get_function__SetAltitudeGroup_Request__vehicle_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__fetch_function__SetAltitudeGroup_Request__vehicle_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__get_const_function__SetAltitudeGroup_Request__vehicle_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__assign_function__SetAltitudeGroup_Request__vehicle_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__get_function__SetAltitudeGroup_Request__vehicle_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__resize_function__SetAltitudeGroup_Request__vehicle_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_member_array[4] = {
  {
    "vehicle_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(airsim_interfaces__srv__SetAltitudeGroup_Request, vehicle_names),  // bytes offset in struct
    NULL,  // default value
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__size_function__SetAltitudeGroup_Request__vehicle_names,  // size() function pointer
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__get_const_function__SetAltitudeGroup_Request__vehicle_names,  // get_const(index) function pointer
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__get_function__SetAltitudeGroup_Request__vehicle_names,  // get(index) function pointer
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__fetch_function__SetAltitudeGroup_Request__vehicle_names,  // fetch(index, &value) function pointer
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__assign_function__SetAltitudeGroup_Request__vehicle_names,  // assign(index, value) function pointer
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__resize_function__SetAltitudeGroup_Request__vehicle_names  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(airsim_interfaces__srv__SetAltitudeGroup_Request, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(airsim_interfaces__srv__SetAltitudeGroup_Request, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_on_last_task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(airsim_interfaces__srv__SetAltitudeGroup_Request, wait_on_last_task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_members = {
  "airsim_interfaces__srv",  // message namespace
  "SetAltitudeGroup_Request",  // message name
  4,  // number of fields
  sizeof(airsim_interfaces__srv__SetAltitudeGroup_Request),
  airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_member_array,  // message members
  airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_type_support_handle = {
  0,
  &airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_airsim_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup_Request)() {
  if (!airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_type_support_handle.typesupport_identifier) {
    airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &airsim_interfaces__srv__SetAltitudeGroup_Request__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "airsim_interfaces/srv/detail/set_altitude_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "airsim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "airsim_interfaces/srv/detail/set_altitude_group__functions.h"
// already included above
// #include "airsim_interfaces/srv/detail/set_altitude_group__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  airsim_interfaces__srv__SetAltitudeGroup_Response__init(message_memory);
}

void airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_fini_function(void * message_memory)
{
  airsim_interfaces__srv__SetAltitudeGroup_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(airsim_interfaces__srv__SetAltitudeGroup_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(airsim_interfaces__srv__SetAltitudeGroup_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_members = {
  "airsim_interfaces__srv",  // message namespace
  "SetAltitudeGroup_Response",  // message name
  2,  // number of fields
  sizeof(airsim_interfaces__srv__SetAltitudeGroup_Response),
  airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_member_array,  // message members
  airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_type_support_handle = {
  0,
  &airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_airsim_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup_Response)() {
  if (!airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_type_support_handle.typesupport_identifier) {
    airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &airsim_interfaces__srv__SetAltitudeGroup_Response__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "airsim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "airsim_interfaces/srv/detail/set_altitude_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_members = {
  "airsim_interfaces__srv",  // service namespace
  "SetAltitudeGroup",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_Request_message_type_support_handle,
  NULL  // response message
  // airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_Response_message_type_support_handle
};

static rosidl_service_type_support_t airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_type_support_handle = {
  0,
  &airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_airsim_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup)() {
  if (!airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_type_support_handle.typesupport_identifier) {
    airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, airsim_interfaces, srv, SetAltitudeGroup_Response)()->data;
  }

  return &airsim_interfaces__srv__detail__set_altitude_group__rosidl_typesupport_introspection_c__SetAltitudeGroup_service_type_support_handle;
}
