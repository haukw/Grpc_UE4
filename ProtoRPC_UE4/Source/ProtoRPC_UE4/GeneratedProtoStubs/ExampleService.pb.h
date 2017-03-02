// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExampleService.proto

#ifndef PROTOBUF_ExampleService_2eproto__INCLUDED
#define PROTOBUF_ExampleService_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ExampleCharacter.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace paddlecreekgames {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ExampleService_2eproto();
void protobuf_AssignDesc_ExampleService_2eproto();
void protobuf_ShutdownFile_ExampleService_2eproto();

class AuthRequest;
class AuthResponse;
class FailedAuthResponse;
class SuccessfullAuthResponse;

// ===================================================================

class AuthRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.paddlecreekgames.AuthRequest) */ {
 public:
  AuthRequest();
  virtual ~AuthRequest();

  AuthRequest(const AuthRequest& from);

  inline AuthRequest& operator=(const AuthRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthRequest& default_instance();

  void Swap(AuthRequest* other);

  // implements Message ----------------------------------------------

  inline AuthRequest* New() const { return New(NULL); }

  AuthRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AuthRequest& from);
  void MergeFrom(const AuthRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AuthRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string Username = 1;
  void clear_username();
  static const int kUsernameFieldNumber = 1;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // optional string Hash = 2;
  void clear_hash();
  static const int kHashFieldNumber = 2;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  void set_hash(const char* value);
  void set_hash(const char* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // @@protoc_insertion_point(class_scope:com.paddlecreekgames.AuthRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ExampleService_2eproto();
  friend void protobuf_AssignDesc_ExampleService_2eproto();
  friend void protobuf_ShutdownFile_ExampleService_2eproto();

  void InitAsDefaultInstance();
  static AuthRequest* default_instance_;
};
// -------------------------------------------------------------------

class SuccessfullAuthResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.paddlecreekgames.SuccessfullAuthResponse) */ {
 public:
  SuccessfullAuthResponse();
  virtual ~SuccessfullAuthResponse();

  SuccessfullAuthResponse(const SuccessfullAuthResponse& from);

  inline SuccessfullAuthResponse& operator=(const SuccessfullAuthResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SuccessfullAuthResponse& default_instance();

  void Swap(SuccessfullAuthResponse* other);

  // implements Message ----------------------------------------------

  inline SuccessfullAuthResponse* New() const { return New(NULL); }

  SuccessfullAuthResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SuccessfullAuthResponse& from);
  void MergeFrom(const SuccessfullAuthResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SuccessfullAuthResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string AuthToken = 1;
  void clear_authtoken();
  static const int kAuthTokenFieldNumber = 1;
  const ::std::string& authtoken() const;
  void set_authtoken(const ::std::string& value);
  void set_authtoken(const char* value);
  void set_authtoken(const char* value, size_t size);
  ::std::string* mutable_authtoken();
  ::std::string* release_authtoken();
  void set_allocated_authtoken(::std::string* authtoken);

  // optional .com.paddlecreekgames.ExampleCharacter CharacterInfo = 2;
  bool has_characterinfo() const;
  void clear_characterinfo();
  static const int kCharacterInfoFieldNumber = 2;
  const ::com::paddlecreekgames::ExampleCharacter& characterinfo() const;
  ::com::paddlecreekgames::ExampleCharacter* mutable_characterinfo();
  ::com::paddlecreekgames::ExampleCharacter* release_characterinfo();
  void set_allocated_characterinfo(::com::paddlecreekgames::ExampleCharacter* characterinfo);

  // @@protoc_insertion_point(class_scope:com.paddlecreekgames.SuccessfullAuthResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr authtoken_;
  ::com::paddlecreekgames::ExampleCharacter* characterinfo_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ExampleService_2eproto();
  friend void protobuf_AssignDesc_ExampleService_2eproto();
  friend void protobuf_ShutdownFile_ExampleService_2eproto();

  void InitAsDefaultInstance();
  static SuccessfullAuthResponse* default_instance_;
};
// -------------------------------------------------------------------

class FailedAuthResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.paddlecreekgames.FailedAuthResponse) */ {
 public:
  FailedAuthResponse();
  virtual ~FailedAuthResponse();

  FailedAuthResponse(const FailedAuthResponse& from);

