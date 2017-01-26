/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <libobjc.A.dylib/MPUSystemMediaControlsDelegate.h>
#import <libobjc.A.dylib/SBLockScreenBundleController.h>

@class MPUSystemMediaControlsViewController, NSString;

@interface NowPlayingArtPluginController : SBAwayViewPluginController <MPUSystemMediaControlsDelegate, SBLockScreenBundleController> {

	MPUSystemMediaControlsViewController* _systemMediaController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)showDateView;
-(/*^block*/id)_disableTransitionBlock;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)wantsAutomaticFullscreenTimer;
-(BOOL)_tapHandler:(id)arg1 ;
@end
