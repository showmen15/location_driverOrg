// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "drivermsg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace amber {

namespace {

const ::google::protobuf::Descriptor* DriverHdr_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DriverHdr_reflection_ = NULL;
const ::google::protobuf::Descriptor* DriverMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DriverMsg_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* DriverMsg_MsgType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DeviceType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_drivermsg_2eproto() {
  protobuf_AddDesc_drivermsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "drivermsg.proto");
  GOOGLE_CHECK(file != NULL);
  DriverHdr_descriptor_ = file->message_type(0);
  static const int DriverHdr_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverHdr, devicetype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverHdr, deviceid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverHdr, clientids_),
  };
  DriverHdr_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DriverHdr_descriptor_,
      DriverHdr::default_instance_,
      DriverHdr_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverHdr, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverHdr, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DriverHdr));
  DriverMsg_descriptor_ = file->message_type(1);
  static const int DriverMsg_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, synnum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, acknum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, listenernum_),
  };
  DriverMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DriverMsg_descriptor_,
      DriverMsg::default_instance_,
      DriverMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, _unknown_fields_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DriverMsg, _extensions_),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DriverMsg));
  DriverMsg_MsgType_descriptor_ = DriverMsg_descriptor_->enum_type(0);
  DeviceType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_drivermsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DriverHdr_descriptor_, &DriverHdr::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DriverMsg_descriptor_, &DriverMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_drivermsg_2eproto() {
  delete DriverHdr::default_instance_;
  delete DriverHdr_reflection_;
  delete DriverMsg::default_instance_;
  delete DriverMsg_reflection_;
}

void protobuf_AddDesc_drivermsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017drivermsg.proto\022\005amber\"H\n\tDriverHdr\022\022\n"
    "\ndeviceType\030\001 \001(\005\022\020\n\010deviceID\030\002 \001(\005\022\025\n\tc"
    "lientIDs\030\003 \003(\005B\002\020\001\"\331\001\n\tDriverMsg\022&\n\004type"
    "\030\002 \002(\0162\030.amber.DriverMsg.MsgType\022\016\n\006synN"
    "um\030\003 \001(\r\022\016\n\006ackNum\030\004 \001(\r\022\023\n\013listenerNum\030"
    "\005 \001(\r\"i\n\007MsgType\022\010\n\004DATA\020\001\022\010\n\004PING\020\002\022\010\n\004"
    "PONG\020\003\022\017\n\013CLIENT_DIED\020\004\022\017\n\013DRIVER_DIED\020\005"
    "\022\r\n\tSUBSCRIBE\020\006\022\017\n\013UNSUBSCRIBE\020\007*\004\010\010\020@*M"
    "\n\nDeviceType\022\013\n\007NINEDOF\020\001\022\014\n\010ROBOCLAW\020\002\022"
    "\r\n\tSTARGAZER\020\003\022\n\n\006HOKUYO\020\004\022\t\n\005DUMMY\020\005B.\n"
    "\035pl.edu.agh.amber.common.protoB\013CommonPr"
    "otoH\001", 445);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "drivermsg.proto", &protobuf_RegisterTypes);
  DriverHdr::default_instance_ = new DriverHdr();
  DriverMsg::default_instance_ = new DriverMsg();
  DriverHdr::default_instance_->InitAsDefaultInstance();
  DriverMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_drivermsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_drivermsg_2eproto {
  StaticDescriptorInitializer_drivermsg_2eproto() {
    protobuf_AddDesc_drivermsg_2eproto();
  }
} static_descriptor_initializer_drivermsg_2eproto_;

const ::google::protobuf::EnumDescriptor* DeviceType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DeviceType_descriptor_;
}
bool DeviceType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int DriverHdr::kDeviceTypeFieldNumber;
const int DriverHdr::kDeviceIDFieldNumber;
const int DriverHdr::kClientIDsFieldNumber;
#endif  // !_MSC_VER

DriverHdr::DriverHdr()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DriverHdr::InitAsDefaultInstance() {
}

