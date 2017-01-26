/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface HKObserverQuery : HKQuery {

	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
-(id)updateHandler;
-(void)_queue_cleanupAfterDeactivation;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2 ;
@end

