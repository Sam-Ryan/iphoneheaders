/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDate, NSDateComponents, NSMutableArray;

@interface _HKActivityStatisticsQuery : HKQuery {

	BOOL _deliveredInitial;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _intervalComponents;
	NSMutableArray* _results;
	/*^block*/id _updateHandler;
	double _updateInterval;
	/*^block*/id _initialResultsHandler;

}

@property (nonatomic,copy) id updateHandler;                                                                       //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,setter=_setUpdateInterval:,getter=_updateInterval,nonatomic) double updateInterval;              //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,copy) id initialResultsHandler;                                                               //@synthesize initialResultsHandler=_initialResultsHandler - In the implementation block
+(Class)_queryServerDataObjectClass;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(double)_updateInterval;
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)_queue_validateParams;
-(void)_queue_deliverActivityStatisticsObjects:(id)arg1 queryUUID:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 initialResultsHandler:(/*^block*/id)arg5 ;
-(void)_setUpdateInterval:(double)arg1 ;
-(void)_queue_deliverError:(id)arg1 ;
-(void)deliverActivityStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(id)initialResultsHandler;
-(void)setInitialResultsHandler:(id)arg1 ;
@end

