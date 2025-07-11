# generated from rosidl_generator_py/resource/_idl.py.em
# with input from airsim_interfaces:srv/LandGroup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LandGroup_Request(type):
    """Metaclass of message 'LandGroup_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('airsim_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'airsim_interfaces.srv.LandGroup_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__land_group__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__land_group__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__land_group__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__land_group__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__land_group__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LandGroup_Request(metaclass=Metaclass_LandGroup_Request):
    """Message class 'LandGroup_Request'."""

    __slots__ = [
        '_vehicle_names',
        '_wait_on_last_task',
    ]

    _fields_and_field_types = {
        'vehicle_names': 'sequence<string>',
        'wait_on_last_task': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_names = kwargs.get('vehicle_names', [])
        self.wait_on_last_task = kwargs.get('wait_on_last_task', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.vehicle_names != other.vehicle_names:
            return False
        if self.wait_on_last_task != other.wait_on_last_task:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vehicle_names(self):
        """Message field 'vehicle_names'."""
        return self._vehicle_names

    @vehicle_names.setter
    def vehicle_names(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'vehicle_names' field must be a set or sequence and each value of type 'str'"
        self._vehicle_names = value

    @builtins.property
    def wait_on_last_task(self):
        """Message field 'wait_on_last_task'."""
        return self._wait_on_last_task

    @wait_on_last_task.setter
    def wait_on_last_task(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wait_on_last_task' field must be of type 'bool'"
        self._wait_on_last_task = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LandGroup_Response(type):
    """Metaclass of message 'LandGroup_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('airsim_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'airsim_interfaces.srv.LandGroup_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__land_group__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__land_group__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__land_group__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__land_group__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__land_group__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LandGroup_Response(metaclass=Metaclass_LandGroup_Response):
    """Message class 'LandGroup_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_LandGroup(type):
    """Metaclass of service 'LandGroup'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('airsim_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'airsim_interfaces.srv.LandGroup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__land_group

            from airsim_interfaces.srv import _land_group
            if _land_group.Metaclass_LandGroup_Request._TYPE_SUPPORT is None:
                _land_group.Metaclass_LandGroup_Request.__import_type_support__()
            if _land_group.Metaclass_LandGroup_Response._TYPE_SUPPORT is None:
                _land_group.Metaclass_LandGroup_Response.__import_type_support__()


class LandGroup(metaclass=Metaclass_LandGroup):
    from airsim_interfaces.srv._land_group import LandGroup_Request as Request
    from airsim_interfaces.srv._land_group import LandGroup_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
