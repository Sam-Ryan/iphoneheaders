/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:05:14 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CTCellularPlanClient.h>

@class NSXPCConnection, CTCellularPlanServer, NSMutableSet, NSString;

@interface CTCellularPlanClientDelegate : NSObject <CTCellularPlanClient> {

	NSXPCConnection* fConnection;
	CTCellularPlanServer* fServer;
	NSMutableSet* fEntitlements;
	/*^block*/id fhasNewProfileCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasCellularPlanEntitlement;
-(void)notifyClient:(/*^block*/id)arg1 ;
-(id)initWithServer:(id)arg1 andConnection:(id)arg2 ;
-(void)dealloc;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)signIdMapForSessionId:(id)arg1 locationRequired:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 latitude:(id)arg4 longitude:(id)arg5 ;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2 ;
-(void)setUserInPurchaseFlow:(BOOL)arg1 ;
-(void)registerHasNewProfileCompletion:(/*^block*/id)arg1 ;
-(void)fetchNewProfilesWithCompletion:(/*^block*/id)arg1 additionalParameters:(id)arg2 ;
-(void)retrieveRequestSettings:(/*^block*/id)arg1 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)openInternalUrlId:(long long)arg1 ;
-(void)getCurrentPlanType:(/*^block*/id)arg1 ;
-(void)getIMEIPrefix:(/*^block*/id)arg1 ;
-(void)setIMEIPrefix:(id)arg1 ;
-(void)getSelectedEnv:(/*^block*/id)arg1 ;
-(void)setSelectedEnv:(long long)arg1 ;
-(void)getSelectedProxy:(/*^block*/id)arg1 ;
-(void)setSelectedProxy:(long long)arg1 ;
-(void)mccMncOverride:(/*^block*/id)arg1 ;
-(void)setMcc:(long long)arg1 andMnc:(long long)arg2 ;
-(void)latitudeLongitudeOverride:(/*^block*/id)arg1 ;
-(void)setLatitude:(id)arg1 andLongitude:(id)arg2 ;
-(void)launchSequoia;
-(void)expirePlan;
-(void)updatePlansDatabase;
-(void)setActivePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)manageAccountForPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isRoamingPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)willDisplayPlanItems;
-(void)didSelectPlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

