/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/SafariServices.axbundle/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/___SFNavigationBarAccessibility_super.h>

@interface _SFNavigationBarAccessibility : ___SFNavigationBarAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_axUpdateURLValue;
-(void)_axUpdateTextFields;
-(void)_axUpdateCancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)_updateText;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)_updateShowsLockIcon;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_compressedBarTapped;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(long long)_accessibilitySortPriority;
@end

