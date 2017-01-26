/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSSiriViewControllerHosting <NSObject>
@required
-(void)setStatusBarHidden:(BOOL)arg1;
-(void)setStatusViewHidden:(BOOL)arg1;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
-(void)setBugReportingAvailable:(BOOL)arg1;
-(void)setHelpButtonEmphasized:(BOOL)arg1;
-(void)pulseHelpButton;
-(void)serviceRequestsDismissal:(BOOL)arg1;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1;
-(void)serviceStartRequestWithOptions:(id)arg1;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOverSiri:(BOOL)arg3 replyHandler:(/*^block*/id)arg4;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
-(void)setCarDisplayGatekeeperVisible:(BOOL)arg1;
-(void)setStatusViewDisabled:(BOOL)arg1;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
-(void)serviceCanLoadPreviousConversation:(/*^block*/id)arg1;

@end

