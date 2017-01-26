/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKQuery.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _DRTopicEnumerationQuery : _DKQuery {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	/*^block*/id _topicEnumerator;

}

@property (copy) id topicEnumerator;              //@synthesize topicEnumerator=_topicEnumerator - In the implementation block
+(id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
+(id)enumerationSumExpression;
+(id)enumerationCountExpresion;
-(void)handleResults:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 ;
-(void)executeUsingCoreDataStorage:(id)arg1 reponseQueue:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
-(void)setTopicEnumerator:(id)arg1 ;
-(id)topicEnumerator;
@end

