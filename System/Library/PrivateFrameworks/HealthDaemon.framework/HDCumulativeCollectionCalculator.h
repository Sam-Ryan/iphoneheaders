/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCollectionCalculator.h>

@class HDLastIntervalInfo, NSArray, NSMutableArray, NSDictionary;

@interface HDCumulativeCollectionCalculator : HDCollectionCalculator {

	map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >* _currentInterval;
	map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >* _lastIntervalSources;
	HDLastIntervalInfo* _lastIntervalInfo;
	double _mergedSum;
	map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >* _bySource;
	BOOL _lastBucket;
	unsigned long long _dataCount;
	NSArray* _orderedSourceIds;
	unsigned long long _mergeStrategy;
	NSMutableArray* _futureIntervals;
	NSMutableArray* _futureBuckets;
	NSMutableArray* _futureCounts;
	long long _currentAligned;

}

@property (assign,nonatomic) unsigned long long dataCount;                         //@synthesize dataCount=_dataCount - In the implementation block
@property (nonatomic,readonly) HDLastIntervalInfo * lastIntervalInfo; 
@property (nonatomic,readonly) NSDictionary * sumsBySource; 
@property (nonatomic,retain) NSArray * orderedSourceIds;                           //@synthesize orderedSourceIds=_orderedSourceIds - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                     //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (nonatomic,retain) NSMutableArray * futureIntervals;                     //@synthesize futureIntervals=_futureIntervals - In the implementation block
@property (nonatomic,retain) NSMutableArray * futureBuckets;                       //@synthesize futureBuckets=_futureBuckets - In the implementation block
@property (nonatomic,retain) NSMutableArray * futureCounts;                        //@synthesize futureCounts=_futureCounts - In the implementation block
@property (assign,nonatomic) long long currentAligned;                             //@synthesize currentAligned=_currentAligned - In the implementation block
@property (assign,nonatomic) BOOL lastBucket;                                      //@synthesize lastBucket=_lastBucket - In the implementation block
-(id)description;
-(BOOL)hasData;
-(unsigned long long)mergeStrategy;
-(NSDictionary *)sumsBySource;
-(NSArray *)orderedSourceIds;
-(void)setOrderedSourceIds:(NSArray *)arg1 ;
-(BOOL)advanceBucket;
-(unsigned long long)_bucketCount;
-(double)_advanceUntilInterval:(long long)arg1 ;
-(void)_splitValue:(double)arg1 perSecond:(double)arg2 sourceId:(long long)arg3 sampleInfo:(SCD_Struct_HD22)arg4 sampleEndTime:(double)arg5 ;
-(void)_addCurrentValue:(double)arg1 sourceId:(long long)arg2 ;
-(double)_startDateForBucket:(unsigned long long)arg1 ;
-(double)_endDateForBucket:(unsigned long long)arg1 ;
-(double)_putInFutureBucketsValue:(double)arg1 timeAfterEnd:(double)arg2 valuePerSecond:(double)arg3 sampleEndTime:(double)arg4 sourceId:(unsigned long long)arg5 ;
-(id)initWithBucketBoundaries:(id)arg1 orderedSourceIds:(id)arg2 mergeStrategy:(unsigned long long)arg3 ;
-(void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 ;
-(void)resumeWithValue:(double)arg1 sumsBySource:(id)arg2 lastIntervalInfo:(id)arg3 dataCount:(unsigned long long)arg4 ;
-(HDLastIntervalInfo *)lastIntervalInfo;
-(double)addCurrentBucket;
-(unsigned long long)dataCount;
-(void)setDataCount:(unsigned long long)arg1 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(NSMutableArray *)futureIntervals;
-(void)setFutureIntervals:(NSMutableArray *)arg1 ;
-(NSMutableArray *)futureBuckets;
-(void)setFutureBuckets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)futureCounts;
-(void)setFutureCounts:(NSMutableArray *)arg1 ;
-(long long)currentAligned;
-(void)setCurrentAligned:(long long)arg1 ;
-(BOOL)lastBucket;
-(void)setLastBucket:(BOOL)arg1 ;
@end

