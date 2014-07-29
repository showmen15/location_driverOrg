// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: drivermsg.proto

#ifndef PROTOBUF_drivermsg_2eproto__INCLUDED
#define PROTOBUF_drivermsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace amber {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_drivermsg_2eproto();
void protobuf_AssignDesc_drivermsg_2eproto();
void protobuf_ShutdownFile_drivermsg_2eproto();

class DriverHdr;
class DriverMsg;

enum DriverMsg_MsgType {
  DriverMsg_MsgType_DATA = 1,
  DriverMsg_MsgType_PING = 2,
  DriverMsg_MsgType_PONG = 3,
  DriverMsg_MsgType_CLIENT_DIED = 4,
  DriverMsg_MsgType_DRIVER_DIED = 5,
  DriverMsg_MsgType_SUBSCRIBE = 6,
  DriverMsg_MsgType_UNSUBSCRIBE = 7
};
bool DriverMsg_MsgType_IsValid(int value);
const DriverMsg_MsgType DriverMsg_MsgType_MsgType_MIN = DriverMsg_MsgType_DATA;
const DriverMsg_MsgType DriverMsg_MsgType_MsgType_MAX = DriverMsg_MsgType_UNSUBSCRIBE;
const int DriverMsg_MsgType_MsgType_ARRAYSIZE = DriverMsg_MsgType_MsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DriverMsg_MsgType_descriptor();
inline const ::std::string& DriverMsg_MsgType_Name(DriverMsg_MsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DriverMsg_MsgType_descriptor(), value);
}
inline bool DriverMsg_MsgType_Parse(
    const ::std::string& name, DriverMsg_MsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DriverMsg_MsgType>(
    DriverMsg_MsgType_descriptor(), name, value);
}
enum DeviceType {
  NINEDOF = 1,
  ROBOCLAW = 2,
  STARGAZER = 3,
  HOKUYO = 4,
  DUMMY = 5
};
bool DeviceType_IsValid(int value);
const DeviceType DeviceType_MIN = NINEDOF;
const DeviceType DeviceType_MAX = DUMMY;
const int DeviceType_ARRAYSIZE = DeviceType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DeviceType_descriptor();
inline const ::std::string& DeviceType_Name(DeviceType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DeviceType_descriptor(), value);
}
inline bool DeviceType_Parse(
    const ::std::string& name, DeviceType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DeviceType>(
    DeviceType_descriptor(), name, value);
}
// ===================================================================

class DriverHdr : public ::google::protobuf::Message {
 public:
  DriverHdr();
  virtual ~DriverHdr();
  
  DriverHdr(const DriverHdr& from);
  
