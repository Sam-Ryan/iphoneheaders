/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCommandBase.h>

@class NSString, NSURL, NSUUID;

@interface FMDAbsintheV3SigningSessionRequest : FMCommandBase {

	NSString* _host;
	NSURL* _requestUrl;
	NSString* _sessionRequestService;
	void* _pscSessionRef;
	NSString* _authId;
	NSString* _authToken;
	NSString* _sessionURLTemplate;
	NSUUID* _activationLockRequestUUID;

}

@property (nonatomic,retain) NSURL * requestUrl;                              //@synthesize requestUrl=_requestUrl - In the implementation block
@property (nonatomic,retain) NSString * sessionRequestService;                //@synthesize sessionRequestService=_sessionRequestService - In the implementation block
@property (assign,nonatomic) void* pscSessionRef;                             //@synthesize pscSessionRef=_pscSessionRef - In the implementation block
@property (nonatomic,retain) NSString * authId;                               //@synthesize authId=_authId - In the implementation block
@property (nonatomic,retain) NSString * authToken;                            //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSString * sessionURLTemplate;                   //@synthesize sessionURLTemplate=_sessionURLTemplate - In the implementation block
@property (nonatomic,retain) NSUUID * activationLockRequestUUID;              //@synthesize activationLockRequestUUID=_activationLockRequestUUID - In the implementation block
-(NSURL *)requestUrl;
-(NSString *)authId;
-(void*)pscSessionRef;
-(void)setPscSessionRef:(void*)arg1 ;
-(NSUUID *)activationLockRequestUUID;
-(id)initWithAuthId:(id)arg1 authToken:(id)arg2 activationLockRequestUUID:(id)arg3 ;
-(void)setRequestUrl:(NSURL *)arg1 ;
-(NSString *)sessionRequestService;
-(void)setSessionRequestService:(NSString *)arg1 ;
-(void)setActivationLockRequestUUID:(NSUUID *)arg1 ;
-(void)setAuthId:(NSString *)arg1 ;
-(void)setSessionURLTemplate:(NSString *)arg1 ;
-(NSString *)sessionURLTemplate;
-(id)_sessionCreationRequestBody;
-(id)_authHeader;
-(id)_sessionCreationURL;
-(id)_substituteStandardURLPlaceholders:(id)arg1 ;
-(id)_inFieldCollectionReceipt;
-(id)path;
-(id)body;
-(id)host;
-(id)method;
-(void)setHost:(id)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(id)headers;
@end
