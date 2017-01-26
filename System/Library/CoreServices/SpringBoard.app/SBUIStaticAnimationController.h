/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBWorkspaceApplication;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController {

	UIView* _staticAppView;
	UIView* _hostView;

}

@property (nonatomic,readonly) SBWorkspaceApplication * app; 
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(id)_animationProgressDependencies;
-(void)_setupStartDependencies;
-(void)_applicationDependencyStateChanged;
-(BOOL)_shouldDismissBanner;
-(BOOL)_willAnimate;
-(void)_willBeginWaitingForStartDependencies;
-(void)_hideAppHostView;
-(SBWorkspaceApplication *)app;
-(void)_startAnimation;
@end

