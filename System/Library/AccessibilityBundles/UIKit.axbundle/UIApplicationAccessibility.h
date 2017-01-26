/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIApplicationAccessibility_super.h>

@interface UIApplicationAccessibility : __UIApplicationAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)dealloc;
-(BOOL)openURL:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)_finishButtonEvent:(id)arg1 ;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityPerformEscape;
-(unsigned)_accessibilityMachPort;
-(id)_accessibilitySpeakThisViewController;
-(BOOL)_accessibilityOverrideStartStopExtraExtras;
-(BOOL)_accessibilityStartStopDictation;
-(void)_loadAllAccessibilityInformation;
-(void)_accessibilityAVCaptureStarted:(id)arg1 ;
-(void)_accessibilityAVCaptureStopped:(id)arg1 ;
-(void)_accessibilityKeyboardDidHide:(id)arg1 ;
-(void)_accessibilityKeyboardDidShow:(id)arg1 ;
-(id)_accessibilityResponderElement:(BOOL)arg1 ;
-(id)_accessibilityMainWindow;
-(id)_accessibilityResponderElement;
-(id)_accessibilitySummaryElement;
-(id)_accessibilityValidateResponderForFocus:(id)arg1 ;
-(id)_accessibilityWindows;
-(BOOL)_accessibilitySoftwareKeyboardActive;
-(id)_accessibilityUIWindowFindWithGlobalPoint:(CGPoint)arg1 ;
-(id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2 focus:(BOOL)arg3 allowScrolling:(BOOL)arg4 ;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 allowScrolling:(BOOL)arg4 ;
-(id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 ;
-(BOOL)_accessibilityElementBelongsToKeyboardWindow:(id)arg1 ;
-(id)_axSubviews;
-(id)_accessibilityFirstElementForFocus;
-(id)_accessibilityResponderElementForFocus;
-(id)_accessibilityNativeFocusElement;
-(id)_accessibilityNativeFocusPreferredElement;
-(id)_accessibilityBundleIdentifier;
-(id)_accessibilityTypingCandidates;
-(id)_firstStatusBarElement;
-(id)_lastStatusBarElement;
-(id)_accessibilityTitleBarElement;
-(BOOL)_accessibilityDictationIsListening;
-(id)_accessibilityCurrentHardwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareLanguage;
-(id)_accessibilitySemanticContext;
-(id)_accessibilityIsolatedWindows;
-(id)_accessibilityPreviewWindow;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(BOOL)_accessibilityActionIsPhysicalButton:(int)arg1 nativeUIKitTypeRef:(long long*)arg2 ;
-(void)_accessibilityShowKeyboardHints;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(id)_accessibilityApplicationSemanticContextWithViewController:(id)arg1 ;
-(id)_accessibilitySpeakThisElementsAndStrings;
-(CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(CGRect)arg1 ;
-(BOOL)accessibilityStartStopToggle;
-(void)_accessibilityInitialize;
-(void)accessibilityDisable;
-(id)_accessibilityElementsForSearchParameter:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(void)_accessibilitySetAllowsNotificationsDuringSuspension:(BOOL)arg1 ;
-(BOOL)_accessibilityAllowsNotificationsDuringSuspension;
-(id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 andColumn:(long long)arg2 ;
-(id)_axAllSubviews;
-(BOOL)_accessibilitySoftwareKeyboardCoversElement:(id)arg1 ;
-(CGRect)_accessibilitySoftwareKeyboardAccessibilityFrame;
-(BOOL)_accessibilityHardwareKeyboardActive;
-(void)_accessibilityFixPhysicalEvent:(id)arg1 ;
-(BOOL)_accessibilityDispatchKeyboardAction:(id)arg1 ;
-(int)_accessibilityApplicationForPosition:(CGPoint)arg1 ;
-(id)_accessibilityElementCommunityIdentifier;
-(id)_accessibilityElementsWithSemanticContext:(id)arg1 ;
-(BOOL)_accessibilityBeginMonitoringIdleRunLoop;
-(id)_accessibilityExplorerElements;
-(id)_accessibilityNativeFocusableElements:(id)arg1 ;
-(long long)_accessibilityOrientationForCompareGeometry;
@end
