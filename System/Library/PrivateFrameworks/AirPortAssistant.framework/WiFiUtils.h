/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AirPortAssistant/AirPortAssistant-Structs.h>
@class NSDictionary, NSMutableDictionary, NSObject, NSTimer;

@interface WiFiUtils : NSObject {

	NSDictionary* _unmergedScanInfoDict;
	NSMutableDictionary* _missingBSSIDCounts;
	WiFiShimContextRef _wifiShim;
	NSObject*<OS_dispatch_semaphore> _wifiBusy;
	BOOL _scanInProgress;
	BOOL _joinInProgress;
	BOOL _scanningActive;
	BOOL _scanOnlyWhenAppActive;
	NSTimer* _scanTimer;
	int _periodicScanType;
	double _periodicScanInterval;

}

@property (nonatomic,retain) NSTimer * _scanTimer;                     //@synthesize scanTimer=_scanTimer - In the implementation block
@property (assign,nonatomic) int periodicScanType;                     //@synthesize periodicScanType=_periodicScanType - In the implementation block
@property (assign,nonatomic) double periodicScanInterval;              //@synthesize periodicScanInterval=_periodicScanInterval - In the implementation block
+(id)sharedInstance;
+(BOOL)scanInfoIsSTAOnly:(id)arg1 ;
+(id)sharedInstanceRef;
+(unsigned)scanInfoAppleProductID:(id)arg1 ;
+(int)scanInfoDeviceKind:(id)arg1 ;
+(id)scanInfoFriendlyName:(id)arg1 ;
+(id)getNetworkPassword:(id)arg1 ;
+(BOOL)networkIsSecure:(id)arg1 secMode:(int*)arg2 isEnterprise:(BOOL*)arg3 ;
+(id)scanInfoNetworkName:(id)arg1 ;
+(BOOL)scanInfoIsUnconfigured:(id)arg1 ;
+(BOOL)scanInfoSupportsMFIConfigV1:(id)arg1 ;
+(BOOL)scanInfoSupportsACPConfigV1:(id)arg1 ;
+(BOOL)scanInfoSupportsSpruce:(id)arg1 ;
+(id)scanInfoBSSIDStr:(id)arg1 ;
+(BOOL)scanInfoIsMFIAirPlayDevice:(id)arg1 ;
+(id)scanInfoModelName:(id)arg1 ;
+(id)scanInfoManufacturerName:(id)arg1 ;
+(void)sharedInstanceRelease;
+(BOOL)scanInfoIs5GHz:(id)arg1 ;
+(BOOL)scanInfoIsInSoftReset:(id)arg1 ;
+(id)scanInfoStringFromAppleDeviceIE:(id)arg1 forType:(long long)arg2 ;
+(BOOL)scanInfoIsAirPlayDevice:(id)arg1 ;
+(BOOL)scanInfoTestBitFromAppleDeviceIE:(id)arg1 forType:(long long)arg2 ;
+(BOOL)scanInfoIsAudioDevice:(id)arg1 ;
+(BOOL)network:(id)arg1 shouldBeIgnored:(int)arg2 ;
+(BOOL)scanInfoIsIBSS:(id)arg1 ;
+(BOOL)scanInfoIsGuestNetwork:(id)arg1 ;
+(BOOL)scanInfoIsDWDSCapable:(id)arg1 isDWDSEnabled:(BOOL*)arg2 ;
+(id)scanInfoAirPortUniqueIdentifier:(id)arg1 ;
+(unsigned)scanInfoSubAppleProductID:(id)arg1 ;
+(BOOL)scanInfoIsiAPOverWiFiDevice:(id)arg1 ;
+(BOOL)scanInfoCanJoin2_4GHzNetworks:(id)arg1 ;
+(BOOL)scanInfoCanJoin5GHzNetworks:(id)arg1 ;
+(BOOL)networkIsApple:(id)arg1 productID:(unsigned*)arg2 ;
+(id)copyFilteredNetworks:(id)arg1 ignoreOptions:(int)arg2 ;
+(int)barsForRSSI:(int)arg1 ;
+(BOOL)stringArray:(id)arg1 containsBSSID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(int)openWiFi;
-(BOOL)airPortIsOn;
-(int)asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(BOOL)arg3 maxAge:(unsigned long long)arg4 ;
-(int)setAutoJoinState:(BOOL)arg1 ;
-(id)unmergedScanInfoArray;
-(void)cancelAsync;
-(id)getPreferredNetworks:(BOOL)arg1 ;
-(BOOL)isCurrentlyAssociatedToAnInfrastructureNetwork:(BOOL*)arg1 ;
-(id)getCurrentAssociationInfo;
-(BOOL)getAutoJoinState;
-(int)disassociateSync;
-(int)clearScanCacheSync;
-(int)joinNetworkWithScanInfoAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(BOOL)isScanningActive;
-(void)setPeriodicScanType:(int)arg1 ;
-(void)setPeriodicScanInterval:(double)arg1 ;
-(void)activateScanning:(BOOL)arg1 ;
-(id)mergedScanInfoArray;
-(id)getNetworkPasswordForNetworkNamed:(id)arg1 ;
-(id)scanInfoForMACAddress:(id)arg1 ;
-(id)scanInfoForName:(id)arg1 wifiType:(int)arg2 ;
-(int)joinNetworkWithNameAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(NSTimer *)_scanTimer;
-(void)set_scanTimer:(NSTimer *)arg1 ;
-(void)setUnmergedScanInfoDict:(id)arg1 ;
-(void)scanTimerCallback:(id)arg1 ;
-(int)closeWiFi;
-(void)triggerScan;
-(BOOL)isScanInProgress;
-(void)setScanInProgress:(BOOL)arg1 ;
-(BOOL)isJoinInProgress;
-(void)setJoinInProgress:(BOOL)arg1 ;
-(id)unmergedScanInfoDict;
-(void)joinNetworkWithScanInfoThread:(id)arg1 ;
-(void)joinNetworkWithNameThread:(id)arg1 ;
-(id)getCurrentAssociationScanInfo;
-(void)asyncWiFiScanThread:(id)arg1 ;
-(int)_asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(BOOL)arg3 maxAge:(unsigned long long)arg4 isPeriodic:(BOOL)arg5 ;
-(int)periodicScanType;
-(double)periodicScanInterval;
-(int)joinNetworkWithScanInfoSync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(void)mergeScanResults:(id)arg1 ;
-(void)setScanOnlyWhenAppActive:(BOOL)arg1 ;
-(id)unconfiguredScanInfosOfType:(int)arg1 ;
-(id)resetScanInfosOfType:(int)arg1 ;
-(id)getCurrentAssociationInfoOrNil;
-(id)getIfList;
-(id)getLinkStatus;
@end

