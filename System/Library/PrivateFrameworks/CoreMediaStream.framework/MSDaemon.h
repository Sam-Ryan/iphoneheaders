/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface MSDaemon : NSObject {

	BOOL _stabilizedIsBusy;
	int _busyCount;
	int _UIBusyCount;
	NSObject*<OS_dispatch_queue> _idleCountQueue;
	NSTimer* _hysteresisTimer;

}

@property (assign,nonatomic) int busyCount;                                            //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                                          //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (nonatomic,retain) NSTimer * hysteresisTimer;                                //@synthesize hysteresisTimer=_hysteresisTimer - In the implementation block
@property (assign,nonatomic) BOOL stabilizedIsBusy;                                    //@synthesize stabilizedIsBusy=_stabilizedIsBusy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idleCountQueue;              //@synthesize idleCountQueue=_idleCountQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(void)retainBusy;
-(void)releaseBusy;
-(void)didIdle;
-(void)didUnidle;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)idleCountQueue;
-(void)retainPowerAssertion;
-(void)releasePowerAssertion;
-(NSTimer *)hysteresisTimer;
-(void)setHysteresisTimer:(NSTimer *)arg1 ;
-(BOOL)stabilizedIsBusy;
-(void)setStabilizedIsBusy:(BOOL)arg1 ;
-(void)stabilizedDidUnidle;
-(void)_hysteresisTimerDidFire:(id)arg1 ;
-(void)_didChangeIdleBusyState:(BOOL)arg1 ;
-(void)stabilizedDidIdle;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(void)setIdleCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isBusy;
@end

