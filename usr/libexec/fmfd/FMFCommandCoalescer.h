/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface FMFCommandCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _coleasedRefreshPriority;
	long long _refreshScheduled;
	long long _sequencer;
	NSMutableArray* _coalescedCommands;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long coleasedRefreshPriority;               //@synthesize coleasedRefreshPriority=_coleasedRefreshPriority - In the implementation block
@property (assign,nonatomic) long long refreshScheduled;                      //@synthesize refreshScheduled=_refreshScheduled - In the implementation block
@property (assign,nonatomic) long long sequencer;                             //@synthesize sequencer=_sequencer - In the implementation block
@property (nonatomic,retain) NSMutableArray * coalescedCommands;              //@synthesize coalescedCommands=_coalescedCommands - In the implementation block
+(id)sharedInstance;
-(void)setColeasedRefreshPriority:(long long)arg1 ;
-(void)setRefreshScheduled:(long long)arg1 ;
-(void)setCoalescedCommands:(NSMutableArray *)arg1 ;
-(NSMutableArray *)coalescedCommands;
-(long long)coleasedRefreshPriority;
-(void)_scheduleRefresh;
-(long long)refreshScheduled;
-(double)_highPriorityRefreshInterval;
-(double)_timeTillMinCallback;
-(void)_sendRefreshOfType:(id)arg1 ;
-(void)refreshLocationForHandles:(id)arg1 forSession:(id)arg2 callerId:(id)arg3 priority:(long long)arg4 reason:(long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)sequencer;
-(void)setSequencer:(long long)arg1 ;
@end

