/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkStoreObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, SBWorkStore, AppLaunchStats, NSString;

@interface SBBackgroundMultitaskingManager : NSObject <SBWorkStoreObserver> {

	NSMutableDictionary* _appToBackgroundTasks;
	NSMutableDictionary* _backgroundFetchTaskValueToWatchdoggableCompletion;
	NSObject*<OS_dispatch_queue> _queue;
	SBWorkStore* _pendingWorkStore;
	AppLaunchStats* _appLaunchStats;
	double _watchdogTimeout;

}

@property (nonatomic,readonly) double watchdogTimeout;              //@synthesize watchdogTimeout=_watchdogTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldFakeAdoption;
+(id)sharedInstance;
-(void)application:(id)arg1 didSetMinimumFetchInterval:(double)arg2 ;
-(void)_appStateDidChange:(id)arg1 ;
-(void)workDidChange:(id)arg1 ;
-(void)handlePushNotificationFromApplication:(id)arg1 userInfo:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_opportunisticallyUpdateApplications:(id)arg1 trigger:(unsigned long long)arg2 ;
-(void)_performPendingWorkForBundleID:(id)arg1 ;
-(void)_invalidateBackgroundTasksForApplication:(id)arg1 ;
-(void)queue_appFinishedBackgroundUpdating:(id)arg1 sequenceNumber:(int)arg2 result:(unsigned long long)arg3 ;
-(void)_watchdogCompletionForBackgroundFetchTaskValue:(id)arg1 ;
-(void)queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:(id)arg1 ;
-(void)queue_invalidateBackgroundTasksForApplication:(id)arg1 ;
-(void)queue_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
-(void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
-(void)queue_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(/*^block*/id)arg4 ;
-(BOOL)_appIsBeingDebugged:(id)arg1 ;
-(void)_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(/*^block*/id)arg4 ;
-(BOOL)_launchAppForUpdating:(id)arg1 trigger:(unsigned long long)arg2 pushNotificationUserInfo:(id)arg3 withWatchdoggableCompletion:(/*^block*/id)arg4 ;
-(void)_appFinishedBackgroundUpdating:(id)arg1 sequenceNumber:(int)arg2 result:(unsigned long long)arg3 ;
-(id)init;
-(double)watchdogTimeout;
-(int)nextSequenceNumber;
@end

