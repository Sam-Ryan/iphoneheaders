/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double backgroundMultitaskingWatchdogTimeout; 
@property (nonatomic,readonly) BOOL forcesMedusaAdoption; 
@property (nonatomic,readonly) BOOL ignoresDeclaredNetworkUsage; 
@property (nonatomic,readonly) BOOL disableAutoLaunchForMail; 
@property (nonatomic,readonly) BOOL shouldAllowScreenshotsInLoginWindow; 
@property (nonatomic,readonly) BOOL shouldShowInternalApplications; 
@property (nonatomic,readonly) BOOL shouldShowNonDefaultSystemApplications; 
-(void)setIgnoresDeclaredNetworkUsage:(BOOL)arg1 ;
-(BOOL)ignoresDeclaredNetworkUsage;
-(void)setBackgroundMultitaskingWatchdogTimeout:(double)arg1 ;
-(double)backgroundMultitaskingWatchdogTimeout;
-(void)setDisableAutoLaunchForMail:(BOOL)arg1 ;
-(BOOL)disableAutoLaunchForMail;
-(void)setShouldAllowScreenshotsInLoginWindow:(BOOL)arg1 ;
-(BOOL)shouldAllowScreenshotsInLoginWindow;
-(void)setShouldShowNonDefaultSystemApplications:(BOOL)arg1 ;
-(BOOL)shouldShowNonDefaultSystemApplications;
-(void)setShouldShowInternalApplications:(BOOL)arg1 ;
-(BOOL)shouldShowInternalApplications;
-(void)setForcesMedusaAdoption:(BOOL)arg1 ;
-(BOOL)forcesMedusaAdoption;
-(void)_bindAndRegisterDefaults;
@end

