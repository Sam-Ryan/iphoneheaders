/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPUISearchPluginWrapperInterface
@property (assign,nonatomic) BOOL needsStatusBarLayoutLayer; 
@property (assign,getter=isDisplayLayoutElementActive,nonatomic) BOOL displayLayoutElementActive; 
@property (assign,nonatomic) BOOL needsFakeStatusBarForModalPresentation; 
@required
-(double)_accessibilityActivationAnimationStartDelay;
-(void)requestGestureResetAnimated:(BOOL)arg1;
-(void)searchViewControllerWillTriggerLaunch;
-(BOOL)needsStatusBarLayoutLayer;
-(void)setNeedsStatusBarLayoutLayer:(BOOL)arg1;
-(BOOL)isDisplayLayoutElementActive;
-(void)setDisplayLayoutElementActive:(BOOL)arg1;
-(BOOL)needsFakeStatusBarForModalPresentation;
-(void)setNeedsFakeStatusBarForModalPresentation:(BOOL)arg1;

@end

