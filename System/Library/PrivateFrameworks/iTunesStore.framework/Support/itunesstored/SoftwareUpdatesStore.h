/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, ISOperationQueue;

@interface SoftwareUpdatesStore : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isRunning;
	ISOperationQueue* _operationQueue;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)clearExpiredHistoryWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)hidePendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)migrateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)reloadWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeAllUpdatesBulletinsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)showPendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultStore;
-(void)noteUpdatesStateChanged;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/id)arg3 ;
-(void)reloadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_resetBackgroundTaskJobs;
-(void)postBulletinForInstalledUpdates;
-(void)verifyPendingUpdates;
-(void)_performBackgroundCheckForJob:(id)arg1 jobName:(id)arg2 ;
-(id)_nextCheckDateWithInterval:(double)arg1 ;
-(void)_setCheckInterval:(double)arg1 forDefaultsKey:(CFStringRef)arg2 ;
-(void)showPendingUpdatesBadge;
-(BOOL)_shouldPerformAutomaticUpdates;
-(void)_setSoftwareUpdateCheckInterval:(double)arg1 ;
-(void)_setSoftwareUpdateCheckIntervalCellular:(double)arg1 ;
-(void)_disableForcedBadge;
-(void)_reloadApplicationBadge;
-(void)_sendChangeNotification;
-(id)_updateTitleForStoreItemData:(id)arg1 ;
-(void)_reloadWithClient:(id)arg1 reason:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_performBackgroundSoftwareUpdateCheckIfNeeded;
-(BOOL)_shouldShowApplicationBadge;
-(void)hidePendingUpdatesBadge;
-(double)_checkIntervalWithDefault:(double)arg1 bagKeys:(id)arg2 defaultsKey:(CFStringRef)arg3 ;
-(void)_setBadgeWithCount:(long long)arg1 ;
-(void)_setLastSoftwareUpdateCheckDate:(id)arg1 ;
-(void)_performBackgroundSoftwareUpdateCheck;
-(double)_backgroundSoftwareUpdateCheckInterval;
-(double)_backgroundSoftwareUpdateCheckIntervalCellular;
-(void)_mergeAvailableUpdates:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_addUpdateCheckJobWithDate:(id)arg1 identifier:(id)arg2 allowsCellular:(BOOL)arg3 ;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(id)_operationQueue;
-(void)_addOperation:(id)arg1 ;
-(void)removeAllBulletins;
@end

