/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BSSerializedRequestQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _conditionBlock;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(void)_enqueueSerialConditionalRequest:(/*^block*/id)arg1 ;
-(id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(/*^block*/id)arg3 ;
-(void)enqueueAsyncRequest:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)enqueueRequest:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

