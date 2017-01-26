/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class HMDApplicationMonitor, NSObject, NSUUID, HMMessageDispatcher, BKSSystemService, LSApplicationWorkspace, NSMutableDictionary, NSString;

@interface HMDApplicationRegistry : NSObject <HMMessageReceiver, LSApplicationWorkspaceObserverProtocol> {

	HMDApplicationMonitor* _monitor;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid;
	HMMessageDispatcher* _messageDispatcher;
	BKSSystemService* _system;
	LSApplicationWorkspace* _appWorkspace;
	NSMutableDictionary* _applications;

}

@property (nonatomic,retain) HMDApplicationMonitor * monitor;                                 //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMMessageDispatcher * messageDispatcher;                  //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) BKSSystemService * system;                                       //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;                           //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applications;                              //@synthesize applications=_applications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(id)init;
-(NSUUID *)uuid;
-(HMDApplicationMonitor *)monitor;
-(BKSSystemService *)system;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setSystem:(BKSSystemService *)arg1 ;
-(NSMutableDictionary *)applications;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMessageDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMMessageDispatcher *)messageDispatcher;
-(id)initWithMessageDispatcher:(id)arg1 ;
-(void)stopMonitoringConnection:(id)arg1 ;
-(void)startMonitoringConnection:(id)arg1 ;
-(void)processTerminated:(id)arg1 ;
-(void)_startObservingAppUninstalls;
-(void)_stopObservingAppUninstalls;
-(LSApplicationWorkspace *)appWorkspace;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)setMonitor:(HMDApplicationMonitor *)arg1 ;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)setApplications:(NSMutableDictionary *)arg1 ;
@end

