/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStatisticsBuilder.h>

@class HDCumulativeCollectionCalculator, HDLastIntervalInfo, HKStatistics;

@interface HDCumulativeStatisticsBuilder : HDStatisticsBuilder {

	HDCumulativeCollectionCalculator* _collectionCalculator;
	HDLastIntervalInfo* _lastIntervalInfo;
	HKStatistics* _lastStatistics;

}

@property (nonatomic,retain) HDLastIntervalInfo * lastIntervalInfo;              //@synthesize lastIntervalInfo=_lastIntervalInfo - In the implementation block
@property (nonatomic,retain) HKStatistics * lastStatistics;                      //@synthesize lastStatistics=_lastStatistics - In the implementation block
-(HDLastIntervalInfo *)lastIntervalInfo;
-(BOOL)_setupStatistics:(id)arg1 withCalculator:(id)arg2 ;
-(id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id*)arg3 ;
-(id)collectionCalculatorWithBucketBoundaries:(id)arg1 ;
-(id)_initialStatisticsForCollection:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldStopProcessing:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)_statisticsWithTimePeriod:(id)arg1 samples:(id)arg2 lastPeriod:(BOOL)arg3 error:(id*)arg4 ;
-(void)setLastIntervalInfo:(HDLastIntervalInfo *)arg1 ;
-(HKStatistics *)lastStatistics;
-(void)setLastStatistics:(HKStatistics *)arg1 ;
@end
