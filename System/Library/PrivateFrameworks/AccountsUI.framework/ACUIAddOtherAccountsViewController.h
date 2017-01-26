/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>

@class NSString;

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)_specifiersForOtherMailAccounts;
-(id)_specifiersForOtherContactsAccounts;
-(id)_specifiersForOtherCalendarAccounts;
-(id)_specifiersForOtherServerAccounts;
-(id)_viewProvidersManager;
-(id)specifiers;
@end

