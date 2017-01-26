/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXEditableTableCellWithStepperDelegate.h>

@class NSArray, PSSpecifier, NSString;

@interface AXTouchAccommodationsController : AccessibilityBaseListController <AXEditableTableCellWithStepperDelegate> {

	BOOL _shouldIgnoreNextEnabledChangedNotification;
	NSArray* _tapTimeoutSpecifiers;
	PSSpecifier* _holdDurationPickerSpecifier;
	PSSpecifier* _ignoreRepeatPickerSpecifier;

}

@property (nonatomic,retain) NSArray * tapTimeoutSpecifiers;                               //@synthesize tapTimeoutSpecifiers=_tapTimeoutSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * holdDurationPickerSpecifier;                    //@synthesize holdDurationPickerSpecifier=_holdDurationPickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * ignoreRepeatPickerSpecifier;                    //@synthesize ignoreRepeatPickerSpecifier=_ignoreRepeatPickerSpecifier - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreNextEnabledChangedNotification;              //@synthesize shouldIgnoreNextEnabledChangedNotification=_shouldIgnoreNextEnabledChangedNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setIgnoreRepeatEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setHoldDurationPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)setIgnoreRepeatPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)_showOrHideTapTimeoutAnimated:(BOOL)arg1 ;
-(PSSpecifier *)ignoreRepeatPickerSpecifier;
-(void)_updateDelayPickerSpecifier:(id)arg1 afterSpecifierWithIdentifier:(id)arg2 enabled:(BOOL)arg3 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(id)ignoreRepeat:(id)arg1 ;
-(void)_setHoldDurationEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)stringValueForSpecifier:(id)arg1 ;
-(id)_holdDurationSpecifiers;
-(id)_ignoreRepeatSpecifiers;
-(id)_durationSpecifiersWithName:(id)arg1 footerText:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 previousSpecifierIdentifier:(id)arg5 pickerSpecifier:(id)arg6 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(BOOL)shouldIgnoreNextEnabledChangedNotification;
-(id)holdDuration:(id)arg1 ;
-(void)setTouchAccommodationsEnabled:(id)arg1 specifier:(id)arg2 ;
-(PSSpecifier *)holdDurationPickerSpecifier;
-(NSArray *)tapTimeoutSpecifiers;
-(void)setShouldIgnoreNextEnabledChangedNotification:(BOOL)arg1 ;
-(void)_updateMasterSwitchFooterTextForSpecifier:(id)arg1 shouldReload:(BOOL)arg2 ;
-(id)_ignoreRepeatEnabled:(id)arg1 ;
-(id)_holdDurationEnabled:(id)arg1 ;
-(id)_tapActivationMethodSpecifiers;
-(void)_updateMasterSwitchFooterText;
-(void)setTapTimeoutSpecifiers:(NSArray *)arg1 ;
-(id)touchAccommodationsEnabled:(id)arg1 ;
-(id)activationMethod:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)specifiers;
@end

