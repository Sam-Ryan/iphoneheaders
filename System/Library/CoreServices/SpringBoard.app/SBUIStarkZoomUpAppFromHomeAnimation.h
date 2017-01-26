/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>
#import <SpringBoard/SBIconAnimatorDelegate.h>

@class UIView, SBIconAnimator, SBAlert, NSString;

@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate> {

	UIView* _viewToAnimate;
	SBIconAnimator* _iconAnimator;
	SBAlert* _alertImpersonator;
	BOOL _animationFinished;
	BOOL _fromAssistant;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_applicationDependencyStateChanged;
-(id)_viewToAnimate;
-(void)_cleanupHosting;
-(void)_prepareZoom;
-(void)_noteZoomDidFinish;
-(void)_noteDependencyDidInvalidate;
-(void)_animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(double)_animationDelay;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(void)dealloc;
-(void)_startAnimation;
@end
