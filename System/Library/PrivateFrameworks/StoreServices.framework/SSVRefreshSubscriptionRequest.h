/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSString;

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	BOOL _requestingOfflineSlot;

}

@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;                          //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,getter=isRequestingOfflineSlot,nonatomic) BOOL requestingOfflineSlot;              //@synthesize requestingOfflineSlot=_requestingOfflineSlot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRequestingOfflineSlot;
-(void)setRequestingOfflineSlot:(BOOL)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end
