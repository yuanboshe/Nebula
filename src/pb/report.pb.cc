// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: report.proto

#include "report.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_report_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_report_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ReportRecord;
}  // namespace protobuf_report_2eproto
namespace neb {
class ReportRecordDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ReportRecord>
      _instance;
} _ReportRecord_default_instance_;
class ReportDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Report>
      _instance;
} _Report_default_instance_;
}  // namespace neb
namespace protobuf_report_2eproto {
static void InitDefaultsReportRecord() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::neb::_ReportRecord_default_instance_;
    new (ptr) ::neb::ReportRecord();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::neb::ReportRecord::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ReportRecord =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsReportRecord}, {}};

static void InitDefaultsReport() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::neb::_Report_default_instance_;
    new (ptr) ::neb::Report();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::neb::Report::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Report =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsReport}, {
      &protobuf_report_2eproto::scc_info_ReportRecord.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ReportRecord.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Report.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::neb::ReportRecord, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::neb::ReportRecord, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::neb::ReportRecord, value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::neb::Report, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::neb::Report, records_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::neb::ReportRecord)},
  { 7, -1, sizeof(::neb::Report)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::neb::_ReportRecord_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::neb::_Report_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "report.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014report.proto\022\003neb\"*\n\014ReportRecord\022\013\n\003k"
      "ey\030\001 \001(\014\022\r\n\005value\030\002 \003(\004\",\n\006Report\022\"\n\007rec"
      "ords\030\001 \003(\0132\021.neb.ReportRecordb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 117);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "report.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_report_2eproto
namespace neb {

// ===================================================================

void ReportRecord::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReportRecord::kKeyFieldNumber;
const int ReportRecord::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReportRecord::ReportRecord()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_report_2eproto::scc_info_ReportRecord.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:neb.ReportRecord)
}
ReportRecord::ReportRecord(const ReportRecord& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      value_(from.value_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  // @@protoc_insertion_point(copy_constructor:neb.ReportRecord)
}

void ReportRecord::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ReportRecord::~ReportRecord() {
  // @@protoc_insertion_point(destructor:neb.ReportRecord)
  SharedDtor();
}

void ReportRecord::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReportRecord::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ReportRecord::descriptor() {
  ::protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReportRecord& ReportRecord::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_report_2eproto::scc_info_ReportRecord.base);
  return *internal_default_instance();
}


void ReportRecord::Clear() {
// @@protoc_insertion_point(message_clear_start:neb.ReportRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.Clear();
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool ReportRecord::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:neb.ReportRecord)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_value())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 18u, input, this->mutable_value())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:neb.ReportRecord)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:neb.ReportRecord)
  return false;
#undef DO_
}

void ReportRecord::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:neb.ReportRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->key(), output);
  }

  // repeated uint64 value = 2;
  if (this->value_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _value_cached_byte_size_));
  }
  for (int i = 0, n = this->value_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->value(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:neb.ReportRecord)
}

::google::protobuf::uint8* ReportRecord::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:neb.ReportRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1;
  if (this->key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->key(), target);
  }

  // repeated uint64 value = 2;
  if (this->value_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _value_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->value_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:neb.ReportRecord)
  return target;
}

size_t ReportRecord::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:neb.ReportRecord)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 value = 2;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->value_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // bytes key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReportRecord::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:neb.ReportRecord)
  GOOGLE_DCHECK_NE(&from, this);
  const ReportRecord* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReportRecord>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:neb.ReportRecord)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:neb.ReportRecord)
    MergeFrom(*source);
  }
}

void ReportRecord::MergeFrom(const ReportRecord& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:neb.ReportRecord)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  value_.MergeFrom(from.value_);
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
}

void ReportRecord::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:neb.ReportRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReportRecord::CopyFrom(const ReportRecord& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:neb.ReportRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReportRecord::IsInitialized() const {
  return true;
}

void ReportRecord::Swap(ReportRecord* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReportRecord::InternalSwap(ReportRecord* other) {
  using std::swap;
  value_.InternalSwap(&other->value_);
  key_.Swap(&other->key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ReportRecord::GetMetadata() const {
  protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Report::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Report::kRecordsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Report::Report()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_report_2eproto::scc_info_Report.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:neb.Report)
}
Report::Report(const Report& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      records_(from.records_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:neb.Report)
}

void Report::SharedCtor() {
}

Report::~Report() {
  // @@protoc_insertion_point(destructor:neb.Report)
  SharedDtor();
}

void Report::SharedDtor() {
}

void Report::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Report::descriptor() {
  ::protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Report& Report::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_report_2eproto::scc_info_Report.base);
  return *internal_default_instance();
}


void Report::Clear() {
// @@protoc_insertion_point(message_clear_start:neb.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  records_.Clear();
  _internal_metadata_.Clear();
}

bool Report::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:neb.Report)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .neb.ReportRecord records = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_records()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:neb.Report)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:neb.Report)
  return false;
#undef DO_
}

void Report::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:neb.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .neb.ReportRecord records = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->records_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->records(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:neb.Report)
}

::google::protobuf::uint8* Report::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:neb.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .neb.ReportRecord records = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->records_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->records(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:neb.Report)
  return target;
}

size_t Report::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:neb.Report)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .neb.ReportRecord records = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->records_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->records(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Report::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:neb.Report)
  GOOGLE_DCHECK_NE(&from, this);
  const Report* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Report>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:neb.Report)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:neb.Report)
    MergeFrom(*source);
  }
}

void Report::MergeFrom(const Report& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:neb.Report)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  records_.MergeFrom(from.records_);
}

void Report::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:neb.Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Report::CopyFrom(const Report& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:neb.Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Report::IsInitialized() const {
  return true;
}

void Report::Swap(Report* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Report::InternalSwap(Report* other) {
  using std::swap;
  CastToBase(&records_)->InternalSwap(CastToBase(&other->records_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Report::GetMetadata() const {
  protobuf_report_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_report_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace neb
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::neb::ReportRecord* Arena::CreateMaybeMessage< ::neb::ReportRecord >(Arena* arena) {
  return Arena::CreateInternal< ::neb::ReportRecord >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::neb::Report* Arena::CreateMaybeMessage< ::neb::Report >(Arena* arena) {
  return Arena::CreateInternal< ::neb::Report >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
