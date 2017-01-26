/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSOperationQueue, NSObject, NSRunLoop;

@interface CKWatchdog : NSObject {

	BOOL _scheduled;
	BOOL _running;
	double _interval;
	double _timeoutInterval;
	/*^block*/id _timeoutCallback;
	NSString* _mode;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSRunLoop* _runLoop;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                  //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id timeoutCallback;                                        //@synthesize timeoutCallback=_timeoutCallback - In the implementation block
@property (nonatomic,retain) NSString * mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) BOOL scheduled;                                          //@synthesize scheduled=_scheduled - In the implementation block
@property (assign,nonatomic) BOOL running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(BOOL)scheduled;
-(void)resume;
-(NSOperationQueue *)operationQueue;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutCallback:(id)arg1 ;
-(void)scheduleInOperationQueue:(id)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(id)timeoutCallback;
-(void)setScheduled:(BOOL)arg1 ;
-(void)scheduleInDispatchQueue:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
@end

