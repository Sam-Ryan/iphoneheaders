/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>

@protocol CNFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)flatMap:(/*^block*/id)arg1;
-(id)recover:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)result:(id*)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end

#import <libobjc.A.dylib/CNPromise.h>

@class NSConditionLock, CNFutureResult, CNFutureCompletionBlocks, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNFutureCompletionBlocks* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(void)finishPromise:(id)arg1 withFuture:(id)arg2 ;
+(id)flatMap:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)recover:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)promiseFuture;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)future;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_nts_isFinished;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(BOOL)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)nts_isFinished;
-(id)futureResult;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)result:(id*)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)finishWithError:(id)arg1 ;
@end

