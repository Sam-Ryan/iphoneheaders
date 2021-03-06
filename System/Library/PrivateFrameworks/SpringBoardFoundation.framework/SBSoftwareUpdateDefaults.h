/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString, NSDictionary;

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSString * lastOSVersion; 
@property (nonatomic,retain) NSDictionary * softwareUpdateState; 
@property (assign,getter=hasDeveloperInstallBrickAlertShown7DayWarning,nonatomic) BOOL developerInstallBrickAlertShown7DayWarning; 
@property (assign,getter=hasDeveloperInstallBrickAlertShown3DayWarning,nonatomic) BOOL developerInstallBrickAlertShown3DayWarning; 
@property (assign,getter=hasDeveloperInstallBrickAlertShownTomorrowWarning,nonatomic) BOOL developerInstallBrickAlertShownTomorrowWarning; 
-(void)setSoftwareUpdateState:(NSDictionary *)arg1 ;
-(NSDictionary *)softwareUpdateState;
-(void)setDeveloperInstallBrickAlertShownTomorrowWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShownTomorrowWarning;
-(void)setDeveloperInstallBrickAlertShown7DayWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShown7DayWarning;
-(void)setDeveloperInstallBrickAlertShown3DayWarning:(BOOL)arg1 ;
-(BOOL)hasDeveloperInstallBrickAlertShown3DayWarning;
-(void)setLastOSVersion:(NSString *)arg1 ;
-(NSString *)lastOSVersion;
-(void)_bindAndRegisterDefaults;
-(void)clearDeveloperInstallBrickAlerts;
-(void)clearLegacyBadgePreference;
@end

