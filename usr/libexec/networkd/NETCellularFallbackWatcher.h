/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/networkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <networkd/networkd-Structs.h>
#import <networkd/NETInterfaceManagerDelegate.h>
#import <networkd/NETQualityManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSMutableArray, NSObject, NWInterface, NSString;

@interface NETCellularFallbackWatcher : NSObject <NETInterfaceManagerDelegate, NETQualityManagerDelegate> {

	BOOL _hasFallbackActivityForRunningApps;
	BOOL _shouldFallbackInMetricsTesting;
	int _totalFallbackConnectionCount;
	int _notifyToken;
	int _metricsTestingNotifyToken;
	int _wifiPreferencesChangePending;
	int _primaryInterfaceChangePending;
	NSMutableDictionary* _bundleIDToFallbackConnectionCountMap;
	NSMutableArray* _runningBundleIDs;
	NSObject*<OS_dispatch_source> _notifyAfterTimer;
	SCPreferencesRef _wifiPreferencesMonitor;
	NWInterface* _primaryInterface;
	NSMutableArray* _fallbackWatchers;

}

@property (retain) NSMutableDictionary * bundleIDToFallbackConnectionCountMap;              //@synthesize bundleIDToFallbackConnectionCountMap=_bundleIDToFallbackConnectionCountMap - In the implementation block
@property (retain) NSMutableArray * runningBundleIDs;                                       //@synthesize runningBundleIDs=_runningBundleIDs - In the implementation block
@property (assign) int totalFallbackConnectionCount;                                        //@synthesize totalFallbackConnectionCount=_totalFallbackConnectionCount - In the implementation block
@property (assign) BOOL hasFallbackActivityForRunningApps;                                  //@synthesize hasFallbackActivityForRunningApps=_hasFallbackActivityForRunningApps - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> notifyAfterTimer;                          //@synthesize notifyAfterTimer=_notifyAfterTimer - In the implementation block
@property (assign) int notifyToken;                                                         //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign) int metricsTestingNotifyToken;                                           //@synthesize metricsTestingNotifyToken=_metricsTestingNotifyToken - In the implementation block
@property (assign) BOOL shouldFallbackInMetricsTesting;                                     //@synthesize shouldFallbackInMetricsTesting=_shouldFallbackInMetricsTesting - In the implementation block
@property (assign) SCPreferencesRef wifiPreferencesMonitor;                                 //@synthesize wifiPreferencesMonitor=_wifiPreferencesMonitor - In the implementation block
@property (assign) int wifiPreferencesChangePending;                                        //@synthesize wifiPreferencesChangePending=_wifiPreferencesChangePending - In the implementation block
@property (retain) NWInterface * primaryInterface;                                          //@synthesize primaryInterface=_primaryInterface - In the implementation block
@property (assign) int primaryInterfaceChangePending;                                       //@synthesize primaryInterfaceChangePending=_primaryInterfaceChangePending - In the implementation block
@property (retain) NSMutableArray * fallbackWatchers;                                       //@synthesize fallbackWatchers=_fallbackWatchers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWatcher;
-(void)handleInterfaceChangeArray:(id)arg1 ;
-(void)handleApplicationStateChangeForBundleID:(id)arg1 state:(unsigned)arg2 ;
-(void)performSelfCheck;
-(void)notifyOfInterestingFallbackNetworkEvent:(int)arg1 ;
-(NWInterface *)primaryInterface;
-(void)postCellularFallbackActivityNotification;
-(void)handleCellularFallbackActivityForRunningAppsChange:(BOOL)arg1 ;
-(void)notifyIfDeviceShouldUseCellularFallbackInMetricsTesting;
-(void)handleWiFiAlternateNetworkAdviceLevelChanged:(id)arg1 newAdviceLevel:(unsigned)arg2 ;
-(void)handleWiFiPreferencesChanged:(BOOL)arg1 ;
-(void)handleFallbackConnectionConnectedForBundleID:(id)arg1 originatingProcessName:(id)arg2 ;
-(void)handleFallbackConnectionCancelledForBundleID:(id)arg1 originatingProcessName:(id)arg2 ;
-(void)registerFallbackWatcherHandler:(id)arg1 ;
-(void)unregisterFallbackWatcherHandler:(id)arg1 ;
-(NSMutableDictionary *)bundleIDToFallbackConnectionCountMap;
-(void)setBundleIDToFallbackConnectionCountMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)runningBundleIDs;
-(void)setRunningBundleIDs:(NSMutableArray *)arg1 ;
-(int)totalFallbackConnectionCount;
-(void)setTotalFallbackConnectionCount:(int)arg1 ;
-(BOOL)hasFallbackActivityForRunningApps;
-(void)setHasFallbackActivityForRunningApps:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)notifyAfterTimer;
-(void)setNotifyAfterTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)metricsTestingNotifyToken;
-(void)setMetricsTestingNotifyToken:(int)arg1 ;
-(BOOL)shouldFallbackInMetricsTesting;
-(void)setShouldFallbackInMetricsTesting:(BOOL)arg1 ;
-(SCPreferencesRef)wifiPreferencesMonitor;
-(void)setWifiPreferencesMonitor:(SCPreferencesRef)arg1 ;
-(int)wifiPreferencesChangePending;
-(void)setWifiPreferencesChangePending:(int)arg1 ;
-(void)setPrimaryInterface:(NWInterface *)arg1 ;
-(int)primaryInterfaceChangePending;
-(void)setPrimaryInterfaceChangePending:(int)arg1 ;
-(NSMutableArray *)fallbackWatchers;
-(void)setFallbackWatchers:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)privateDescription;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
@end

