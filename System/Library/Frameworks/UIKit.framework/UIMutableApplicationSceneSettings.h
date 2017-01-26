/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSMutableSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@class NSNumber, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (assign,nonatomic) BOOL underLock; 
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress; 
@property (assign,nonatomic) unsigned long long deactivationReasons; 
@property (nonatomic,retain) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain) NSNumber * forcedStatusBarHidden; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL canShowAlerts; 
@property (assign,nonatomic) BOOL idleModeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEffectivelyBackgrounded;
-(BOOL)isUISubclass;
-(unsigned long long)deactivationReasons;
-(BOOL)canShowAlerts;
-(BOOL)underLock;
-(NSNumber *)forcedStatusBarStyle;
-(NSNumber *)forcedStatusBarHidden;
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)deviceOrientationEventsEnabled;
-(void)setUnderLock:(BOOL)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(void)setForcedStatusBarStyle:(NSNumber *)arg1 ;
-(void)setForcedStatusBarHidden:(NSNumber *)arg1 ;
-(void)setCanShowAlerts:(BOOL)arg1 ;
@end
