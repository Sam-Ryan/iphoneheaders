/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSArray;

@interface HKSampleQuery : HKQuery {

	unsigned long long _limit;
	NSArray* _sortDescriptors;
	/*^block*/id _resultHandler;

}

@property (readonly) unsigned long long limit; 
@property (copy,readonly) NSArray * sortDescriptors; 
@property (nonatomic,readonly) id resultHandler;                  //@synthesize resultHandler=_resultHandler - In the implementation block
+(Class)_queryServerDataObjectClass;
-(NSArray *)sortDescriptors;
-(id)resultHandler;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4 ;
-(unsigned long long)limit;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
@end