  inline DriverHdr& operator=(const DriverHdr& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DriverHdr& default_instance();
  
  void Swap(DriverHdr* other);
  
  // implements Message ----------------------------------------------
  
  DriverHdr* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DriverHdr& from);
  void MergeFrom(const DriverHdr& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 deviceType = 1;
  inline bool has_devicetype() const;
  inline void clear_devicetype();
  static const int kDeviceTypeFieldNumber = 1;
  inline ::google::protobuf::int32 devicetype() const;
  inline void set_devicetype(::google::protobuf::int32 value);
  
  // optional int32 deviceID = 2;
  inline bool has_deviceid() const;
  inline void clear_deviceid();
  static const int kDeviceIDFieldNumber = 2;
  inline ::google::protobuf::int32 deviceid() const;
  inline void set_deviceid(::google::protobuf::int32 value);
  
  // repeated int32 clientIDs = 3 [packed = true];
  inline int clientids_size() const;
  inline void clear_clientids();
  static const int kClientIDsFieldNumber = 3;
  inline ::google::protobuf::int32 clientids(int index) const;
  inline void set_clientids(int index, ::google::protobuf::int32 value);
  inline void add_clientids(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      clientids() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_clientids();
  
  // @@protoc_insertion_point(class_scope:amber.DriverHdr)
 private:
  inline void set_has_devicetype();
  inline void clear_has_devicetype();
  inline void set_has_deviceid();
  inline void clear_has_deviceid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 devicetype_;
  ::google::protobuf::int32 deviceid_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > clientids_;
  mutable int _clientids_cached_byte_size_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_drivermsg_2eproto();
  friend void protobuf_AssignDesc_drivermsg_2eproto();
  friend void protobuf_ShutdownFile_drivermsg_2eproto();
  
  void InitAsDefaultInstance();
  static DriverHdr* default_instance_;
};
// -------------------------------------------------------------------

class DriverMsg : public ::google::protobuf::Message {
 public:
  DriverMsg();
  virtual ~DriverMsg();
  
  DriverMsg(const DriverMsg& from);
  
  inline DriverMsg& operator=(const DriverMsg& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DriverMsg& default_instance();
  
  void Swap(DriverMsg* other);
  
  // implements Message ----------------------------------------------
  
  DriverMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DriverMsg& from);
  void MergeFrom(const DriverMsg& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef DriverMsg_MsgType MsgType;
  static const MsgType DATA = DriverMsg_MsgType_DATA;
  static const MsgType PING = DriverMsg_MsgType_PING;
  static const MsgType PONG = DriverMsg_MsgType_PONG;
  static const MsgType CLIENT_DIED = DriverMsg_MsgType_CLIENT_DIED;
  static const MsgType DRIVER_DIED = DriverMsg_MsgType_DRIVER_DIED;
  static const MsgType SUBSCRIBE = DriverMsg_MsgType_SUBSCRIBE;
  static const MsgType UNSUBSCRIBE = DriverMsg_MsgType_UNSUBSCRIBE;
  static inline bool MsgType_IsValid(int value) {
    return DriverMsg_MsgType_IsValid(value);
  }
  static const MsgType MsgType_MIN =
    DriverMsg_MsgType_MsgType_MIN;
  static const MsgType MsgType_MAX =
    DriverMsg_MsgType_MsgType_MAX;
  static const int MsgType_ARRAYSIZE =
    DriverMsg_MsgType_MsgType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MsgType_descriptor() {
    return DriverMsg_MsgType_descriptor();
  }
  static inline const ::std::string& MsgType_Name(MsgType value) {
    return DriverMsg_MsgType_Name(value);
  }
  static inline bool MsgType_Parse(const ::std::string& name,
      MsgType* value) {
    return DriverMsg_MsgType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .amber.DriverMsg.MsgType type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::amber::DriverMsg_MsgType type() const;
  inline void set_type(::amber::DriverMsg_MsgType value);
  
  // optional uint32 synNum = 3;
  inline bool has_synnum() const;
  inline void clear_synnum();
  static const int kSynNumFieldNumber = 3;
  inline ::google::protobuf::uint32 synnum() const;
  inline void set_synnum(::google::protobuf::uint32 value);
  
  // optional uint32 ackNum = 4;
  inline bool has_acknum() const;
  inline void clear_acknum();
  static const int kAckNumFieldNumber = 4;
  inline ::google::protobuf::uint32 acknum() const;
  inline void set_acknum(::google::protobuf::uint32 value);
  
  // optional uint32 listenerNum = 5;
  inline bool has_listenernum() const;
  inline void clear_listenernum();
  static const int kListenerNumFieldNumber = 5;
  inline ::google::protobuf::uint32 listenernum() const;
  inline void set_listenernum(::google::protobuf::uint32 value);
  
  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(DriverMsg)
  // @@protoc_insertion_point(class_scope:amber.DriverMsg)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_synnum();
  inline void clear_has_synnum();
  inline void set_has_acknum();
  inline void clear_has_acknum();
  inline void set_has_listenernum();
  inline void clear_has_listenernum();
  
  ::google::protobuf::internal::ExtensionSet _extensions_;
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int type_;
  ::google::protobuf::uint32 synnum_;
  ::google::protobuf::uint32 acknum_;
  ::google::protobuf::uint32 listenernum_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_drivermsg_2eproto();
  friend void protobuf_AssignDesc_drivermsg_2eproto();
  friend void protobuf_ShutdownFile_drivermsg_2eproto();
  
  void InitAsDefaultInstance();
  static DriverMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// DriverHdr

// optional int32 deviceType = 1;
inline bool DriverHdr::has_devicetype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DriverHdr::set_has_devicetype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DriverHdr::clear_has_devicetype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DriverHdr::clear_devicetype() {
  devicetype_ = 0;
  clear_has_devicetype();
}
inline ::google::protobuf::int32 DriverHdr::devicetype() const {
  return devicetype_;
}
inline void DriverHdr::set_devicetype(::google::protobuf::int32 value) {
  set_has_devicetype();
  devicetype_ = value;
}

// optional int32 deviceID = 2;
inline bool DriverHdr::has_deviceid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DriverHdr::set_has_deviceid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DriverHdr::clear_has_deviceid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DriverHdr::clear_deviceid() {
  deviceid_ = 0;
  clear_has_deviceid();
}
inline ::google::protobuf::int32 DriverHdr::deviceid() const {
  return deviceid_;
}
inline void DriverHdr::set_deviceid(::google::protobuf::int32 value) {
  set_has_deviceid();
  deviceid_ = value;
}

// repeated int32 clientIDs = 3 [packed = true];
inline int DriverHdr::clientids_size() const {
  return clientids_.size();
}
inline void DriverHdr::clear_clientids() {
  clientids_.Clear();
}
inline ::google::protobuf::int32 DriverHdr::clientids(int index) const {
  return clientids_.Get(index);
}
inline void DriverHdr::set_clientids(int index, ::google::protobuf::int32 value) {
  clientids_.Set(index, value);
}
inline void DriverHdr::add_clientids(::google::protobuf::int32 value) {
  clientids_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
DriverHdr::clientids() const {
  return clientids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
DriverHdr::mutable_clientids() {
  return &clientids_;
}

// -------------------------------------------------------------------

// DriverMsg

// required .amber.DriverMsg.MsgType type = 2;
inline bool DriverMsg::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DriverMsg::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DriverMsg::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DriverMsg::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::amber::DriverMsg_MsgType DriverMsg::type() const {
  return static_cast< ::amber::DriverMsg_MsgType >(type_);
}
inline void DriverMsg::set_type(::amber::DriverMsg_MsgType value) {
  GOOGLE_DCHECK(::amber::DriverMsg_MsgType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional uint32 synNum = 3;
inline bool DriverMsg::has_synnum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DriverMsg::set_has_synnum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DriverMsg::clear_has_synnum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DriverMsg::clear_synnum() {
  synnum_ = 0u;
  clear_has_synnum();
}
inline ::google::protobuf::uint32 DriverMsg::synnum() const {
  return synnum_;
}
inline void DriverMsg::set_synnum(::google::protobuf::uint32 value) {
  set_has_synnum();
  synnum_ = value;
}

// optional uint32 ackNum = 4;
inline bool DriverMsg::has_acknum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DriverMsg::set_has_acknum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DriverMsg::clear_has_acknum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DriverMsg::clear_acknum() {
  acknum_ = 0u;
  clear_has_acknum();
}
inline ::google::protobuf::uint32 DriverMsg::acknum() const {
  return acknum_;
}
inline void DriverMsg::set_acknum(::google::protobuf::uint32 value) {
  set_has_acknum();
  acknum_ = value;
}

// optional uint32 listenerNum = 5;
inline bool DriverMsg::has_listenernum() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DriverMsg::set_has_listenernum() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DriverMsg::clear_has_listenernum() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DriverMsg::clear_listenernum() {
  listenernum_ = 0u;
  clear_has_listenernum();
}
inline ::google::protobuf::uint32 DriverMsg::listenernum() const {
  return listenernum_;
}
inline void DriverMsg::set_listenernum(::google::protobuf::uint32 value) {
  set_has_listenernum();
  listenernum_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace amber

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::amber::DriverMsg_MsgType>() {
  return ::amber::DriverMsg_MsgType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< amber::DeviceType>() {
  return amber::DeviceType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_drivermsg_2eproto__INCLUDED
