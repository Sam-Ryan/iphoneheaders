/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class _IDSGenericCompletionHandler, NSString;

@interface IDSHomeKitManager : NSObject <IDSDaemonListenerProtocol> {

	_IDSGenericCompletionHandler* _getServiceUserIDsCompletion;
	_IDSGenericCompletionHandler* _getAdminAccessTokensCompletion;
	_IDSGenericCompletionHandler* _getConsentTokensCompletion;
	_IDSGenericCompletionHandler* _getUserAccessTokensCompletion;
	_IDSGenericCompletionHandler* _refreshUserAccessTokensCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)serviceUserIDs:(id)arg1 error:(id)arg2 ;
-(void)adminAccessTokens:(id)arg1 error:(id)arg2 ;
-(void)consentTokens:(id)arg1 error:(id)arg2 ;
-(void)userAccessTokens:(id)arg1 error:(id)arg2 ;
-(void)refreshUserAccessTokens:(id)arg1 error:(id)arg2 ;
-(void)getServiceUserIDsWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)getAdminAccessTokensWithWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 completionBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)getConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 completionBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)getUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 completionBlock:(/*^block*/id)arg5 queue:(id)arg6 ;
-(void)refreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 completionBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
@end

