/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlsessiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nsurlsessiond/UMUserSyncStakeholder.h>

@class NSMutableSet, NSLock, UMUserSyncTask, NSMutableDictionary, NSString;

@interface NDUserSyncStakeholder : NSObject <UMUserSyncStakeholder> {

	BOOL _tasksInitialized;
	BOOL _tasksEnqueued;
	NSMutableSet* _activeTasks;
	NSLock* _activeTasksLock;
	UMUserSyncTask* _monitorTask;
	NSMutableSet* _monitorTaskSet;
	NSLock* _monitorTaskLock;
	NSMutableDictionary* _bridgeTasks;

}

@property (retain) NSMutableSet * activeTasks;                      //@synthesize activeTasks=_activeTasks - In the implementation block
@property (nonatomic,retain) NSLock * activeTasksLock;              //@synthesize activeTasksLock=_activeTasksLock - In the implementation block
@property (retain) UMUserSyncTask * monitorTask;                    //@synthesize monitorTask=_monitorTask - In the implementation block
@property (retain) NSMutableSet * monitorTaskSet;                   //@synthesize monitorTaskSet=_monitorTaskSet - In the implementation block
@property (nonatomic,retain) NSLock * monitorTaskLock;              //@synthesize monitorTaskLock=_monitorTaskLock - In the implementation block
@property (assign) BOOL tasksInitialized;                           //@synthesize tasksInitialized=_tasksInitialized - In the implementation block
@property (assign) BOOL tasksEnqueued;                              //@synthesize tasksEnqueued=_tasksEnqueued - In the implementation block
@property (retain) NSMutableDictionary * bridgeTasks;               //@synthesize bridgeTasks=_bridgeTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)EDUMode;
+(id)sharedStakeholder;
-(id)startUMTask:(id)arg1 taskInfo:(id)arg2 ;
-(void)startBridgingUMTask:(id)arg1 ;
-(void)endBridgingUMTask:(id)arg1 ;
-(void)endUMTask:(id)arg1 ;
-(void)restoredTaskEnqueued:(id)arg1 ;
-(void)restoredTaskActive:(id)arg1 ;
-(void)tasksHaveBeenEnqueued;
-(void)setActiveTasks:(NSMutableSet *)arg1 ;
-(NSLock *)activeTasksLock;
-(void)setActiveTasksLock:(NSLock *)arg1 ;
-(UMUserSyncTask *)monitorTask;
-(void)setMonitorTask:(UMUserSyncTask *)arg1 ;
-(NSMutableSet *)monitorTaskSet;
-(void)setMonitorTaskSet:(NSMutableSet *)arg1 ;
-(NSLock *)monitorTaskLock;
-(void)setMonitorTaskLock:(NSLock *)arg1 ;
-(BOOL)tasksInitialized;
-(void)setTasksInitialized:(BOOL)arg1 ;
-(BOOL)tasksEnqueued;
-(void)setTasksEnqueued:(BOOL)arg1 ;
-(NSMutableDictionary *)bridgeTasks;
-(void)setBridgeTasks:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)willSwitchToUser:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg1 ;
-(NSMutableSet *)activeTasks;
-(void)willSwitchUser;
-(void)uploadContent;
@end

