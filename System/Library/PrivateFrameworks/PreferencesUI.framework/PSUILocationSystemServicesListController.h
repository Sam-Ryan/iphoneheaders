/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PSUILocationServicesListController.h>

@class RTRoutineManager;

@interface PSUILocationSystemServicesListController : PSUILocationServicesListController {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
+(id)locationBasedAlertBundlesForSystemVersion:(id)arg1 ;
-(id)init;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(id)_locationBasedAlertBundles;
-(RTRoutineManager *)routineManager;
-(void)_performConsistencyCheck;
-(id)_productImprovementByBundlePath;
-(void)_setLocationBasedAlertsAuthorized:(id)arg1 ;
-(id)_areLocationBasedAlertsAuthorized;
-(id)coreRoutineEnabledStatus:(id)arg1 ;
-(void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_readAddressCorrectionAuthorizationStatus:(id)arg1 ;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)_showAddressCorrectionPage;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(id)specifiers;
@end

