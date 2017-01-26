/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <TwitterSettings/SLTwitterAccountCreationDelegate.h>

@class PSSpecifier, ACAccount, PSSetupController, NSString;

@interface SLTwitterSignInController : ACUIViewController <SLTwitterAccountCreationDelegate> {

	PSSpecifier* _createNewAccountGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	ACAccount* _account;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_signInButtonTapped:(id)arg1 ;
-(void)_authenticateAccount;
-(void)_handleSaveCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(id)_loginSpecifiers;
-(id)_createNewAccountButtonSpecifier;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)setPassword:(id)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)returnPressedAtEnd;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateSignInButton;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)specifiers;
@end

