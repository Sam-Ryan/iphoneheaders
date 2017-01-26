/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenTestPluginSettings : _UISettings {

	BOOL _enablePlugin;
	BOOL _enableLostModePlugin;
	BOOL _showDateView;
	BOOL _showDate;
	BOOL _disableOnUnlock;
	BOOL _showCamera;
	BOOL _showBackgroundView;
	unsigned long long _overlayStyle;
	unsigned long long _notificationBehavior;

}

@property (assign) BOOL enablePlugin;                                    //@synthesize enablePlugin=_enablePlugin - In the implementation block
@property (assign) BOOL enableLostModePlugin;                            //@synthesize enableLostModePlugin=_enableLostModePlugin - In the implementation block
@property (assign) unsigned long long overlayStyle;                      //@synthesize overlayStyle=_overlayStyle - In the implementation block
@property (assign) unsigned long long notificationBehavior;              //@synthesize notificationBehavior=_notificationBehavior - In the implementation block
@property (assign) BOOL showDateView;                                    //@synthesize showDateView=_showDateView - In the implementation block
@property (assign) BOOL showDate;                                        //@synthesize showDate=_showDate - In the implementation block
@property (assign) BOOL disableOnUnlock;                                 //@synthesize disableOnUnlock=_disableOnUnlock - In the implementation block
@property (assign) BOOL showCamera;                                      //@synthesize showCamera=_showCamera - In the implementation block
@property (assign) BOOL showBackgroundView;                              //@synthesize showBackgroundView=_showBackgroundView - In the implementation block
+(id)settingsControllerModule;
-(void)setOverlayStyle:(unsigned long long)arg1 ;
-(void)setNotificationBehavior:(unsigned long long)arg1 ;
-(void)setEnablePlugin:(BOOL)arg1 ;
-(void)setEnableLostModePlugin:(BOOL)arg1 ;
-(void)setShowDateView:(BOOL)arg1 ;
-(void)setShowDate:(BOOL)arg1 ;
-(void)setDisableOnUnlock:(BOOL)arg1 ;
-(void)setShowCamera:(BOOL)arg1 ;
-(BOOL)enablePlugin;
-(BOOL)enableLostModePlugin;
-(BOOL)disableOnUnlock;
-(BOOL)showCamera;
-(BOOL)showBackgroundView;
-(void)setDefaultValues;
-(unsigned long long)overlayStyle;
-(BOOL)showDateView;
-(unsigned long long)notificationBehavior;
-(BOOL)showDate;
-(void)setShowBackgroundView:(BOOL)arg1 ;
@end

