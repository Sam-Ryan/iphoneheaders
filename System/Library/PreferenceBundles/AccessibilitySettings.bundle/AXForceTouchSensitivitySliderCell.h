/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface AXForceTouchSensitivitySliderCell : PSSliderTableCell {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	UILabel* _centerLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)sliderValueDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

