/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXSpringBoardGlue : NSObject
+(BOOL)canShowAXInfoPanel;
+(void)resetCanShowAXInfoPanel;
+(void)toggleVoiceOverInfoPanel;
+(BOOL)_showingBuddyLockScreen;
+(void)removeVoiceOverInfoPanel:(double)arg1 ;
+(id)sharedInstance;
+(void)accessibilityInitializeBundle;
-(BOOL)isUILocked;
-(BOOL)isDimmed;
-(void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1 ;
-(BOOL)_accessibilityAllowShowNotificationGestureOverride;
@end