DriverHdr::DriverHdr(const DriverHdr& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DriverHdr::SharedCtor() {
  _cached_size_ = 0;
  devicetype_ = 0;
  deviceid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DriverHdr::~DriverHdr() {
  SharedDtor();
}

void DriverHdr::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DriverHdr::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DriverHdr::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DriverHdr_descriptor_;
}

const DriverHdr& DriverHdr::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_drivermsg_2eproto();  return *default_instance_;
}

DriverHdr* DriverHdr::default_instance_ = NULL;

DriverHdr* DriverHdr::New() const {
  return new DriverHdr;
}

void DriverHdr::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    devicetype_ = 0;
    deviceid_ = 0;
  }
  clientids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DriverHdr::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 deviceType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &devicetype_)));
          set_has_devicetype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_deviceID;
        break;
      }
      
      // optional int32 deviceID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_deviceID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &deviceid_)));
          set_has_deviceid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_clientIDs;
        break;
      }
      
      // repeated int32 clientIDs = 3 [packed = true];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_clientIDs:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_clientids())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26, input, this->mutable_clientids())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DriverHdr::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 deviceType = 1;
  if (has_devicetype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->devicetype(), output);
  }
  
  // optional int32 deviceID = 2;
  if (has_deviceid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->deviceid(), output);
  }
  
  // repeated int32 clientIDs = 3 [packed = true];
  if (this->clientids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_clientids_cached_byte_size_);
  }
  for (int i = 0; i < this->clientids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->clientids(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DriverHdr::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 deviceType = 1;
  if (has_devicetype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->devicetype(), target);
  }
  
  // optional int32 deviceID = 2;
  if (has_deviceid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->deviceid(), target);
  }
  
  // repeated int32 clientIDs = 3 [packed = true];
  if (this->clientids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _clientids_cached_byte_size_, target);
  }
  for (int i = 0; i < this->clientids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->clientids(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DriverHdr::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 deviceType = 1;
    if (has_devicetype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->devicetype());
    }
    
    // optional int32 deviceID = 2;
    if (has_deviceid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->deviceid());
    }
    
  }
  // repeated int32 clientIDs = 3 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->clientids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->clientids(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    _clientids_cached_byte_size_ = data_size;
    total_size += data_size;
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DriverHdr::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DriverHdr* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DriverHdr*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DriverHdr::MergeFrom(const DriverHdr& from) {
  GOOGLE_CHECK_NE(&from, this);
  clientids_.MergeFrom(from.clientids_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_devicetype()) {
      set_devicetype(from.devicetype());
    }
    if (from.has_deviceid()) {
      set_deviceid(from.deviceid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DriverHdr::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DriverHdr::CopyFrom(const DriverHdr& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DriverHdr::IsInitialized() const {
  
  return true;
}

void DriverHdr::Swap(DriverHdr* other) {
  if (other != this) {
    std::swap(devicetype_, other->devicetype_);
    std::swap(deviceid_, other->deviceid_);
    clientids_.Swap(&other->clientids_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DriverHdr::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DriverHdr_descriptor_;
  metadata.reflection = DriverHdr_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* DriverMsg_MsgType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DriverMsg_MsgType_descriptor_;
}
bool DriverMsg_MsgType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const DriverMsg_MsgType DriverMsg::DATA;
const DriverMsg_MsgType DriverMsg::PING;
const DriverMsg_MsgType DriverMsg::PONG;
const DriverMsg_MsgType DriverMsg::CLIENT_DIED;
const DriverMsg_MsgType DriverMsg::DRIVER_DIED;
const DriverMsg_MsgType DriverMsg::SUBSCRIBE;
const DriverMsg_MsgType DriverMsg::UNSUBSCRIBE;
const DriverMsg_MsgType DriverMsg::MsgType_MIN;
const DriverMsg_MsgType DriverMsg::MsgType_MAX;
const int DriverMsg::MsgType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int DriverMsg::kTypeFieldNumber;
const int DriverMsg::kSynNumFieldNumber;
const int DriverMsg::kAckNumFieldNumber;
const int DriverMsg::kListenerNumFieldNumber;
#endif  // !_MSC_VER

DriverMsg::DriverMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DriverMsg::InitAsDefaultInstance() {
}

DriverMsg::DriverMsg(const DriverMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DriverMsg::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  synnum_ = 0u;
  acknum_ = 0u;
  listenernum_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DriverMsg::~DriverMsg() {
  SharedDtor();
}

void DriverMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DriverMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DriverMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DriverMsg_descriptor_;
}

const DriverMsg& DriverMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_drivermsg_2eproto();  return *default_instance_;
}

DriverMsg* DriverMsg::default_instance_ = NULL;

DriverMsg* DriverMsg::New() const {
  return new DriverMsg;
}

void DriverMsg::Clear() {
  _extensions_.Clear();
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 1;
    synnum_ = 0u;
    acknum_ = 0u;
    listenernum_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DriverMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .amber.DriverMsg.MsgType type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::amber::DriverMsg_MsgType_IsValid(value)) {
            set_type(static_cast< ::amber::DriverMsg_MsgType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_synNum;
        break;
      }
      
      // optional uint32 synNum = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_synNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &synnum_)));
          set_has_synnum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_ackNum;
        break;
      }
      
      // optional uint32 ackNum = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ackNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &acknum_)));
          set_has_acknum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_listenerNum;
        break;
      }
      
      // optional uint32 listenerNum = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_listenerNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &listenernum_)));
          set_has_listenernum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        if ((64u <= tag && tag < 512u)) {
          DO_(_extensions_.ParseField(tag, input, default_instance_,
                                      mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DriverMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .amber.DriverMsg.MsgType type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }
  
  // optional uint32 synNum = 3;
  if (has_synnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->synnum(), output);
  }
  
  // optional uint32 ackNum = 4;
  if (has_acknum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->acknum(), output);
  }
  
  // optional uint32 listenerNum = 5;
  if (has_listenernum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->listenernum(), output);
  }
  
  // Extension range [8, 64)
  _extensions_.SerializeWithCachedSizes(
      8, 64, output);
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DriverMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .amber.DriverMsg.MsgType type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }
  
  // optional uint32 synNum = 3;
  if (has_synnum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->synnum(), target);
  }
  
  // optional uint32 ackNum = 4;
  if (has_acknum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->acknum(), target);
  }
  
  // optional uint32 listenerNum = 5;
  if (has_listenernum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->listenernum(), target);
  }
  
  // Extension range [8, 64)
  target = _extensions_.SerializeWithCachedSizesToArray(
      8, 64, target);
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DriverMsg::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .amber.DriverMsg.MsgType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }
    
    // optional uint32 synNum = 3;
    if (has_synnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->synnum());
    }
    
    // optional uint32 ackNum = 4;
    if (has_acknum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->acknum());
    }
    
    // optional uint32 listenerNum = 5;
    if (has_listenernum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->listenernum());
    }
    
  }
  total_size += _extensions_.ByteSize();
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DriverMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DriverMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DriverMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DriverMsg::MergeFrom(const DriverMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_synnum()) {
      set_synnum(from.synnum());
    }
    if (from.has_acknum()) {
      set_acknum(from.acknum());
    }
    if (from.has_listenernum()) {
      set_listenernum(from.listenernum());
    }
  }
  _extensions_.MergeFrom(from._extensions_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DriverMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DriverMsg::CopyFrom(const DriverMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DriverMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  
  if (!_extensions_.IsInitialized()) return false;  return true;
}

void DriverMsg::Swap(DriverMsg* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(synnum_, other->synnum_);
    std::swap(acknum_, other->acknum_);
    std::swap(listenernum_, other->listenernum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    _extensions_.Swap(&other->_extensions_);
  }
}

::google::protobuf::Metadata DriverMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DriverMsg_descriptor_;
  metadata.reflection = DriverMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace amber

// @@protoc_insertion_point(global_scope)
