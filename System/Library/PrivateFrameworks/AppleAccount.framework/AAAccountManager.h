/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)dealloc;
-(void)_removeAppleIDCertsForUsername:(id)arg1 ;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(void)saveAllAccounts;
-(void)removeAccount:(id)arg1 ;
-(id)accounts;
-(id)primaryAccount;
-(id)accountWithIdentifier:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)reloadAccounts;
-(id)_accountStore;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_stopObservingAccountStoreDidChangeNotification;
@end