  inline FailedAuthResponse& operator=(const FailedAuthResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FailedAuthResponse& default_instance();

  void Swap(FailedAuthResponse* other);

  // implements Message ----------------------------------------------

  inline FailedAuthResponse* New() const { return New(NULL); }

  FailedAuthResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FailedAuthResponse& from);
  void MergeFrom(const FailedAuthResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FailedAuthResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string ErrorMessage = 1;
  void clear_errormessage();
  static const int kErrorMessageFieldNumber = 1;
  const ::std::string& errormessage() const;
  void set_errormessage(const ::std::string& value);
  void set_errormessage(const char* value);
  void set_errormessage(const char* value, size_t size);
  ::std::string* mutable_errormessage();
  ::std::string* release_errormessage();
  void set_allocated_errormessage(::std::string* errormessage);

  // @@protoc_insertion_point(class_scope:com.paddlecreekgames.FailedAuthResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr errormessage_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ExampleService_2eproto();
  friend void protobuf_AssignDesc_ExampleService_2eproto();
  friend void protobuf_ShutdownFile_ExampleService_2eproto();

  void InitAsDefaultInstance();
  static FailedAuthResponse* default_instance_;
};
// -------------------------------------------------------------------

class AuthResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.paddlecreekgames.AuthResponse) */ {
 public:
  AuthResponse();
  virtual ~AuthResponse();

  AuthResponse(const AuthResponse& from);

  inline AuthResponse& operator=(const AuthResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthResponse& default_instance();

  enum AuthResponseOneofCase {
    kSuccessfullAuthData = 1,
    kFailedAuthData = 2,
    AUTHRESPONSE_ONEOF_NOT_SET = 0,
  };

  void Swap(AuthResponse* other);

  // implements Message ----------------------------------------------

  inline AuthResponse* New() const { return New(NULL); }

  AuthResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AuthResponse& from);
  void MergeFrom(const AuthResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AuthResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .com.paddlecreekgames.SuccessfullAuthResponse SuccessfullAuthData = 1;
  bool has_successfullauthdata() const;
  void clear_successfullauthdata();
  static const int kSuccessfullAuthDataFieldNumber = 1;
  const ::com::paddlecreekgames::SuccessfullAuthResponse& successfullauthdata() const;
  ::com::paddlecreekgames::SuccessfullAuthResponse* mutable_successfullauthdata();
  ::com::paddlecreekgames::SuccessfullAuthResponse* release_successfullauthdata();
  void set_allocated_successfullauthdata(::com::paddlecreekgames::SuccessfullAuthResponse* successfullauthdata);

  // optional .com.paddlecreekgames.FailedAuthResponse FailedAuthData = 2;
  bool has_failedauthdata() const;
  void clear_failedauthdata();
  static const int kFailedAuthDataFieldNumber = 2;
  const ::com::paddlecreekgames::FailedAuthResponse& failedauthdata() const;
  ::com::paddlecreekgames::FailedAuthResponse* mutable_failedauthdata();
  ::com::paddlecreekgames::FailedAuthResponse* release_failedauthdata();
  void set_allocated_failedauthdata(::com::paddlecreekgames::FailedAuthResponse* failedauthdata);

  AuthResponseOneofCase AuthResponse_Oneof_case() const;
  // @@protoc_insertion_point(class_scope:com.paddlecreekgames.AuthResponse)
 private:
  inline void set_has_successfullauthdata();
  inline void set_has_failedauthdata();

  inline bool has_AuthResponse_Oneof() const;
  void clear_AuthResponse_Oneof();
  inline void clear_has_AuthResponse_Oneof();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union AuthResponseOneofUnion {
    AuthResponseOneofUnion() {}
    ::com::paddlecreekgames::SuccessfullAuthResponse* successfullauthdata_;
    ::com::paddlecreekgames::FailedAuthResponse* failedauthdata_;
  } AuthResponse_Oneof_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_ExampleService_2eproto();
  friend void protobuf_AssignDesc_ExampleService_2eproto();
  friend void protobuf_ShutdownFile_ExampleService_2eproto();

  void InitAsDefaultInstance();
  static AuthResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AuthRequest

// optional string Username = 1;
inline void AuthRequest::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuthRequest::username() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.AuthRequest.Username)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthRequest::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.AuthRequest.Username)
}
inline void AuthRequest::set_username(const char* value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.paddlecreekgames.AuthRequest.Username)
}
inline void AuthRequest::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.paddlecreekgames.AuthRequest.Username)
}
inline ::std::string* AuthRequest::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.AuthRequest.Username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthRequest::release_username() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.AuthRequest.Username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthRequest::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.AuthRequest.Username)
}

// optional string Hash = 2;
inline void AuthRequest::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuthRequest::hash() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.AuthRequest.Hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthRequest::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.AuthRequest.Hash)
}
inline void AuthRequest::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.paddlecreekgames.AuthRequest.Hash)
}
inline void AuthRequest::set_hash(const char* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.paddlecreekgames.AuthRequest.Hash)
}
inline ::std::string* AuthRequest::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.AuthRequest.Hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthRequest::release_hash() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.AuthRequest.Hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthRequest::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.AuthRequest.Hash)
}

