/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class HKQueryAnchor;

@interface HKAnchoredObjectQuery : HKQuery {

	BOOL _initialHandlerCalled;
	BOOL _includeDeletedObjects;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;

}

@property (nonatomic,copy) id updateHandler;                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HKQueryAnchor * anchor;                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;              //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
+(Class)_queryServerDataObjectClass;
-(id)completionHandler;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)includeDeletedObjects;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end

