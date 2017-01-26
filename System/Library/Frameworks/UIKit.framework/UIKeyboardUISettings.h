/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface UIKeyboardUISettings : _UISettings {

	int _lastVolume;
	BOOL _nextPage;
	BOOL _didShowHUD;

}
+(BOOL)enabled;
+(void)loadSettings;
+(void)hideViaNotification;
+(id)sharedInstance;
-(void)pressRingerButton;
-(void)hide;
-(id)_sharedHUD;
-(BOOL)_isShowingHUD;
-(id)initWithDefaultValues;
-(void)saveSettings;
-(void)cancel;
-(void)next;
-(void)show;
-(void)show:(BOOL)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)settingsHUDConfiguration;
-(void)previous;
@end