// -------------------------------------------------------------------

// SuccessfullAuthResponse

// optional string AuthToken = 1;
inline void SuccessfullAuthResponse::clear_authtoken() {
  authtoken_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SuccessfullAuthResponse::authtoken() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
  return authtoken_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SuccessfullAuthResponse::set_authtoken(const ::std::string& value) {
  
  authtoken_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
}
inline void SuccessfullAuthResponse::set_authtoken(const char* value) {
  
  authtoken_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
}
inline void SuccessfullAuthResponse::set_authtoken(const char* value, size_t size) {
  
  authtoken_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
}
inline ::std::string* SuccessfullAuthResponse::mutable_authtoken() {
  
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
  return authtoken_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SuccessfullAuthResponse::release_authtoken() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
  
  return authtoken_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SuccessfullAuthResponse::set_allocated_authtoken(::std::string* authtoken) {
  if (authtoken != NULL) {
    
  } else {
    
  }
  authtoken_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), authtoken);
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.SuccessfullAuthResponse.AuthToken)
}

// optional .com.paddlecreekgames.ExampleCharacter CharacterInfo = 2;
inline bool SuccessfullAuthResponse::has_characterinfo() const {
  return !_is_default_instance_ && characterinfo_ != NULL;
}
inline void SuccessfullAuthResponse::clear_characterinfo() {
  if (GetArenaNoVirtual() == NULL && characterinfo_ != NULL) delete characterinfo_;
  characterinfo_ = NULL;
}
inline const ::com::paddlecreekgames::ExampleCharacter& SuccessfullAuthResponse::characterinfo() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.SuccessfullAuthResponse.CharacterInfo)
  return characterinfo_ != NULL ? *characterinfo_ : *default_instance_->characterinfo_;
}
inline ::com::paddlecreekgames::ExampleCharacter* SuccessfullAuthResponse::mutable_characterinfo() {
  
  if (characterinfo_ == NULL) {
    characterinfo_ = new ::com::paddlecreekgames::ExampleCharacter;
  }
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.SuccessfullAuthResponse.CharacterInfo)
  return characterinfo_;
}
inline ::com::paddlecreekgames::ExampleCharacter* SuccessfullAuthResponse::release_characterinfo() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.SuccessfullAuthResponse.CharacterInfo)
  
  ::com::paddlecreekgames::ExampleCharacter* temp = characterinfo_;
  characterinfo_ = NULL;
  return temp;
}
inline void SuccessfullAuthResponse::set_allocated_characterinfo(::com::paddlecreekgames::ExampleCharacter* characterinfo) {
  delete characterinfo_;
  characterinfo_ = characterinfo;
  if (characterinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.SuccessfullAuthResponse.CharacterInfo)
}

// -------------------------------------------------------------------

// FailedAuthResponse

// optional string ErrorMessage = 1;
inline void FailedAuthResponse::clear_errormessage() {
  errormessage_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FailedAuthResponse::errormessage() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
  return errormessage_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FailedAuthResponse::set_errormessage(const ::std::string& value) {
  
  errormessage_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
}
inline void FailedAuthResponse::set_errormessage(const char* value) {
  
  errormessage_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
}
inline void FailedAuthResponse::set_errormessage(const char* value, size_t size) {
  
  errormessage_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
}
inline ::std::string* FailedAuthResponse::mutable_errormessage() {
  
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
  return errormessage_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FailedAuthResponse::release_errormessage() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
  
  return errormessage_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FailedAuthResponse::set_allocated_errormessage(::std::string* errormessage) {
  if (errormessage != NULL) {
    
  } else {
    
  }
  errormessage_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), errormessage);
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.FailedAuthResponse.ErrorMessage)
}

// -------------------------------------------------------------------

// AuthResponse

