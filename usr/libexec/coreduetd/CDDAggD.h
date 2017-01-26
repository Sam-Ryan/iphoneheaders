/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <coreduetd/coreduetd-Structs.h>
@class CDD, NSObject, NSMutableDictionary;

@interface CDDAggD : NSObject {

	CDD* cdd;
	NSObject*<OS_dispatch_queue> aggDQ;
	NSObject*<OS_dispatch_source> aggDTimer;
	IOReportSubscriptionCFRef iorSubscription;
	CFDictionaryRef iorSubbedChannels;
	NSMutableDictionary* aggdClientBGDataUsage;
	CFDictionaryRef lastReading;
	NSMutableDictionary* ABLERecords;
	long long _totalBGDownloads;
	long long _totalBGDownloadData;
	long long _totalBGDownloadEnergy;
	long long _totalNonDiscData;
	long long _totalNonDiscEnergy;

}

@property (assign) long long totalBGDownloads;                   //@synthesize totalBGDownloads=_totalBGDownloads - In the implementation block
@property (assign) long long totalBGDownloadData;                //@synthesize totalBGDownloadData=_totalBGDownloadData - In the implementation block
@property (assign) long long totalBGDownloadEnergy;              //@synthesize totalBGDownloadEnergy=_totalBGDownloadEnergy - In the implementation block
@property (assign) long long totalNonDiscData;                   //@synthesize totalNonDiscData=_totalNonDiscData - In the implementation block
@property (assign) long long totalNonDiscEnergy;                 //@synthesize totalNonDiscEnergy=_totalNonDiscEnergy - In the implementation block
@property (nonatomic,retain) CDD * cdd; 
-(CDD *)cdd;
-(id)initWithCDDinstance:(id)arg1 ;
-(void)dumpLight;
-(void)setCdd:(CDD *)arg1 ;
-(long long)totalNonDiscData;
-(void)setTotalNonDiscData:(long long)arg1 ;
-(long long)totalNonDiscEnergy;
-(void)setTotalNonDiscEnergy:(long long)arg1 ;
-(void)setupIOReporting;
-(void)periodicTask;
-(void)setupCPUReporting;
-(void)reportDailyStats;
-(void)reportBackgroundStats;
-(void)logStatisticForClient:(unsigned long long)arg1 header:(id)arg2 conditionalHeader:(id)arg3 value:(double)arg4 ;
-(void)logTotalStatistic:(id)arg1 value:(double)arg2 ;
-(void)updateCountsOnStats:(id)arg1 isWatchkit:(BOOL)arg2 count:(id)arg3 priority:(long long)arg4 allowed:(BOOL)arg5 proper:(BOOL)arg6 ;
-(void)reportULVO;
-(void)reportEnergyConsumption:(long long)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 clientId:(unsigned long long)arg3 discretionary:(BOOL)arg4 ;
-(void)reportDataConsumption:(long long)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 clientId:(unsigned long long)arg3 discretionary:(BOOL)arg4 ;
-(void)reportBatteryStatus:(CFDictionaryRef)arg1 ;
-(void)reportABLEAdmissionResultForClient:(unsigned long long)arg1 forDevice:(id)arg2 attributeId:(unsigned long long)arg3 priority:(long long)arg4 value:(id)arg5 isWatchkit:(BOOL)arg6 result:(BOOL)arg7 ;
-(void)reportForegroundOnAttribute:(unsigned long long)arg1 forDevice:(id)arg2 value:(id)arg3 ;
-(void)reportChargerConnectedOnDevice:(id)arg1 ;
-(void)reportSystemDataExchange;
-(void)reportDenialByExclusiveApp:(id)arg1 ;
-(long long)totalBGDownloads;
-(void)setTotalBGDownloads:(long long)arg1 ;
-(long long)totalBGDownloadData;
-(void)setTotalBGDownloadData:(long long)arg1 ;
-(long long)totalBGDownloadEnergy;
-(void)setTotalBGDownloadEnergy:(long long)arg1 ;
-(void)dumpAll;
@end
