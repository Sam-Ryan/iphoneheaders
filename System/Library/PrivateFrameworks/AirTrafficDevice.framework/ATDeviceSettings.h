/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSString, NSArray;

@interface ATDeviceSettings : NSObject {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL isDeviceLinkClient; 
@property (nonatomic,copy,readonly) NSString * libraryIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (nonatomic,copy,readonly) NSString * serviceType; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (nonatomic,copy,readonly) NSArray * dataClassesNeedingSync; 
@property (nonatomic,readonly) double pairingSyncCompletionTime; 
@property (nonatomic,readonly) BOOL useNetServicesConnection; 
@property (nonatomic,readonly) BOOL fairPlayEnabled; 
@property (nonatomic,readonly) BOOL grappaEnabled; 
+(id)sharedInstance;
-(NSString *)serviceName;
-(id)init;
-(void)synchronize;
-(NSString *)serviceType;
-(NSString *)libraryIdentifier;
-(NSString *)interfaceName;
-(NSString *)serviceDomain;
-(id)endpointInfo;
-(id)hostInfoForLibrary:(id)arg1 ;
-(void)removeEndpointInfoForLibrary:(id)arg1 ;
-(void)setPairingSyncCompletionTime:(double)arg1 ;
-(void)setSyncPending:(BOOL)arg1 forDataClass:(id)arg2 ;
-(void)setHostInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)grappaEnabled;
-(BOOL)isSyncPendingForDataClass:(id)arg1 ;
-(id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(double)pairingSyncCompletionTime;
-(BOOL)isDeviceLinkClient;
-(BOOL)useNetServicesConnection;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(int)activeRestoreType;
-(NSArray *)dataClassesNeedingSync;
-(void)setActiveRestoreType:(int)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setEndpointInfo:(id)arg1 ;
-(id)_endpointInfoForLibrary:(id)arg1 ;
-(void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)fairPlayEnabled;
-(void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3 ;
-(id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
@end

