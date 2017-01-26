/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
#import <GAXSpringboardServer/__GAXSpringBoardOverride_super.h>

@interface GAXSpringBoardOverride : __GAXSpringBoardOverride_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)statusBarReturnActionTap:(GSEventRef)arg1 ;
-(BOOL)_gaxShouldAllowOpeningURL:(id)arg1 ;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 activationSettings:(id)arg6 withResult:(/*^block*/id)arg7 ;
-(BOOL)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 ;
-(void)_menuButtonDown:(IOHIDEventRef)arg1 ;
-(void)handleGotoHomeScreenShortcut:(id)arg1 ;
-(BOOL)handleEvent:(GSEventRef)arg1 withNewEvent:(id)arg2 ;
-(void)batteryStatusDidChange:(id)arg1 ;
-(void)_revealSpotlight;
-(void)_menuButtonUp:(IOHIDEventRef)arg1 ;
@end
