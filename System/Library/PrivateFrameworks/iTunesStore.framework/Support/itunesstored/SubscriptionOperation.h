/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, SSVSubscriptionResponse, NSString;

@interface SubscriptionOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	long long _operationType;
	BOOL _requestingOfflineSlot;
	SSVSubscriptionResponse* _response;
	NSString* _userAgent;

}

@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) long long operationType; 
@property (getter=isRequestingOfflineSlot) BOOL requestingOfflineSlot; 
@property (copy,readonly) SSVSubscriptionResponse * response; 
@property (copy) NSString * userAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_requestPropertiesWithAccount:(id)arg1 syncState:(id)arg2 fairPlaySubscriptionController:(id)arg3 ;
-(id)_newMachineDataOperationWithAccount:(id)arg1 response:(id)arg2 ;
-(BOOL)isRequestingOfflineSlot;
-(void)setRequestingOfflineSlot:(BOOL)arg1 ;
-(void)run;
-(SSVSubscriptionResponse *)response;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setOperationType:(long long)arg1 ;
-(long long)operationType;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
@end

