// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trade.proto

#include "trade.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_trade_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Balance_trade_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_trade_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Order_trade_2eproto;
namespace Trade {
namespace protobuf {
class OrderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Order> _instance;
} _Order_default_instance_;
class BalanceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Balance> _instance;
} _Balance_default_instance_;
class AccountDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Account> _instance;
} _Account_default_instance_;
}  // namespace protobuf
}  // namespace Trade
static void InitDefaultsscc_info_Account_trade_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Trade::protobuf::_Account_default_instance_;
    new (ptr) ::Trade::protobuf::Account();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Trade::protobuf::Account::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Account_trade_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Account_trade_2eproto}, {
      &scc_info_Balance_trade_2eproto.base,
      &scc_info_Order_trade_2eproto.base,}};

static void InitDefaultsscc_info_Balance_trade_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Trade::protobuf::_Balance_default_instance_;
    new (ptr) ::Trade::protobuf::Balance();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Trade::protobuf::Balance::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Balance_trade_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Balance_trade_2eproto}, {}};

static void InitDefaultsscc_info_Order_trade_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Trade::protobuf::_Order_default_instance_;
    new (ptr) ::Trade::protobuf::Order();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Trade::protobuf::Order::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Order_trade_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Order_trade_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_trade_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_trade_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_trade_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_trade_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, id_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, symbol_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, side_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, type_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, price_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, volume_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Balance, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Balance, currency_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Balance, amount_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, id_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, name_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, wallet_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, orders_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Trade::protobuf::Order)},
  { 11, -1, sizeof(::Trade::protobuf::Balance)},
  { 18, -1, sizeof(::Trade::protobuf::Account)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Trade::protobuf::_Order_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Trade::protobuf::_Balance_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Trade::protobuf::_Account_default_instance_),
};

const char descriptor_table_protodef_trade_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013trade.proto\022\016Trade.protobuf\"\224\001\n\005Order\022"
  "\n\n\002id\030\001 \001(\005\022\016\n\006symbol\030\002 \001(\t\022\'\n\004side\030\003 \001("
  "\0162\031.Trade.protobuf.OrderSide\022\'\n\004type\030\004 \001"
  "(\0162\031.Trade.protobuf.OrderType\022\r\n\005price\030\005"
  " \001(\001\022\016\n\006volume\030\006 \001(\001\"+\n\007Balance\022\020\n\010curre"
  "ncy\030\001 \001(\t\022\016\n\006amount\030\002 \001(\001\"s\n\007Account\022\n\n\002"
  "id\030\001 \001(\005\022\014\n\004name\030\002 \001(\t\022\'\n\006wallet\030\003 \001(\0132\027"
  ".Trade.protobuf.Balance\022%\n\006orders\030\004 \003(\0132"
  "\025.Trade.protobuf.Order*\036\n\tOrderSide\022\007\n\003b"
  "uy\020\000\022\010\n\004sell\020\001*,\n\tOrderType\022\n\n\006market\020\000\022"
  "\t\n\005limit\020\001\022\010\n\004stop\020\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_trade_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_trade_2eproto_sccs[3] = {
  &scc_info_Account_trade_2eproto.base,
  &scc_info_Balance_trade_2eproto.base,
  &scc_info_Order_trade_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_trade_2eproto_once;
static bool descriptor_table_trade_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_trade_2eproto = {
  &descriptor_table_trade_2eproto_initialized, descriptor_table_protodef_trade_2eproto, "trade.proto", 428,
  &descriptor_table_trade_2eproto_once, descriptor_table_trade_2eproto_sccs, descriptor_table_trade_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_trade_2eproto::offsets,
  file_level_metadata_trade_2eproto, 3, file_level_enum_descriptors_trade_2eproto, file_level_service_descriptors_trade_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_trade_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_trade_2eproto), true);
namespace Trade {
namespace protobuf {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderSide_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_trade_2eproto);
  return file_level_enum_descriptors_trade_2eproto[0];
}
bool OrderSide_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_trade_2eproto);
  return file_level_enum_descriptors_trade_2eproto[1];
}
bool OrderType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Order::InitAsDefaultInstance() {
}
class Order::_Internal {
 public:
};

Order::Order()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Trade.protobuf.Order)
}
Order::Order(const Order& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  symbol_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_symbol().empty()) {
    symbol_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.symbol_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:Trade.protobuf.Order)
}

void Order::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Order_trade_2eproto.base);
  symbol_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
}

Order::~Order() {
  // @@protoc_insertion_point(destructor:Trade.protobuf.Order)
  SharedDtor();
}

void Order::SharedDtor() {
  symbol_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Order::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Order& Order::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Order_trade_2eproto.base);
  return *internal_default_instance();
}


