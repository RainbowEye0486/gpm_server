# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gpm_interfaces:srv/Command.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Command_Request(type):
    """Metaclass of message 'Command_Request'."""

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
            module = import_type_support('gpm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpm_interfaces.srv.Command_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Command_Request(metaclass=Metaclass_Command_Request):
    """Message class 'Command_Request'."""

    __slots__ = [
        '_action',
        '_destination',
    ]

    _fields_and_field_types = {
        'action': 'string',
        'destination': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())
        self.destination = kwargs.get('destination', str())

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
        if self.action != other.action:
            return False
        if self.destination != other.destination:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @property
    def destination(self):
        """Message field 'destination'."""
        return self._destination

    @destination.setter
    def destination(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'destination' field must be of type 'str'"
        self._destination = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Command_Response(type):
    """Metaclass of message 'Command_Response'."""

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
            module = import_type_support('gpm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpm_interfaces.srv.Command_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Command_Response(metaclass=Metaclass_Command_Response):
    """Message class 'Command_Response'."""

    __slots__ = [
        '_device',
        '_accept',
    ]

    _fields_and_field_types = {
        'device': 'string',
        'accept': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device = kwargs.get('device', str())
        self.accept = kwargs.get('accept', bool())

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
        if self.device != other.device:
            return False
        if self.accept != other.accept:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def device(self):
        """Message field 'device'."""
        return self._device

    @device.setter
    def device(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device' field must be of type 'str'"
        self._device = value

    @property
    def accept(self):
        """Message field 'accept'."""
        return self._accept

    @accept.setter
    def accept(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accept' field must be of type 'bool'"
        self._accept = value


class Metaclass_Command(type):
    """Metaclass of service 'Command'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gpm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpm_interfaces.srv.Command')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__command

            from gpm_interfaces.srv import _command
            if _command.Metaclass_Command_Request._TYPE_SUPPORT is None:
                _command.Metaclass_Command_Request.__import_type_support__()
            if _command.Metaclass_Command_Response._TYPE_SUPPORT is None:
                _command.Metaclass_Command_Response.__import_type_support__()


class Command(metaclass=Metaclass_Command):
    from gpm_interfaces.srv._command import Command_Request as Request
    from gpm_interfaces.srv._command import Command_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
