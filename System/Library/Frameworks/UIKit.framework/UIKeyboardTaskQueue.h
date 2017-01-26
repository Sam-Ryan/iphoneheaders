/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext, UIKeyboardTaskEntry;

@interface UIKeyboardTaskQueue : NSObject {

	BOOL _executingOnMainThread;
	NSConditionLock* _lock;
	NSMutableArray* _tasks;
	NSMutableArray* _deferredTasks;
	UIKeyboardTaskExecutionContext* _executionContext;
	UIKeyboardTaskEntry* _mainThreadContinuation;

}

@property (nonatomic,retain) UIKeyboardTaskExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
-(id)scheduleTask:(/*^block*/id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)performTask:(/*^block*/id)arg1 ;
-(BOOL)isMainThreadExecutingTask;
-(void)waitUntilAllTasksAreFinished;
-(void)addTask:(/*^block*/id)arg1 ;
-(void)addDeferredTask:(/*^block*/id)arg1 ;
-(UIKeyboardTaskExecutionContext *)executionContext;
-(void)setExecutionContext:(UIKeyboardTaskExecutionContext *)arg1 ;
-(void)finishExecution;
-(void)performTaskOnMainThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)continueExecutionOnMainThread;
-(BOOL)tryLockWhenReadyForMainThread;
-(void)performDeferredTaskIfIdle;
-(void)lockWhenReadyForMainThread;
-(void)promoteDeferredTaskIfIdle;
@end

