/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
@required
-(oneway void)crashDaemon;
-(oneway void)exit5XXGracePeriod;
-(oneway void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1;
-(oneway void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
-(oneway void)dumpStateWithCompletion:(/*^block*/id)arg1;
-(oneway void)setSessionClientBundleId:(id)arg1;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1;

@end

