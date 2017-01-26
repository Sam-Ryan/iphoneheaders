/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView, SBAlert, SBApplication, SBDosidoAnimator;

@interface SBUIStarkDosidoAnimation : SBUIStarkScreenAnimationController {

	UIView* _fromView;
	UIView* _toView;
	UIView* _viewToHide;
	SBAlert* _alertImpersonator;
	SBApplication* _impersonatedApplication;
	SBDosidoAnimator* _dosidoAnimator;
	BOOL _animationFinished;
	BOOL _fromAssistant;

}
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(id)_animationFactory;
-(id)initFromApp:(id)arg1 toAlertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(void)_willSetupStartDependencies;
-(void)_cleanupHosting;
-(double)_animationDelay;
-(void)_commonInitFromView:(id)arg1 toView:(id)arg2 alert:(id)arg3 toDisplay:(id)arg4 ;
-(void)noteDependencyDidInvalidate;
-(id)initFromAlertImpersonator:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3 ;
-(id)initFromApp:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3 ;
-(void)dealloc;
-(void)_startAnimation;
@end
