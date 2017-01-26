/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class ACAccountStore, AASetupAssistantService, NSArray, NSMutableArray, NSMutableDictionary, NSObject;

@interface AADelegateAccountSetupHelper : NSObject {

	ACAccountStore* _accountStore;
	AASetupAssistantService* _aaService;
	NSArray* _delegatesToSetup;
	NSMutableArray* _pendingCompletionBundles;
	NSMutableDictionary* _assistantDelegates;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_source> _delegatetimer;

}
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(void)_setupDelegateAccountsWithEmailChoice:(id)arg1 ;
-(id)_loadAssistantDelegateBundles;
-(id)_adjustResponseDictionary:(id)arg1 ;
-(void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

