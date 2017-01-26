/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/SSDownloadQueueObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableSet;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isCellularRestricted;
	double _lastNetworkTypeChangeTime;
	unsigned _networkReachabilityFlags;
	long long _networkUsageCount;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableSet* _observedDownloadQueues;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	NSString* _registrationStatus;
	CTServerConnectionRef _telephonyServer;

}

@property (assign) long long networkType; 
@property (readonly) unsigned networkReachabilityFlags; 
@property (readonly) double lastNetworkTypeChangeTime; 
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
@property (readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch; 
@property (readonly) NSString * connectionTypeHeader; 
@property (getter=isWiFiEnabled,readonly) BOOL wifiEnabled; 
@property (readonly) NSString * dataStatusIndicator; 
@property (readonly) NSString * mobileSubscriberCountryCode; 
@property (readonly) NSString * mobileSubscriberNetworkCode; 
@property (readonly) NSString * modemRegistrationStatus; 
@property (readonly) NSString * operatorName; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * providerName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)set3GEnabled:(BOOL)arg1 ;
+(void)setAirplaneModeEnabled:(BOOL)arg1 ;
+(void)setWiFiEnabled:(BOOL)arg1 ;
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2 ;
-(void)downloadQueueNetworkUsageChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)phoneNumber;
-(NSString *)providerName;
-(double)lastNetworkTypeChangeTime;
-(unsigned)_currentNetworkReachabilityFlags;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(BOOL)_ntsIsUsingNetwork;
-(void)_postUsageChangedToValue:(BOOL)arg1 ;
-(id)copyValueForCarrierBundleKey:(id)arg1 ;
-(id)_dataStatusIndicator;
-(void)_reloadNetworkType;
-(long long)_setNetworkType:(long long)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(void)beginObservingDownloadQueue:(id)arg1 ;
-(void)endObservingDownloadQueue:(id)arg1 ;
-(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
-(NSString *)dataStatusIndicator;
-(BOOL)isCellularDataEnabledForBundleIdentifier:(id)arg1 ;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(NSString *)modemRegistrationStatus;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(void)_reloadCellularRestriction;
-(unsigned)networkReachabilityFlags;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isUsingNetwork;
-(void)setNetworkType:(long long)arg1 ;
-(BOOL)isWiFiEnabled;
-(void)reloadNetworkType;
-(NSString *)connectionTypeHeader;
-(NSString *)operatorName;
-(long long)networkType;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

