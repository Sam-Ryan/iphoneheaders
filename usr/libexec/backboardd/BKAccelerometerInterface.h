/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKEventClientDelegate.h>
#import <backboardd/BKOrientationManagerObserver.h>

@class NSLock, NSMutableSet, BKAccelerometerClient, BKOrientationManager, NSString;

@interface BKAccelerometerInterface : NSObject <BKEventClientDelegate, BKOrientationManagerObserver> {

	NSLock* _lock;
	NSMutableSet* _lock_accelerometerClients;
	NSMutableSet* _lock_cachedClients;
	BKAccelerometerClient* _lock_systemAppOrientationClient;
	BKOrientationManager* _lock_orientationManager;
	double _lock_samplingInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(BOOL)arg2 auditToken:(const SCD_Struct_BK5*)arg3 ;
-(void)bksAccelerometerClientRequestedAccelerometerEvents:(id)arg1 updateInterval:(double)arg2 xThreshold:(float)arg3 yThreshold:(float)arg4 zThreshold:(float)arg5 auditToken:(const SCD_Struct_BK5*)arg6 ;
-(void)bksAccelerometerClientRequestedOrientationEvents:(id)arg1 enabled:(BOOL)arg2 passiveEvents:(BOOL)arg3 auditToken:(const SCD_Struct_BK5*)arg4 ;
-(void)clientDied:(id)arg1 ;
-(void)orientationManager:(id)arg1 deviceOrientationMayHaveChanged:(long long)arg2 isDeviceOrientationLocked:(BOOL)arg3 ;
-(void)_handleAccelerometerRequestForPort:(id)arg1 auditToken:(const SCD_Struct_BK5*)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)_lock_systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(BOOL)arg2 auditToken:(const SCD_Struct_BK5*)arg3 ;
-(void)_lock_clearSystemAppOrientationClient;
-(id)_lock_existingClientForPort:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)_updateSettings;
@end

