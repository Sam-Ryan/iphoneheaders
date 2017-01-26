/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/SCATDefaultVsLongPressController.h>

@class AXSwitch;

@interface SCATSwitchActionTypeController : SCATDefaultVsLongPressController {

	AXSwitch* _storedSwitch;

}

@property (nonatomic,retain) AXSwitch * storedSwitch;              //@synthesize storedSwitch=_storedSwitch - In the implementation block
-(id)controllerForLongPress:(BOOL)arg1 ;
-(id)actionStringForLongPress:(BOOL)arg1 ;
-(AXSwitch *)storedSwitch;
-(void)setStoredSwitch:(AXSwitch *)arg1 ;
-(id)initWithSwitch:(id)arg1 ;
-(void)dealloc;
@end
