/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface TSDDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _tickBlock;
	/*^block*/id _completionBlock;
	double _startTime;
	double _lastTime;

}

@property (nonatomic,copy) id tickBlock;                    //@synthesize tickBlock=_tickBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
-(void)setTickBlock:(id)arg1 ;
-(void)p_handleDisplayLink:(id)arg1 ;
-(id)tickBlock;
-(double)lastTime;
-(void)setLastTime:(double)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)start;
-(double)startTime;
-(void)teardown;
@end

