/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityListController.h>

@class AXRemoteHearingAidDevice;

@interface HearingAidAdvancedController : AccessibilityListController {

	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(id)hardwareVersion:(id)arg1 ;
-(id)specifiersForEar:(int)arg1 ;
-(id)connection:(id)arg1 ;
-(id)HIID:(id)arg1 ;
-(id)firmwareVersion:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(id)specifiers;
-(AXRemoteHearingAidDevice *)device;
@end

