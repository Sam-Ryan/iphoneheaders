/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/Access/DefaultAccessPlugin.bundle/DefaultAccessPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitAccessPlugin/ACDAccountAccessPlugin.h>

@class NSString;

@interface ACDefaultAccessPlugin : NSObject <ACDAccountAccessPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultAccessEntitlementForAccountType:(id)arg1 ;
+(BOOL)_accessAlertSupportedByAccountType:(id)arg1 ;
+(id)_fullAccessEntitlementForAccountType:(id)arg1 ;
+(id)_supportedAccountTypeIdentifiers;
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(BOOL)_shouldGrantClient:(id)arg1 unrestrictedAccessToAccountType:(id)arg2 ;
-(BOOL)_shouldGrantClient:(id)arg1 defaultAccessToAccountType:(id)arg2 ;
-(void)_presentAccessAlertforClient:(id)arg1 onAccountType:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

