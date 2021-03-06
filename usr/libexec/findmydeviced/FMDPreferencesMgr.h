/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMDPreferencesMgr : NSObject
+(void)setLostModeInfo:(id)arg1 ;
+(void)setFMIPWipeLostModeInfo:(id)arg1 ;
+(id)lastLaunchVersion;
+(void)setLastLaunchVersion:(id)arg1 ;
+(BOOL)importedAosnotifydData;
+(void)setTrackingInfo:(id)arg1 forType:(id)arg2 ;
+(void)setClientLostModeInfo:(id)arg1 ;
+(void)setWipeState:(long long)arg1 ;
+(void)setWipeInfo:(id)arg1 ;
+(void)setImportedAosnotifydData:(BOOL)arg1 ;
+(BOOL)simulateWipe;
+(BOOL)notifyOnShutdownSoon;
+(long long)wipeDelay;
+(void)removeNeedsLostModeExitAuth;
+(id)errorForUnregister;
+(id)errorForMarkAsMissing;
+(void)setNeedsLostModeExitAuth:(BOOL)arg1 ;
+(BOOL)overriddenTrackNotifyEnabled;
+(id)overriddenOSVersion;
+(id)overriddenBuildVersion;
+(BOOL)simulateLocateNotification;
+(BOOL)locateNotificationsEnabled;
+(id)hostportOverride;
+(id)protocolSchemeOverride;
+(id)deviceInfoOverrides;
+(id)locationDeviceInfoOverrides;
+(BOOL)dontUseSLC;
+(long long)wipeState;
+(id)wipeInfo;
+(id)trackingInfoForType:(id)arg1 ;
+(id)pushAccountsData;
+(void)setPushAccountsData:(id)arg1 ;
+(id)httpRequestHeaders;
+(BOOL)needsLostModeExitAuth;
+(id)lostModeInfo;
@end

