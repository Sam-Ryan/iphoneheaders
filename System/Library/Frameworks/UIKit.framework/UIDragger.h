/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSArray, UIImageView;

@interface UIDragger : NSObject {

	/*function pointer*/void* _interpolator;
	UIView* _target;
	id _delegate;
	SEL _action;
	CGPoint _startLocation;
	CGPoint _stopLocation;
	double _duration;
	BOOL _showFinger;
	unsigned _port;
	NSArray* _modes;
	unsigned long long _startTimestamp;
	unsigned long long _stopTimestamp;
	unsigned long long _lastTimestamp;
	BOOL _waitingForSmoothScrolling;
	UIImageView* _fingerView;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setDuration:(double)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setStartLocation:(CGPoint)arg1 ;
-(void)run;
-(void)dragDidEnd;
-(void)_postMouseEvent:(int)arg1 timestamp:(unsigned long long)arg2 location:(CGPoint)arg3 ;
-(void)_continueDrag:(id)arg1 ;
-(double)_delayUntilNextEvent;
-(void)_stopDrag:(id)arg1 ;
-(void)setInterpolation:(/*function pointer*/void*)arg1 ;
-(void)setStopLocation:(CGPoint)arg1 ;
-(void)showFinger;
-(void)_smoothScrollingWillStart:(id)arg1 ;
-(void)_smoothScrollingDidEnd:(id)arg1 ;
@end

