// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: image.proto

#ifndef PROTOBUF_image_2eproto__INCLUDED
#define PROTOBUF_image_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_image_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsImageImpl();
void InitDefaultsImage();
inline void InitDefaults() {
  InitDefaultsImage();
}
}  // namespace protobuf_image_2eproto
class Image;
class ImageDefaultTypeInternal;
extern ImageDefaultTypeInternal _Image_default_instance_;

// ===================================================================

class Image : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Image) */ {
 public:
  Image();
  virtual ~Image();

  Image(const Image& from);

  inline Image& operator=(const Image& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Image(Image&& from) noexcept
    : Image() {
    *this = ::std::move(from);
  }

  inline Image& operator=(Image&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Image& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Image* internal_default_instance() {
    return reinterpret_cast<const Image*>(
               &_Image_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Image* other);
  friend void swap(Image& a, Image& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Image* New() const PROTOBUF_FINAL { return New(NULL); }

  Image* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Image& from);
  void MergeFrom(const Image& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Image* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes image_data = 3;
  void clear_image_data();
  static const int kImageDataFieldNumber = 3;
  const ::std::string& image_data() const;
  void set_image_data(const ::std::string& value);
  #if LANG_CXX11
  void set_image_data(::std::string&& value);
  #endif
  void set_image_data(const char* value);
  void set_image_data(const void* value, size_t size);
  ::std::string* mutable_image_data();
  ::std::string* release_image_data();
  void set_allocated_image_data(::std::string* image_data);

  // int32 width = 1;
  void clear_width();
  static const int kWidthFieldNumber = 1;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // int32 height = 2;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::google::protobuf::int32 height() const;
  void set_height(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Image)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr image_data_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 height_;
  mutable int _cached_size_;
  friend struct ::protobuf_image_2eproto::TableStruct;
  friend void ::protobuf_image_2eproto::InitDefaultsImageImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Image

// int32 width = 1;
inline void Image::clear_width() {
  width_ = 0;
}
inline ::google::protobuf::int32 Image::width() const {
  // @@protoc_insertion_point(field_get:Image.width)
  return width_;
}
inline void Image::set_width(::google::protobuf::int32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:Image.width)
}

// int32 height = 2;
inline void Image::clear_height() {
  height_ = 0;
}
inline ::google::protobuf::int32 Image::height() const {
  // @@protoc_insertion_point(field_get:Image.height)
  return height_;
}
inline void Image::set_height(::google::protobuf::int32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:Image.height)
}

// bytes image_data = 3;
inline void Image::clear_image_data() {
  image_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Image::image_data() const {
  // @@protoc_insertion_point(field_get:Image.image_data)
  return image_data_.GetNoArena();
}
inline void Image::set_image_data(const ::std::string& value) {
  
  image_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Image.image_data)
}
#if LANG_CXX11
inline void Image::set_image_data(::std::string&& value) {
  
  image_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Image.image_data)
}
#endif
inline void Image::set_image_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  image_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Image.image_data)
}
inline void Image::set_image_data(const void* value, size_t size) {
  
  image_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Image.image_data)
}
inline ::std::string* Image::mutable_image_data() {
  
  // @@protoc_insertion_point(field_mutable:Image.image_data)
  return image_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Image::release_image_data() {
  // @@protoc_insertion_point(field_release:Image.image_data)
  
  return image_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_image_data(::std::string* image_data) {
  if (image_data != NULL) {
    
  } else {
    
  }
  image_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), image_data);
  // @@protoc_insertion_point(field_set_allocated:Image.image_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_image_2eproto__INCLUDED
