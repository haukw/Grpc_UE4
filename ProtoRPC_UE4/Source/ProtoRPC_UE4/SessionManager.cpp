// Copyright 2015 Paddle Creek Games Inc. All Rights Reserved.
#include "ProtoRPC_UE4PrivatePCH.h"

#include "SessionManager.h"

#include "GeneratedProtoStubs/ExampleService.grpc.pb.h"

#include <grpc++/grpc++.h>
#include <grpc++/channel.h>
#include <grpc++/client_context.h>
#include <grpc++/create_channel.h>
#include <grpc++/security/credentials.h>

DEFINE_LOG_CATEGORY_STATIC(SessionManagerLog, Log, All);
#define LOCTEXT_NAMESPACE "SessionManager"

SessionManager::SessionManager()
    : sessionState_(SessionState::SS_NotAuthenticated),
	  channel_(grpc::CreateChannel("http://1-dot-pcg-login.appspot.com/appengine_auth_svc", grpc::InsecureChannelCredentials())),
      authService_(com::paddlecreekgames::AuthService::NewStub(channel_))
{
}

SessionManager::~SessionManager() {}

void SessionManager::StartAuthentication(const FString& Username, const FString& HashedPassword, AuthCompletionDelegate* Completion) {
	// TODO(san): A lot of this is going to end up boiler-plate that should probably be generated by a protoc plugin.
	com::paddlecreekgames::AuthRequest AuthRequest;
	AuthRequest.set_username(TCHAR_TO_UTF8(*Username));
	authService_->AsyncAuthenticate(context_, AuthRequest, cq_);
	//authResponse_ = com::paddlecreekgames::AuthResponse::set_hash(TCHAR_TO_UTF8(*HashedPassword));
	UE_LOG(SessionManagerLog, Display, TEXT("Authentication started"));
	sessionState_ = SessionState::SS_Authenticating;
}

void SessionManager::AuthenticationRpcCompleted(AuthCompletionDelegate* Completion) {
	//if (controller_->Failed()) {
	//	// RPC level failure.
	//	sessionState_ = SessionState::SS_AuthenticationFailed;
	//	sessionErrorMsg_ = "Authentication RPC failure";
	//} else {
	//	if (authResponse_->has_failedauthdata()) {
	//		sessionState_ = SessionState::SS_AuthenticationFailed;
	//		sessionErrorMsg_ = FString(authResponse_->failedauthdata().errormessage().c_str());
	//	}
	//	else if (authResponse_->has_successfullauthdata()) {
	//		sessionState_ = SessionState::SS_Authenticated;
	//		sessionCookie_ = FString(authResponse_->successfullauthdata().authtoken().c_str());
	//	}
	//	else {
	//		// Error. Server sent an empty msg... :(
	//		sessionState_ = SessionState::SS_AuthenticationFailed;
	//		sessionErrorMsg_ = "Empty message from server";
	//	}
	//}
	//UE_LOG(SessionManagerLog, Display, TEXT("Authentication RPC completed (sessionState %d, sessionCookie %s, sessionError %s)"), (int)sessionState_, *sessionCookie_, *sessionErrorMsg_);;
	//Completion->ExecuteIfBound();
}