void Order::Clear() {
// @@protoc_insertion_point(message_clear_start:Trade.protobuf.Order)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  symbol_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

const char* Order::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string symbol = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_symbol(), ptr, ctx, "Trade.protobuf.Order.symbol");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Trade.protobuf.OrderSide side = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_side(static_cast<::Trade::protobuf::OrderSide>(val));
        } else goto handle_unusual;
        continue;
      // .Trade.protobuf.OrderType type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::Trade::protobuf::OrderType>(val));
        } else goto handle_unusual;
        continue;
      // double price = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double volume = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          volume_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Order::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Trade.protobuf.Order)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // string symbol = 2;
  if (this->symbol().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_symbol().data(), static_cast<int>(this->_internal_symbol().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Trade.protobuf.Order.symbol");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_symbol(), target);
  }

  // .Trade.protobuf.OrderSide side = 3;
  if (this->side() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_side(), target);
  }

  // .Trade.protobuf.OrderType type = 4;
  if (this->type() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_type(), target);
  }

  // double price = 5;
  if (!(this->price() <= 0 && this->price() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_price(), target);
  }

  // double volume = 6;
  if (!(this->volume() <= 0 && this->volume() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_volume(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Trade.protobuf.Order)
  return target;
}

size_t Order::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Trade.protobuf.Order)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string symbol = 2;
  if (this->symbol().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_symbol());
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());
  }

  // .Trade.protobuf.OrderSide side = 3;
  if (this->side() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_side());
  }

  // double price = 5;
  if (!(this->price() <= 0 && this->price() >= 0)) {
    total_size += 1 + 8;
  }

  // double volume = 6;
  if (!(this->volume() <= 0 && this->volume() >= 0)) {
    total_size += 1 + 8;
  }

  // .Trade.protobuf.OrderType type = 4;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Order::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Trade.protobuf.Order)
  GOOGLE_DCHECK_NE(&from, this);
  const Order* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Order>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Trade.protobuf.Order)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Trade.protobuf.Order)
    MergeFrom(*source);
  }
}

void Order::MergeFrom(const Order& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Trade.protobuf.Order)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.symbol().size() > 0) {

    symbol_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.symbol_);
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.side() != 0) {
    _internal_set_side(from._internal_side());
  }
  if (!(from.price() <= 0 && from.price() >= 0)) {
    _internal_set_price(from._internal_price());
  }
  if (!(from.volume() <= 0 && from.volume() >= 0)) {
    _internal_set_volume(from._internal_volume());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
}

void Order::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Trade.protobuf.Order)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Order::CopyFrom(const Order& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Trade.protobuf.Order)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Order::IsInitialized() const {
  return true;
}

void Order::InternalSwap(Order* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  symbol_.Swap(&other->symbol_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(side_, other->side_);
  swap(price_, other->price_);
  swap(volume_, other->volume_);
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Order::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Balance::InitAsDefaultInstance() {
}
class Balance::_Internal {
 public:
};

Balance::Balance()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Trade.protobuf.Balance)
}
Balance::Balance(const Balance& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  currency_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_currency().empty()) {
    currency_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.currency_);
  }
  amount_ = from.amount_;
  // @@protoc_insertion_point(copy_constructor:Trade.protobuf.Balance)
}

void Balance::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Balance_trade_2eproto.base);
  currency_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  amount_ = 0;
}

Balance::~Balance() {
  // @@protoc_insertion_point(destructor:Trade.protobuf.Balance)
  SharedDtor();
}

void Balance::SharedDtor() {
  currency_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Balance::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Balance& Balance::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Balance_trade_2eproto.base);
  return *internal_default_instance();
}


void Balance::Clear() {
// @@protoc_insertion_point(message_clear_start:Trade.protobuf.Balance)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  currency_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  amount_ = 0;
  _internal_metadata_.Clear();
}

const char* Balance::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string currency = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_currency(), ptr, ctx, "Trade.protobuf.Balance.currency");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double amount = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          amount_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Balance::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Trade.protobuf.Balance)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string currency = 1;
  if (this->currency().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_currency().data(), static_cast<int>(this->_internal_currency().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Trade.protobuf.Balance.currency");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_currency(), target);
  }

  // double amount = 2;
  if (!(this->amount() <= 0 && this->amount() >= 0)) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_amount(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Trade.protobuf.Balance)
  return target;
}

