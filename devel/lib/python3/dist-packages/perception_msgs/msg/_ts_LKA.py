# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from perception_msgs/ts_LKA.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class ts_LKA(genpy.Message):
  _md5sum = "735c1f26da9c3fb23d10971553941226"
  _type = "perception_msgs/ts_LKA"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
int64 lanetype  #0-dashed 1-solid 2-undecided 3-road edge 4-double lane mark 5-Botts' dots 6-invalid
int64 quality   #0,1-low quality 2,3-high quality
int64 model     # 1-linear, 2-parabolic, 3-3rd degree model
float64 View_range
float64 Position_C0
float64 Headingangle_C1
float64 Curvature_C2
float64 dCurvature_C3
float64 Lane_width
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','lanetype','quality','model','View_range','Position_C0','Headingangle_C1','Curvature_C2','dCurvature_C3','Lane_width']
  _slot_types = ['std_msgs/Header','int64','int64','int64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,lanetype,quality,model,View_range,Position_C0,Headingangle_C1,Curvature_C2,dCurvature_C3,Lane_width

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ts_LKA, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.lanetype is None:
        self.lanetype = 0
      if self.quality is None:
        self.quality = 0
      if self.model is None:
        self.model = 0
      if self.View_range is None:
        self.View_range = 0.
      if self.Position_C0 is None:
        self.Position_C0 = 0.
      if self.Headingangle_C1 is None:
        self.Headingangle_C1 = 0.
      if self.Curvature_C2 is None:
        self.Curvature_C2 = 0.
      if self.dCurvature_C3 is None:
        self.dCurvature_C3 = 0.
      if self.Lane_width is None:
        self.Lane_width = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.lanetype = 0
      self.quality = 0
      self.model = 0
      self.View_range = 0.
      self.Position_C0 = 0.
      self.Headingangle_C1 = 0.
      self.Curvature_C2 = 0.
      self.dCurvature_C3 = 0.
      self.Lane_width = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3q6d().pack(_x.lanetype, _x.quality, _x.model, _x.View_range, _x.Position_C0, _x.Headingangle_C1, _x.Curvature_C2, _x.dCurvature_C3, _x.Lane_width))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 72
      (_x.lanetype, _x.quality, _x.model, _x.View_range, _x.Position_C0, _x.Headingangle_C1, _x.Curvature_C2, _x.dCurvature_C3, _x.Lane_width,) = _get_struct_3q6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3q6d().pack(_x.lanetype, _x.quality, _x.model, _x.View_range, _x.Position_C0, _x.Headingangle_C1, _x.Curvature_C2, _x.dCurvature_C3, _x.Lane_width))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 72
      (_x.lanetype, _x.quality, _x.model, _x.View_range, _x.Position_C0, _x.Headingangle_C1, _x.Curvature_C2, _x.dCurvature_C3, _x.Lane_width,) = _get_struct_3q6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3q6d = None
def _get_struct_3q6d():
    global _struct_3q6d
    if _struct_3q6d is None:
        _struct_3q6d = struct.Struct("<3q6d")
    return _struct_3q6d
