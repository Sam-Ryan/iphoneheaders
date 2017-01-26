/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBApplicationProcessDelegate.h>
#import <libobjc.A.dylib/FBApplicationProcessObserver.h>
#import <libobjc.A.dylib/FBUIProcessManagerInternal.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, FBApplicationProcess, BKSProcessAssertion, FBApplicationProcessWatchdogPolicy, NSMutableDictionary, NSString;

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBApplicationProcessObserver, FBUIProcessManagerInternal> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSHashTable* _observers;
	NSMapTable* _processesByPID;
	NSMapTable* _processesByBundleID;
	NSObject*<OS_dispatch_queue> _processesQueue;
	FBApplicationProcess* _systemAppProcess;
	BKSProcessAssertion* _systemAppProcessAssertion;
	FBApplicationProcess* _foregroundAppProcess;
	FBApplicationProcess* _preferredForegroundAppProcess;
	FBApplicationProcessWatchdogPolicy* _defaultWatchdogPolicy;
	NSMutableDictionary* _workspacesByClientIdentity;
	int _workspaceLocked;
	int _workspaceLockedToken;

}

@property (nonatomic,retain,readonly) FBApplicationProcess * systemApplicationProcess;              //@synthesize systemAppProcess=_systemAppProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)ping;
-(id)applicationProcessForPID:(int)arg1 ;
-(id)applicationProcessesForBundleIdentifier:(id)arg1 ;
-(void)_setPreferredForegroundApplicationProcess:(id)arg1 ;
-(FBApplicationProcess *)systemApplicationProcess;
-(id)allApplicationProcesses;
-(id)_systemServiceClientAdded:(id)arg1 ;
-(void)noteProcess:(id)arg1 didUpdateState:(id)arg2 ;
-(void)noteProcessDidExit:(id)arg1 ;
-(id)processForPID:(int)arg1 ;
-(id)_serviceClientAddedWithConnection:(id)arg1 ;
-(double)watchdogIntervalForProcess:(id)arg1 eventContext:(SCD_Struct_FB10)arg2 ;
-(void)applicationProcessWillLaunch:(id)arg1 ;
-(BOOL)_isWorkspaceLocked;
-(id)workspaceForSceneClientWithIdentity:(id)arg1 ;
-(id)_serviceClientAddedWithAuditToken:(SCD_Struct_FB12*)arg1 ;
-(void)_updateWorkspaceLockedState;
-(id)_processesQueue_processesForBundleIdentifier:(id)arg1 ;
-(id)processesForBundleIdentifier:(id)arg1 ;
-(id)_processesQueue_processForPID:(int)arg1 ;
-(void)_queue_evaluateForegroundEventRouting;
-(id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2 ;
-(void)_queue_addProcess:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_serviceClientAddedWithPID:(int)arg1 isUIApp:(BOOL)arg2 isExtension:(BOOL)arg3 bundleID:(id)arg4 ;
-(void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3 ;
-(void)_queue_notifyObserversUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateClientWorkspace:(id)arg1 ;
-(id)currentProcess;
-(id)allProcesses;
-(id)createApplicationProcessForBundleID:(id)arg1 ;
@end

