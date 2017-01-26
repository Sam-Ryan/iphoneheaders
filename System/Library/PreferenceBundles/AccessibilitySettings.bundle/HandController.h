/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/CustomGestureController.h>

@class SCATController, NSMutableArray;

@interface HandController : CustomGestureController {

	SCATController* _scannerController;
	NSMutableArray* _hardwareSpecs;

}
-(id)customGesturesTitle;
-(id)customGesturesExplanatoryText;
-(unsigned long long)maximumNumberOfCustomGestures;
-(SEL)customGesturesGetter;
-(void)setSwaggleOpensMenu:(id)arg1 specifier:(id)arg2 ;
-(SEL)customGesturesSetter;
-(void)setHandEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_handleSettingsChange;
-(void)_handleAssistiveTouchToggled:(id)arg1 ;
-(id)alwaysShowMenuEnabled:(id)arg1 ;
-(id)swaggleOpensMenu;
-(id)touchSpeed;
-(void)setTouchSpeed:(id)arg1 ;
-(id)handEnabled:(id)arg1 ;
-(void)setAlwaysShowMenuEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_orientationChange:(id)arg1 ;
-(void)_handleAssistiveTouchHardwareToggled:(id)arg1 ;
-(void)_updateAssistiveTouchControlItems:(id)arg1 reload:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end
