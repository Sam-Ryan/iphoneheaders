/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCAppListMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSString;

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {

	NSMutableDictionary* _cloudDocsContainersByAppID;
	NSMutableDictionary* _appIDsByContainerID;
	NSMutableSet* _observers;
	br_pacer_tRef _refetchPacer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _fetchInstalledAppsQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudDocsAppsMonitor;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_start;
-(void)dumpToContext:(id)arg1 ;
-(id)allApplicationIdentifiers;
-(void)forceRefetchAppList;
-(id)containerIDsForApplicationIdentifier:(id)arg1 ;
-(id)applicationIdentifiersForContainerID:(id)arg1 ;
-(void)_refetchApps;
-(BOOL)isApplicationInstalledForContainerID:(id)arg1 ;
@end

