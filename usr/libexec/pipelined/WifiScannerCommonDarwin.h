/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WifiScannerCommonDarwin : NSObject
+(id)scanSettingsToDictionary:(id)arg1 usingSupportedChannels:(/*^block*/id)arg2 logTo:(id)arg3 ;
+(id)networkResultsToScanResults:(id)arg1 ;
+(id)dictionaryToScanSettings:(id)arg1 ;
+(id)findChannel:(int)arg1 in:(id)arg2 ;
+(id)channelDictsForChannels:(id)arg1 withSupportedChannelDicts:(id)arg2 ;
+(id)scanResultWithAge:(id)arg1 bssid:(id)arg2 ssid:(id)arg3 channel:(id)arg4 rssi:(id)arg5 flags:(id)arg6 adHoc:(BOOL)arg7 captive:(BOOL)arg8 mode:(id)arg9 personalHotspot:(BOOL)arg10 ;
+(id)commonNetworkResultsToScanResults:(id)arg1 withConverter:(/*^block*/id)arg2 ;
@end

