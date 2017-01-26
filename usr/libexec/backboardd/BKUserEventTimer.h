/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface BKUserEventTimer : NSObject {

	double _currentTimeout;
	double _lastUserEvent;
	double _lastResetTimerRequest;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _isIdle;
	int _currentMode;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _shouldNotify;

}
+(id)sharedInstance;
-(void)userEventOccurredOnDisplay:(id)arg1 ;
-(void)resetTimer:(double)arg1 mode:(int)arg2 ;
-(double)lastUserEventTime;
-(void)_scheduleTimerWithTimeInterval:(double)arg1 ;
-(void)_didUnIdle;
-(void)_userEventOccurredInIdleMode;
-(void)_userEventOccurredInPresenceMode;
-(void)dealloc;
-(id)init;
-(void)_clearTimer;
-(void)notifyOnNextUserEvent;
@end

