/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThermalAlertItem, NSTimer;

@interface MNLockScreenThermalWarningController : NSObject {

	BOOL _enabled;
	BOOL _screenWasForcedLocked;
	MNThermalAlertItem* _alert;
	BOOL _locking;
	NSTimer* _idleTimer;
	NSTimer* _relockTimer;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)applicationWillActivate:(id)arg1 ;
-(void)clearRelockTimer;
-(void)startRelockTimer;
-(void)checkThermalLevel;
-(void)didReceiveEvent;
-(void)relockIfAppropriate;
-(void)lockUnconditionally;
-(void)startIdleTimer;
-(void)clearIdleTimer;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)lock;
@end

