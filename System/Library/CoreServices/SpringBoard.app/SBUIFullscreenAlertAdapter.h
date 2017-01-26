/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertAdapter.h>

@interface SBUIFullscreenAlertAdapter : SBAlertAdapter {

	BOOL _animatingDeactivation;
	BOOL _animatingActivation;

}
+(void)alertAdapterDisplayDidDisappear:(id)arg1 ;
+(void)activateAlertForController:(id)arg1 animated:(BOOL)arg2 animateCurrentDisplayOut:(BOOL)arg3 withDelay:(BOOL)arg4 isSlidingDisplay:(BOOL)arg5 ;
+(void)deactivateAlertForController:(id)arg1 animated:(BOOL)arg2 animateOldDisplayInWithStyle:(int)arg3 isSlidingDisplay:(BOOL)arg4 ;
+(id)_adapterForController:(id)arg1 ;
-(void)setFlag:(long long)arg1 forStateSetting:(unsigned)arg2 ;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(BOOL)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)effectiveViewController;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(void)displayDidDisappear;
-(BOOL)currentlyAnimatingDeactivation;
-(BOOL)isCurrentlyAnimatingActivation;
-(void)_pluginViewDidAnimatedIn:(id)arg1 ;
-(void)_pluginViewAnimatedOut:(id)arg1 ;
-(void)_updateForTransparentDismiss:(id)arg1 ;
-(void)prepareViewToAnimateIn;
-(id)initWithAlertController:(id)arg1 ;
-(void)prepareViewToAnimateOut;
-(void)setViewShouldAnimateIn:(BOOL)arg1 ;
-(void)dealloc;
-(id)display;
-(void)deactivate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)activate;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)handleMenuButtonTap;
-(void)animateViewIn;
-(void)animateViewOut;
-(BOOL)viewIsReadyToBeRemoved;
-(BOOL)hasTranslucentBackground;
-(void)handleAutoLock;
-(BOOL)handleLockButtonPressed;
-(void)setDisplay:(id)arg1 ;
@end

