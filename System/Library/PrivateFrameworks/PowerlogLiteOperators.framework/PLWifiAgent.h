/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, NSString, NSDate;

@interface PLWifiAgent : PLAgent {

	PLCFNotificationOperatorComposition* _notificationWiFiChanged;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	WiFiDeviceClientRef _wifiAwdlDevice;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLEntryNotificationOperatorComposition* _sbcLevelChanged;
	PLEntryNotificationOperatorComposition* _deviceWake;
	unsigned long long _lastLoggedTimestamp;
	unsigned long long _locationScanDuration;
	unsigned long long _pipelineScanDuration;
	unsigned long long _autoJoinScanDuration;
	unsigned long long _setupScanDuration;
	unsigned long long _unknownScanDuration;
	NSString* _wifiChipset;
	NSString* _wifiManufacturer;
	unsigned long long _remainingAllowedRSSIEntryCount;
	double _wifi_segment_power_data;
	double _wifi_segment_power_idle;
	double _wifi_segment_power_location;
	double _wifi_segment_power_pipeline;
	NSDate* _wifi_segment_lastWrittenDate;
	double _wifi_segment_lastWrittenTimestamp;
	NSDate* _wifi_segment_date;
	double _wifi_segment_timestamp;

}

@property (readonly) PLCFNotificationOperatorComposition * notificationWiFiChanged;              //@synthesize notificationWiFiChanged=_notificationWiFiChanged - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef wifiManager;                                   //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiDevice;                                     //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiAwdlDevice;                                 //@synthesize wifiAwdlDevice=_wifiAwdlDevice - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;                 //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * sbcLevelChanged;                     //@synthesize sbcLevelChanged=_sbcLevelChanged - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * deviceWake;                          //@synthesize deviceWake=_deviceWake - In the implementation block
@property (assign) unsigned long long lastLoggedTimestamp;                                       //@synthesize lastLoggedTimestamp=_lastLoggedTimestamp - In the implementation block
@property (assign) unsigned long long locationScanDuration;                                      //@synthesize locationScanDuration=_locationScanDuration - In the implementation block
@property (assign) unsigned long long pipelineScanDuration;                                      //@synthesize pipelineScanDuration=_pipelineScanDuration - In the implementation block
@property (assign) unsigned long long autoJoinScanDuration;                                      //@synthesize autoJoinScanDuration=_autoJoinScanDuration - In the implementation block
@property (assign) unsigned long long setupScanDuration;                                         //@synthesize setupScanDuration=_setupScanDuration - In the implementation block
@property (assign) unsigned long long unknownScanDuration;                                       //@synthesize unknownScanDuration=_unknownScanDuration - In the implementation block
@property (readonly) NSString * wifiChipset;                                                     //@synthesize wifiChipset=_wifiChipset - In the implementation block
@property (readonly) NSString * wifiManufacturer;                                                //@synthesize wifiManufacturer=_wifiManufacturer - In the implementation block
@property (assign) unsigned long long remainingAllowedRSSIEntryCount;                            //@synthesize remainingAllowedRSSIEntryCount=_remainingAllowedRSSIEntryCount - In the implementation block
@property (assign) double wifi_segment_power_data;                                               //@synthesize wifi_segment_power_data=_wifi_segment_power_data - In the implementation block
@property (assign) double wifi_segment_power_idle;                                               //@synthesize wifi_segment_power_idle=_wifi_segment_power_idle - In the implementation block
@property (assign) double wifi_segment_power_location;                                           //@synthesize wifi_segment_power_location=_wifi_segment_power_location - In the implementation block
@property (assign) double wifi_segment_power_pipeline;                                           //@synthesize wifi_segment_power_pipeline=_wifi_segment_power_pipeline - In the implementation block
@property (retain) NSDate * wifi_segment_lastWrittenDate;                                        //@synthesize wifi_segment_lastWrittenDate=_wifi_segment_lastWrittenDate - In the implementation block
@property (assign) double wifi_segment_lastWrittenTimestamp;                                     //@synthesize wifi_segment_lastWrittenTimestamp=_wifi_segment_lastWrittenTimestamp - In the implementation block
@property (retain) NSDate * wifi_segment_date;                                                   //@synthesize wifi_segment_date=_wifi_segment_date - In the implementation block
@property (assign) double wifi_segment_timestamp;                                                //@synthesize wifi_segment_timestamp=_wifi_segment_timestamp - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionWake;
+(id)entryEventForwardDefinitionModuleInfo;
+(id)entryEventForwardDefinitionRSSI;
+(id)entryEventForwardDefinitionAvailability;
+(id)entryEventForwardDefinitionAWDLState;
+(id)entryEventBackwardDefinitionCumulativeBasic;
+(id)entryEventBackwardDefinitionDiffBasic;
+(id)entryEventBackwardDefinitionUserScan;
-(id)init;
-(void)log;
-(WiFiManagerClientRef)wifiManager;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(BOOL)isWowEnabled;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)findWifiDevice;
-(WiFiDeviceClientRef)wifiAwdlDevice;
-(WiFiDeviceClientRef)wifiDevice;
-(void)logEventForwardModuleInfo;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setWiFiAWDLDevice:(WiFiDeviceClientRef)arg1 ;
-(void)writeModeledPower;
-(void)setRemainingAllowedRSSIEntryCount:(unsigned long long)arg1 ;
-(void)logEventPointWake;
-(void)logonAPSleep;
-(void)setDeviceWake:(PLEntryNotificationOperatorComposition *)arg1 ;
-(BOOL)hasWiFi;
-(BOOL)isWowSupported;
-(void)logEventBackwardWifiProperties:(BOOL)arg1 ;
-(void)logEventBackwardUserScanDuration;
-(BOOL)isWiFiPowered;
-(void)logEventPointWakeDataFrame:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3 ;
-(void)logEventPointWakePNO:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3 ;
-(void)logEventPointWakeLink:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3 ;
-(id)decodeWifiEventLinkReason:(unsigned)arg1 ;
-(unsigned long long)remainingAllowedRSSIEntryCount;
-(unsigned long long)getCurrentChannelWidth:(WiFiNetworkRef)arg1 ;
-(void)logEventBackwardWifiProperties:(id)arg1 withNetworkProperties:(id)arg2 shallModelPower:(BOOL)arg3 ;
-(void)modelWiFiPower:(id)arg1 ;
-(void)modelWiFiSegmentPower:(id)arg1 withDataPower:(double)arg2 withIdlePower:(double)arg3 withLocationPower:(double)arg4 withPipelinePower:(double)arg5 withTotalDuration:(double)arg6 ;
-(id)wifiChipsetQuery;
-(id)wifiManufacturerQuery;
-(NSString *)wifiChipset;
-(NSString *)wifiManufacturer;
-(void)logFromWiFiNoAvailableCallback:(id)arg1 withAvailability:(BOOL)arg2 ;
-(void)logEventForwardAvailability:(id)arg1 ;
-(void)logEventForwardRSSI:(id)arg1 ;
-(void)logEventForwardAWDLState:(id)arg1 ;
-(void)logEventBackwardCumulativeProperties;
-(void)logEventBackwardDiffProperties;
-(void)updateEventBackwardUserScanDuration:(id)arg1 ;
-(PLCFNotificationOperatorComposition *)notificationWiFiChanged;
-(void)setWifiAwdlDevice:(WiFiDeviceClientRef)arg1 ;
-(PLEntryNotificationOperatorComposition *)sbcLevelChanged;
-(void)setSbcLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)deviceWake;
-(unsigned long long)lastLoggedTimestamp;
-(void)setLastLoggedTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)locationScanDuration;
-(void)setLocationScanDuration:(unsigned long long)arg1 ;
-(unsigned long long)pipelineScanDuration;
-(void)setPipelineScanDuration:(unsigned long long)arg1 ;
-(unsigned long long)autoJoinScanDuration;
-(void)setAutoJoinScanDuration:(unsigned long long)arg1 ;
-(unsigned long long)setupScanDuration;
-(void)setSetupScanDuration:(unsigned long long)arg1 ;
-(unsigned long long)unknownScanDuration;
-(void)setUnknownScanDuration:(unsigned long long)arg1 ;
-(double)wifi_segment_power_data;
-(void)setWifi_segment_power_data:(double)arg1 ;
-(double)wifi_segment_power_idle;
-(void)setWifi_segment_power_idle:(double)arg1 ;
-(double)wifi_segment_power_location;
-(void)setWifi_segment_power_location:(double)arg1 ;
-(double)wifi_segment_power_pipeline;
-(void)setWifi_segment_power_pipeline:(double)arg1 ;
-(NSDate *)wifi_segment_lastWrittenDate;
-(void)setWifi_segment_lastWrittenDate:(NSDate *)arg1 ;
-(double)wifi_segment_lastWrittenTimestamp;
-(void)setWifi_segment_lastWrittenTimestamp:(double)arg1 ;
-(NSDate *)wifi_segment_date;
-(void)setWifi_segment_date:(NSDate *)arg1 ;
-(double)wifi_segment_timestamp;
-(void)setWifi_segment_timestamp:(double)arg1 ;
@end

