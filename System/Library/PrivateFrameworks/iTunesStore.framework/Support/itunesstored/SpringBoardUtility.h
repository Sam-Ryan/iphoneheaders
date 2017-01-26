/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class BKSApplicationStateMonitor, NSObject, NSDictionary, NSCountedSet, NSMutableArray, SSXPCConnection, NSMutableDictionary, NSString;

@interface SpringBoardUtility : NSObject {

	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _enabledRemoteNotificationTypes;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	long long _observeAllIdentifiersCount;
	NSCountedSet* _observedApplicationIdentifiers;
	NSMutableArray* _pendingAlerts;
	SSXPCConnection* _pluginConnection;
	NSObject*<OS_dispatch_source> _pluginConnectionTimeout;
	NSMutableArray* _pluginDeferredBlocks;
	NSObject*<OS_dispatch_queue> _springBoardQueue;
	NSMutableDictionary* _stateCache;

}

@property (readonly) NSString * frontmostClientIdentifier; 
@property (getter=isScreenLocked,readonly) BOOL screenLocked; 
+(void)observeXPCServer:(id)arg1 ;
+(BOOL)_hasEntitlements:(id)arg1 ;
+(void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2 ;
+(void)dequeueAlertWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)registerPluginConnectionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)testBadgingWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)testLockscreenAccountSheetWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)testPluginAlertWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)restartApplicationWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)sharedInstance;
-(void)wakeAppUsingRequest:(id)arg1 ;
-(void)resetEnabledRemoteNotificationTypes;
-(void)activateAlertWithDescription:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2 ;
-(void)beginGeneratingStateChangeNotificationsForIdentifiers:(id)arg1 ;
-(void)endGeneratingStateChangeNotificationsForIdentifiers:(id)arg1 ;
-(unsigned)applicationStateForIdentifier:(id)arg1 ;
-(void)_setApplicationState:(unsigned)arg1 forClientID:(id)arg2 ;
-(void)_setApplicationStatesWithDictionary:(id)arg1 ;
-(void)_dequeueAlertWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_registerPluginConnectionWithMessage:(id)arg1 ;
-(void)sendPluginMessage:(id)arg1 ;
-(void)_requestPluginConnectionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_disconnectPluginConnection:(id)arg1 ;
-(void)_fireDeferredPluginBlocksWithConnection:(id)arg1 ;
-(void)_timeoutPluginConnection;
-(void)beginGeneratingStateChangeNotificationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)endGeneratingStateChangeNotifications;
-(NSString *)frontmostClientIdentifier;
-(void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1 ;
-(void)suspendFrontApplication;
-(void)sendPluginMessage:(id)arg1 withReplyBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isScreenLocked;
-(id)_applicationStateMonitor;
@end
