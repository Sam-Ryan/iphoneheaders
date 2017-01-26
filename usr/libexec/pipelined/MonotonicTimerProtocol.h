/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MonotonicTimerProtocol <NSObject>
@property (assign,nonatomic) duration<long long delay; 
@property (assign,nonatomic) duration<long long interval; 
@property (assign,nonatomic) double delayTimeInterval; 
@property (assign,nonatomic) double intervalTimeInterval; 
@required
-(double)delayTimeInterval;
-(void)setDelayTimeInterval:(double)arg1;
-(double)intervalTimeInterval;
-(void)setIntervalTimeInterval:(double)arg1;
-(void)setEventHandler:(/*^block*/id)arg1 onQueue:(id)arg2;
-(void)invalidate;
-(duration<long long)delay;
-(void)setDelay:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1;
-(void)resume;
-(void)setInterval:(duration<long long, std::__1::ratio<1, 1000000000> >)arg1;
-(duration<long long)interval;
-(void)pause;

@end

