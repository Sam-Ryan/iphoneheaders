/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:01 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSRemoteCredential;

@interface IDSAccountSync : NSObject {

	IDSRemoteCredential* _syncCredential;

}
+(id)sharedInstance;
-(void)synchronizeAccounts;
-(void)synchronizePreferredAccount;
-(id)pairingManager;
-(id)serviceController;
-(void)synchronizeAccounts:(id)arg1 forService:(id)arg2 ;
-(void)_sendAccountSyncMessage:(id)arg1 ;
-(void)synchronizeAccountsWithRemoteInfo:(id)arg1 service:(id)arg2 ;
-(void)_updatePreferredAccountWithAccountInfo:(id)arg1 ;
-(void)_registerAccountsWithRemoteInfo:(id)arg1 ;
-(BOOL)_isAccountInfoRegistered:(id)arg1 ;
-(id)_strippedAccountInfo:(id)arg1 ;
-(void)incomingSyncMessage:(id)arg1 ;
-(void)_deRegisterAccountWithLoginID:(id)arg1 service:(id)arg2 ;
-(id)init;
-(id)accountController;
@end

