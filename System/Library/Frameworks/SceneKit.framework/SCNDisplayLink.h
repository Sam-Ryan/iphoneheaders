/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CADisplayLink, NSObject;

@interface SCNDisplayLink : NSObject {

	CADisplayLink* _caDisplayLink;
	id _owner;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _invalidated;
	BOOL _asynchronous;
	long long _frameInterval;
	double _lastVideoOutput;
	int _queuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setFrameInterval:(long long)arg1 ;
-(long long)frameInterval;
-(void)setPaused:(BOOL)arg1 ;
-(void)_teardown;
-(BOOL)isPaused;
-(void)_pause;
-(void)_caDisplayLinkCallback;
-(void)_resume;
-(BOOL)_isInvalidated;
-(void)_callbackWithTime:(double)arg1 andDeltaTime:(double)arg2 ;
-(id)initWithOwner:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)willDie;
-(void)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 ;
-(int)queuedFrameCount;
@end

