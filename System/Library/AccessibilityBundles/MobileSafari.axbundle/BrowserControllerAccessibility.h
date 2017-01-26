/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/MobileSafari.axbundle/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/__BrowserControllerAccessibility_super.h>

@interface BrowserControllerAccessibility : __BrowserControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(id)accessibilityCurrentWebView;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)togglePrivateBrowsing;
-(void)sidebarDimmingViewDismiss:(id)arg1 ;
-(BOOL)showBrowserPanelType:(int)arg1 ;
-(BOOL)hideBrowserPanelType:(int)arg1 ;
-(void)_axUpdateVisibleContentInset;
-(void)setShowingReader:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_axUpdateVisibleContentInsetForScrollView:(id)arg1 ;
-(void)_setContentInsetAdjustments:(UIEdgeInsets)arg1 forScrollView:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)_initSubviews;
-(BOOL)accessibilityPerformEscape;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilityKeyboardDidHide:(id)arg1 ;
@end

