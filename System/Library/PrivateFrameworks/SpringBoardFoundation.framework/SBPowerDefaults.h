/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL disableIdleSleep; 
@property (assign,nonatomic) BOOL hideACPower; 
@property (nonatomic,readonly) BOOL hideLowPowerAlerts; 
@property (nonatomic,readonly) long long lowBatteryLevel; 
@property (nonatomic,readonly) BOOL trackPowerEvents; 
-(void)setHideLowPowerAlerts:(BOOL)arg1 ;
-(BOOL)hideLowPowerAlerts;
-(void)setDisableIdleSleep:(BOOL)arg1 ;
-(BOOL)disableIdleSleep;
-(void)setHideACPower:(BOOL)arg1 ;
-(BOOL)hideACPower;
-(void)setLowBatteryLevel:(long long)arg1 ;
-(long long)lowBatteryLevel;
-(void)setTrackPowerEvents:(BOOL)arg1 ;
-(BOOL)trackPowerEvents;
-(void)_bindAndRegisterDefaults;
@end

