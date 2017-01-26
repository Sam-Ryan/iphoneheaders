/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, BSSignal, NSArray;

@interface BKSApplicationStateMonitor : NSObject {

	NSObject*<OS_xpc_object> _connection;
	BSSignal* _invalidationSignal;
	/*^block*/id _handler;
	unsigned _interestedStates;
	NSArray* _interestedBundleIDs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _messageHandlingQueue;
	NSObject*<OS_xpc_object> _serverEndpoint;
	BOOL _denied;

}

@property (nonatomic,copy) id handler; 
@property (assign,nonatomic) unsigned interestedStates; 
@property (nonatomic,copy) NSArray * interestedBundleIDs; 
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_invalidate;
-(void)queue_reregister;
-(void)queue_connectionWasInvalidated;
-(id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned)arg3 ;
-(void)setInterestedBundleIDs:(NSArray *)arg1 ;
-(void)setInterestedStates:(unsigned)arg1 ;
-(void)queue_registerWithServer;
-(void)queue_setHandler:(/*^block*/id)arg1 ;
-(void)queue_setInterestedBundleIDs:(id)arg1 ;
-(void)queue_setInterestedStates:(unsigned)arg1 ;
-(void)updateInterestedBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(void)queue_updateInterestedStates;
-(void)queue_updateInterestedStates:(BOOL)arg1 ;
-(void)updateInterestedStates:(unsigned)arg1 ;
-(BOOL)isApplicationBeingDebugged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)_connection;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(void)_setEndpoint:(id)arg1 ;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(unsigned)interestedStates;
-(void)applicationInfoForApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateInterestedBundleIDs:(id)arg1 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
-(NSArray *)interestedBundleIDs;
-(void)applicationInfoForPID:(int)arg1 completion:(/*^block*/id)arg2 ;
@end

