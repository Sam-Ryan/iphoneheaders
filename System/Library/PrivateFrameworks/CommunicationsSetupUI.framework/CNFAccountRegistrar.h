/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMAccount, NSTimer, UIViewController;

@interface CNFAccountRegistrar : NSObject {

	/*^block*/id _completionBlock;
	IMAccount* _account;
	NSTimer* _registrationTimer;
	long long _serviceType;
	UIViewController* _presentationViewController;

}

@property (copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) IMAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (retain) NSTimer * registrationTimer;                                //@synthesize registrationTimer=_registrationTimer - In the implementation block
@property (assign) long long serviceType;                                      //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) UIViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(UIViewController *)presentationViewController;
-(id)initWithServiceType:(long long)arg1 presentationViewController:(id)arg2 ;
-(void)registerAccountWithUsername:(id)arg1 password:(id)arg2 service:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_registrationTimerFired:(id)arg1 ;
-(void)setRegistrationTimer:(NSTimer *)arg1 ;
-(NSTimer *)registrationTimer;
-(void)_configureAliasesForAccount:(id)arg1 ;
-(void)_continueRegisteringAuthenticatedAccount:(id)arg1 ;
-(void)continueRegistrationForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
@end

