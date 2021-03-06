/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSMutableSet, NSObject;

@interface PHIntervalTimer : NSObject {

	double _interval;
	NSTimer* _timer;
	NSMutableSet* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) double interval;                                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)oneSecondTimer;
-(void)_createTimerIfNecessary;
-(void)_invalidateTimerIfNecessary;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_postNotification;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithInterval:(double)arg1 ;
@end

