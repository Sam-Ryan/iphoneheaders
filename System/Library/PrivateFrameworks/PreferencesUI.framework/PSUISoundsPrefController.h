/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUISoundsPrefController : PSListController {

	float _volume;
	float _rateLimitedVolume;
	int _lastPlayedSound;
	BOOL _hasTelephony;
	BOOL _volumeHUDSupressed;
	double _lastTime;
	PSSpecifier* _voiceMailSpecifier;
	long long _voiceMailSpecifierIndex;

}
-(int)_deviceType;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)didLock;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)endInterruption;
-(void)volumeChangedExternally:(id)arg1 ;
-(void)updateVoiceMailVisibility;
-(void)didBackground;
-(void)willForeground;
-(void)setVolumeHUDSupression:(BOOL)arg1 ;
-(BOOL)_canChangeRingtoneWithButtons;
-(void)updateVolume;
-(void)setVolumeAfterRateLimiting;
-(void)playSound:(int)arg1 ;
-(void)setSoundEffects:(id)arg1 specifier:(id)arg2 ;
-(id)soundEffects:(id)arg1 ;
-(id)volume:(id)arg1 ;
-(void)setVolume:(id)arg1 specifier:(id)arg2 ;
-(id)detailTextForToneWithSpecifier:(id)arg1 ;
-(id)shouldPlayCalendarSound:(id)arg1 ;
-(void)setVibrate:(id)arg1 specifier:(id)arg2 ;
-(void)setPlayLockSound:(id)arg1 specifier:(id)arg2 ;
-(void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2 ;
-(id)canChangeRingtoneWithButtons:(id)arg1 ;
-(void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end

