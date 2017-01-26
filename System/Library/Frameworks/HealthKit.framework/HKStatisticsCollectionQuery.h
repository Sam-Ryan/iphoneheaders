/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDate, NSDateComponents, NSNumber, HKStatisticsCollection;

@interface HKStatisticsCollectionQuery : HKQuery {

	NSDate* _anchorDate;
	unsigned long long _options;
	NSDateComponents* _intervalComponents;
	/*^block*/id _initialResultsHandler;
	/*^block*/id _statisticsUpdateHandler;
	unsigned long long _mergeStrategy;
	NSNumber* _lastAnchor;
	HKStatisticsCollection* _statisticsCollection;

}

@property (readonly) NSDate * anchorDate; 
@property (readonly) unsigned long long options; 
@property (copy,readonly) NSDateComponents * intervalComponents; 
@property (nonatomic,copy) id initialResultsHandler;                           //@synthesize initialResultsHandler=_initialResultsHandler - In the implementation block
@property (nonatomic,copy) id statisticsUpdateHandler;                         //@synthesize statisticsUpdateHandler=_statisticsUpdateHandler - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                 //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (retain) NSNumber * lastAnchor;                                      //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (retain) HKStatisticsCollection * statisticsCollection;              //@synthesize statisticsCollection=_statisticsCollection - In the implementation block
+(Class)_queryServerDataObjectClass;
-(unsigned long long)options;
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)setStatisticsCollection:(HKStatisticsCollection *)arg1 ;
-(void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3 ;
-(HKStatisticsCollection *)statisticsCollection;
-(void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(void)setStatisticsUpdateHandler:(id)arg1 ;
-(id)statisticsUpdateHandler;
-(unsigned long long)mergeStrategy;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(NSDateComponents *)intervalComponents;
-(void)_queue_deliverError:(id)arg1 ;
-(void)setLastAnchor:(NSNumber *)arg1 ;
-(NSNumber *)lastAnchor;
-(NSDate *)anchorDate;
-(void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3 ;
-(void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3 ;
-(id)initialResultsHandler;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 ;
-(void)setInitialResultsHandler:(id)arg1 ;
@end