size_t Balance::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Trade.protobuf.Balance)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string currency = 1;
  if (this->currency().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_currency());
  }

  // double amount = 2;
  if (!(this->amount() <= 0 && this->amount() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Balance::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Trade.protobuf.Balance)
  GOOGLE_DCHECK_NE(&from, this);
  const Balance* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Balance>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Trade.protobuf.Balance)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Trade.protobuf.Balance)
    MergeFrom(*source);
  }
}

void Balance::MergeFrom(const Balance& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Trade.protobuf.Balance)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.currency().size() > 0) {

    currency_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.currency_);
  }
  if (!(from.amount() <= 0 && from.amount() >= 0)) {
    _internal_set_amount(from._internal_amount());
  }
}

void Balance::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Trade.protobuf.Balance)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Balance::CopyFrom(const Balance& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Trade.protobuf.Balance)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Balance::IsInitialized() const {
  return true;
}

void Balance::InternalSwap(Balance* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  currency_.Swap(&other->currency_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(amount_, other->amount_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Balance::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Account::InitAsDefaultInstance() {
  ::Trade::protobuf::_Account_default_instance_._instance.get_mutable()->wallet_ = const_cast< ::Trade::protobuf::Balance*>(
      ::Trade::protobuf::Balance::internal_default_instance());
}
class Account::_Internal {
 public:
  static const ::Trade::protobuf::Balance& wallet(const Account* msg);
};

const ::Trade::protobuf::Balance&
Account::_Internal::wallet(const Account* msg) {
  return *msg->wallet_;
}
Account::Account()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Trade.protobuf.Account)
}
Account::Account(const Account& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      orders_(from.orders_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_wallet()) {
    wallet_ = new ::Trade::protobuf::Balance(*from.wallet_);
  } else {
    wallet_ = nullptr;
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:Trade.protobuf.Account)
}

void Account::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Account_trade_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&wallet_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&wallet_)) + sizeof(id_));
}

Account::~Account() {
  // @@protoc_insertion_point(destructor:Trade.protobuf.Account)
  SharedDtor();
}

void Account::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete wallet_;
}

void Account::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Account& Account::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Account_trade_2eproto.base);
  return *internal_default_instance();
}


void Account::Clear() {
// @@protoc_insertion_point(message_clear_start:Trade.protobuf.Account)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  orders_.Clear();
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && wallet_ != nullptr) {
    delete wallet_;
  }
  wallet_ = nullptr;
  id_ = 0;
  _internal_metadata_.Clear();
}

const char* Account::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_name(), ptr, ctx, "Trade.protobuf.Account.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Trade.protobuf.Balance wallet = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_wallet(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Trade.protobuf.Order orders = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_orders(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Account::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Trade.protobuf.Account)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Trade.protobuf.Account.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // .Trade.protobuf.Balance wallet = 3;
  if (this->has_wallet()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, _Internal::wallet(this), target, stream);
  }

  // repeated .Trade.protobuf.Order orders = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_orders_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(4, this->_internal_orders(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Trade.protobuf.Account)
  return target;
}

size_t Account::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Trade.protobuf.Account)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Trade.protobuf.Order orders = 4;
  total_size += 1UL * this->_internal_orders_size();
  for (const auto& msg : this->orders_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .Trade.protobuf.Balance wallet = 3;
  if (this->has_wallet()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *wallet_);
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Account::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Trade.protobuf.Account)
  GOOGLE_DCHECK_NE(&from, this);
  const Account* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Account>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Trade.protobuf.Account)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Trade.protobuf.Account)
    MergeFrom(*source);
  }
}

void Account::MergeFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Trade.protobuf.Account)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  orders_.MergeFrom(from.orders_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_wallet()) {
    _internal_mutable_wallet()->::Trade::protobuf::Balance::MergeFrom(from._internal_wallet());
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
}

void Account::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Trade.protobuf.Account)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Account::CopyFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Trade.protobuf.Account)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Account::IsInitialized() const {
  return true;
}

void Account::InternalSwap(Account* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  orders_.InternalSwap(&other->orders_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(wallet_, other->wallet_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Account::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace Trade
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Trade::protobuf::Order* Arena::CreateMaybeMessage< ::Trade::protobuf::Order >(Arena* arena) {
  return Arena::CreateInternal< ::Trade::protobuf::Order >(arena);
}
template<> PROTOBUF_NOINLINE ::Trade::protobuf::Balance* Arena::CreateMaybeMessage< ::Trade::protobuf::Balance >(Arena* arena) {
  return Arena::CreateInternal< ::Trade::protobuf::Balance >(arena);
}
template<> PROTOBUF_NOINLINE ::Trade::protobuf::Account* Arena::CreateMaybeMessage< ::Trade::protobuf::Account >(Arena* arena) {
  return Arena::CreateInternal< ::Trade::protobuf::Account >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
