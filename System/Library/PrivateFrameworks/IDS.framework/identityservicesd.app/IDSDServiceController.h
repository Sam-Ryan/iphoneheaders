/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:03 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSArray;

@interface IDSDServiceController : NSObject {

	NSMutableDictionary* _services;
	NSMutableDictionary* _servicesToNameMap;
	NSMutableDictionary* _servicesToTopicMap;
	NSMutableDictionary* _deviceIDToSubServicesMap;
	NSSet* _allAdHocServices;

}

@property (nonatomic,__weak,readonly) NSArray * allServices; 
@property (nonatomic,__weak,readonly) NSArray * allServicesStrings; 
@property (nonatomic,readonly) NSSet * allAdHocServices;                         //@synthesize allAdHocServices=_allAdHocServices - In the implementation block
@property (nonatomic,readonly) NSSet * allPrimaryServices; 
+(id)sharedInstance;
-(id)serviceWithIdentifier:(id)arg1 ;
-(id)serviceWithPushTopic:(id)arg1 ;
-(NSArray *)allServicesStrings;
-(NSSet *)allPrimaryServices;
-(id)allServicesWithAdHocServiceType:(unsigned)arg1 ;
-(void)_loadServices;
-(void)_loadSubServices;
-(void)_loadServiceWithDictionary:(id)arg1 ;
-(id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2 ;
-(void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3 ;
-(void)_saveSubServices;
-(BOOL)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2 ;
-(void)_unloadServiceWithName:(id)arg1 ;
-(void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_combinedServicesForAllDevices;
-(NSSet *)allAdHocServices;
-(id)init;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3 ;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
@end

