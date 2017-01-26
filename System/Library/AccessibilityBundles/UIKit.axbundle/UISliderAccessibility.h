/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UISliderAccessibility_super.h>

@interface UISliderAccessibility : __UISliderAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)_accessibilitySetValue:(id)arg1 ;
-(void)_accessibilityAnnounceNewValue;
-(double)_accessibilityIncreaseAmount:(BOOL)arg1 ;
-(void)_accessibilityBumpValue:(BOOL)arg1 ;
-(id)_accessibilityAbsoluteValue;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
@end