// optional .com.paddlecreekgames.SuccessfullAuthResponse SuccessfullAuthData = 1;
inline bool AuthResponse::has_successfullauthdata() const {
  return AuthResponse_Oneof_case() == kSuccessfullAuthData;
}
inline void AuthResponse::set_has_successfullauthdata() {
  _oneof_case_[0] = kSuccessfullAuthData;
}
inline void AuthResponse::clear_successfullauthdata() {
  if (has_successfullauthdata()) {
    delete AuthResponse_Oneof_.successfullauthdata_;
    clear_has_AuthResponse_Oneof();
  }
}
inline  const ::com::paddlecreekgames::SuccessfullAuthResponse& AuthResponse::successfullauthdata() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.AuthResponse.SuccessfullAuthData)
  return has_successfullauthdata()
      ? *AuthResponse_Oneof_.successfullauthdata_
      : ::com::paddlecreekgames::SuccessfullAuthResponse::default_instance();
}
inline ::com::paddlecreekgames::SuccessfullAuthResponse* AuthResponse::mutable_successfullauthdata() {
  if (!has_successfullauthdata()) {
    clear_AuthResponse_Oneof();
    set_has_successfullauthdata();
    AuthResponse_Oneof_.successfullauthdata_ = new ::com::paddlecreekgames::SuccessfullAuthResponse;
  }
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.AuthResponse.SuccessfullAuthData)
  return AuthResponse_Oneof_.successfullauthdata_;
}
inline ::com::paddlecreekgames::SuccessfullAuthResponse* AuthResponse::release_successfullauthdata() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.AuthResponse.SuccessfullAuthData)
  if (has_successfullauthdata()) {
    clear_has_AuthResponse_Oneof();
    ::com::paddlecreekgames::SuccessfullAuthResponse* temp = AuthResponse_Oneof_.successfullauthdata_;
    AuthResponse_Oneof_.successfullauthdata_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void AuthResponse::set_allocated_successfullauthdata(::com::paddlecreekgames::SuccessfullAuthResponse* successfullauthdata) {
  clear_AuthResponse_Oneof();
  if (successfullauthdata) {
    set_has_successfullauthdata();
    AuthResponse_Oneof_.successfullauthdata_ = successfullauthdata;
  }
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.AuthResponse.SuccessfullAuthData)
}

// optional .com.paddlecreekgames.FailedAuthResponse FailedAuthData = 2;
inline bool AuthResponse::has_failedauthdata() const {
  return AuthResponse_Oneof_case() == kFailedAuthData;
}
inline void AuthResponse::set_has_failedauthdata() {
  _oneof_case_[0] = kFailedAuthData;
}
inline void AuthResponse::clear_failedauthdata() {
  if (has_failedauthdata()) {
    delete AuthResponse_Oneof_.failedauthdata_;
    clear_has_AuthResponse_Oneof();
  }
}
inline  const ::com::paddlecreekgames::FailedAuthResponse& AuthResponse::failedauthdata() const {
  // @@protoc_insertion_point(field_get:com.paddlecreekgames.AuthResponse.FailedAuthData)
  return has_failedauthdata()
      ? *AuthResponse_Oneof_.failedauthdata_
      : ::com::paddlecreekgames::FailedAuthResponse::default_instance();
}
inline ::com::paddlecreekgames::FailedAuthResponse* AuthResponse::mutable_failedauthdata() {
  if (!has_failedauthdata()) {
    clear_AuthResponse_Oneof();
    set_has_failedauthdata();
    AuthResponse_Oneof_.failedauthdata_ = new ::com::paddlecreekgames::FailedAuthResponse;
  }
  // @@protoc_insertion_point(field_mutable:com.paddlecreekgames.AuthResponse.FailedAuthData)
  return AuthResponse_Oneof_.failedauthdata_;
}
inline ::com::paddlecreekgames::FailedAuthResponse* AuthResponse::release_failedauthdata() {
  // @@protoc_insertion_point(field_release:com.paddlecreekgames.AuthResponse.FailedAuthData)
  if (has_failedauthdata()) {
    clear_has_AuthResponse_Oneof();
    ::com::paddlecreekgames::FailedAuthResponse* temp = AuthResponse_Oneof_.failedauthdata_;
    AuthResponse_Oneof_.failedauthdata_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void AuthResponse::set_allocated_failedauthdata(::com::paddlecreekgames::FailedAuthResponse* failedauthdata) {
  clear_AuthResponse_Oneof();
  if (failedauthdata) {
    set_has_failedauthdata();
    AuthResponse_Oneof_.failedauthdata_ = failedauthdata;
  }
  // @@protoc_insertion_point(field_set_allocated:com.paddlecreekgames.AuthResponse.FailedAuthData)
}

inline bool AuthResponse::has_AuthResponse_Oneof() const {
  return AuthResponse_Oneof_case() != AUTHRESPONSE_ONEOF_NOT_SET;
}
inline void AuthResponse::clear_has_AuthResponse_Oneof() {
  _oneof_case_[0] = AUTHRESPONSE_ONEOF_NOT_SET;
}
inline AuthResponse::AuthResponseOneofCase AuthResponse::AuthResponse_Oneof_case() const {
  return AuthResponse::AuthResponseOneofCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace paddlecreekgames
}  // namespace com

// @@protoc_insertion_point(global_scope)
#endif  // PROTOBUF_ExampleService_2eproto__INCLUDED
