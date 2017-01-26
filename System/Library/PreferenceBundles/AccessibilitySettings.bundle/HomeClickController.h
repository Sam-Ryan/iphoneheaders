/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSTimer, NSIndexPath;

@interface HomeClickController : PSListController {

	long long _flashCount;
	NSTimer* _flashTimer;
	NSTimer* _vibrationTimer;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic) long long flashCount;                         //@synthesize flashCount=_flashCount - In the implementation block
@property (nonatomic,retain) NSTimer * flashTimer;                         //@synthesize flashTimer=_flashTimer - In the implementation block
@property (nonatomic,retain) NSTimer * vibrationTimer;                     //@synthesize vibrationTimer=_vibrationTimer - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(void)setFlashTimer:(NSTimer *)arg1 ;
-(long long)flashCount;
-(void)setVibrationTimer:(NSTimer *)arg1 ;
-(void)_vibrateSelectedRow;
-(float)_homeClickSpeedFromSpecifierKey:(id)arg1 ;
-(void)setFlashCount:(long long)arg1 ;
-(NSTimer *)vibrationTimer;
-(void)_flashSelectedRow;
-(CFDictionaryRef)_vibrationPattern;
-(NSTimer *)flashTimer;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)specifiers;
@end

