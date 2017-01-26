/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) NSArray * countryCodesShowingEmergencyOnlyStatus; 
@property (nonatomic,readonly) BOOL showBatteryLevel; 
@property (nonatomic,readonly) BOOL showBatteryPercentage; 
@property (nonatomic,readonly) BOOL suppressStatusBarOverrideForScreenSharing; 
@property (nonatomic,readonly) BOOL showOptimalCellDataForCarPlay; 
@property (nonatomic,readonly) BOOL showTapToRadarForCarPlay; 
@property (nonatomic,readonly) BOOL showRSSI; 
@property (nonatomic,readonly) BOOL showGSMRSSI; 
@property (nonatomic,readonly) unsigned long long statusBarLogLevel; 
-(void)setShowGSMRSSI:(BOOL)arg1 ;
-(BOOL)showGSMRSSI;
-(void)setShowTapToRadarForCarPlay:(BOOL)arg1 ;
-(BOOL)showTapToRadarForCarPlay;
-(void)setShowOptimalCellDataForCarPlay:(BOOL)arg1 ;
-(BOOL)showOptimalCellDataForCarPlay;
-(void)setShowRSSI:(BOOL)arg1 ;
-(BOOL)showRSSI;
-(void)setShowBatteryLevel:(BOOL)arg1 ;
-(BOOL)showBatteryLevel;
-(void)setStatusBarLogLevel:(unsigned long long)arg1 ;
-(unsigned long long)statusBarLogLevel;
-(void)setCountryCodesShowingEmergencyOnlyStatus:(NSArray *)arg1 ;
-(NSArray *)countryCodesShowingEmergencyOnlyStatus;
-(void)setShowBatteryPercentage:(BOOL)arg1 ;
-(BOOL)showBatteryPercentage;
-(void)setSuppressStatusBarOverrideForScreenSharing:(BOOL)arg1 ;
-(BOOL)suppressStatusBarOverrideForScreenSharing;
-(void)_bindAndRegisterDefaults;
@end
