/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:01 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject <IMSystemMonitorListener> {

	IMTimer* _getDependantHeartbeatTimer;
	NSMutableDictionary* _usersToHeartbeatDatesMap;
	BOOL _isSetup;

}
+(id)sharedInstance;
-(void)accountsChanged;
-(BOOL)_fetchExpiryDatesIfNecessary;
-(void)_cleanupKeychain;
-(BOOL)_scheduleDependantRegistrations;
-(void)_scheduleRescueHeartBeat;
-(id)_getNextExpirationDate;
-(void)_updateDependantRegistrations;
-(void)_heartBeat;
-(void)updateExpiry:(double)arg1 forUser:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)printInfo;
-(void)invalidateTimer;
-(void)systemDidWake;
-(void)setup;
@end
