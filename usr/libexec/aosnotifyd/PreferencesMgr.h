/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PreferencesMgr : NSObject
+(BOOL)hasShownNoiCloudAlert;
+(void)setHasShownNoiCloudAlert:(BOOL)arg1 ;
+(BOOL)bccOnFenceTrigger;
+(id)fenceVersion;
+(void)deleteMigrationCheckHash;
+(id)migrationCheckHash;
+(void)setMigrationCheckHash:(id)arg1 ;
+(id)hostportOverride;
+(id)protocolSchemeOverride;
+(id)deviceInfoOverrides;
+(id)locationDeviceInfoOverrides;
+(void)setFenceVersion:(id)arg1 ;
+(id)overriddenOSVersion;
+(id)overriddenBuildVersion;
+(BOOL)dontUseSLC;
+(id)errorForUnregister;
+(id)httpRequestHeaders;
@end
