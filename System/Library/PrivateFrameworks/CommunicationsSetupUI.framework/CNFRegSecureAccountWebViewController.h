/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {

	IMAccount* _account;
	BOOL _triedGettingNewCredentials;
	BOOL _gotNewCredential;
	unsigned long long _signinFailureCount;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(void)_setupAccountHandlers;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(void)_showRequestPasswordAlert;
-(void)_showForgotPasswordAlert;
-(void)_showBadPasswordAlert;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_incrementSigninFailureCount;
-(void)_showRegistrationFailureWithError:(id)arg1 ;
-(void)_handleTimeout;
@end

