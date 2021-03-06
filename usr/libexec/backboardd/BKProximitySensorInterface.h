/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKEventClientDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSString;

@interface BKProximitySensorInterface : NSObject <BKEventClientDelegate> {

	int _lockedMode;
	int _currentMode;
	int _lastSetMode;
	NSMutableDictionary* _pidToClients;
	NSObject*<OS_dispatch_queue> _clientQueue;
	BOOL _pocketTouchesExpected;
	NSObject*<OS_dispatch_source> _estimatedProxShutoffTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> estimatedProxShutoffTimer;              //@synthesize estimatedProxShutoffTimer=_estimatedProxShutoffTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)clientRequestedProximityMode:(int)arg1 processID:(int)arg2 clientPort:(unsigned)arg3 ;
-(unsigned long long)requestEstimatedProximityEventsWithTimeout:(double)arg1 ;
-(BOOL)isDetectionActive;
-(void)clientDied:(id)arg1 ;
-(int)requestedMode;
-(int)_queue_currentMode;
-(id)_existingClientForPID:(int)arg1 ;
-(void)_queue_cancelEstimatedProximityEventShutoffTimerAndResetMode:(BOOL)arg1 ;
-(void)_queue_updateProximityDetectionMode;
-(BOOL)_queue_removeClient:(id)arg1 ;
-(void)_updateProximityDetectionMode;
-(void)_updateClientPID:(int)arg1 clientPort:(id)arg2 withDetectionMode:(int)arg3 ;
-(void)_queue_cancelEstimatedProximityEventShutoffTimer;
-(unsigned long long)_queue_requestEstimatedProximityEventsWithTimeout:(double)arg1 ;
-(void)requestProximityMode:(int)arg1 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(void)disableProximityDetection;
-(void)enableProximityDetectionWithMode:(int)arg1 ;
-(NSObject*<OS_dispatch_source>)estimatedProxShutoffTimer;
-(void)setEstimatedProxShutoffTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
-(id)init;
-(int)currentMode;
-(BOOL)_addClient:(id)arg1 ;
-(BOOL)_removeClient:(id)arg1 ;
@end

