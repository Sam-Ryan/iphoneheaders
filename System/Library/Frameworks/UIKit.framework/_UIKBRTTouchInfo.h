/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKBRTObject.h>

@protocol OS_dispatch_queue;
@class NSUUID, _UIKBRTTimerBlock, NSObject;

@interface _UIKBRTTouchInfo : _UIKBRTObject {

	char _currentTouchState;
	char _preRuleTouchState;
	BOOL _canLogTouch;
	double _originalTimestamp;
	double _currentTimestamp;
	id _touchIdentifier;
	NSUUID* _touchUUID;
	double _majorRadius;
	double _majorRadiusTolerance;
	_UIKBRTTimerBlock* _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	CGPoint _originalTouchPoint;
	CGPoint _currentTouchPoint;

}

@property (nonatomic,readonly) _UIKBRTTouchInfo * previousTouch; 
@property (nonatomic,readonly) _UIKBRTTouchInfo * nextTouch; 
@property (nonatomic,readonly) double originalTimestamp;                             //@synthesize originalTimestamp=_originalTimestamp - In the implementation block
@property (nonatomic,readonly) CGPoint originalTouchPoint;                           //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (nonatomic,readonly) CGPoint currentTouchPoint;                            //@synthesize currentTouchPoint=_currentTouchPoint - In the implementation block
@property (nonatomic,readonly) double currentTimestamp;                              //@synthesize currentTimestamp=_currentTimestamp - In the implementation block
@property (assign,nonatomic) char currentTouchState;                                 //@synthesize currentTouchState=_currentTouchState - In the implementation block
@property (assign,nonatomic) char preRuleTouchState;                                 //@synthesize preRuleTouchState=_preRuleTouchState - In the implementation block
@property (nonatomic,readonly) id touchIdentifier;                                   //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * touchUUID;                                   //@synthesize touchUUID=_touchUUID - In the implementation block
@property (nonatomic,readonly) double majorRadius;                                   //@synthesize majorRadius=_majorRadius - In the implementation block
@property (nonatomic,readonly) double majorRadiusTolerance;                          //@synthesize majorRadiusTolerance=_majorRadiusTolerance - In the implementation block
@property (nonatomic,readonly) BOOL canLogTouch;                                     //@synthesize canLogTouch=_canLogTouch - In the implementation block
@property (nonatomic,readonly) _UIKBRTTimerBlock * timer;                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
+(id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
+(id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 ;
+(id)touchDict;
+(void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2 ;
-(void)dealloc;
-(double)majorRadius;
-(NSUUID *)touchUUID;
-(CGPoint)currentTouchPoint;
-(double)majorRadiusTolerance;
-(BOOL)canLogTouch;
-(void)setCurrentTouchState:(char)arg1 ;
-(char)currentTouchState;
-(void)invalidateTimer;
-(char)preRuleTouchState;
-(void)setPreRuleTouchState:(char)arg1 ;
-(id)touchIdentifier;
-(double)originalTimestamp;
-(double)currentTimestamp;
-(_UIKBRTTouchInfo *)previousTouch;
-(id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(char)arg2 ;
-(_UIKBRTTouchInfo *)nextTouch;
-(void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(/*^block*/id)arg3 ;
-(CGPoint)originalTouchPoint;
-(void)cleanup;
-(BOOL)willChangeTouchInfo:(id)arg1 toState:(char)arg2 ;
-(_UIKBRTTimerBlock *)timer;
-(void)updateTouch:(id)arg1 ;
-(id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
-(void)fireTimerNow;
-(NSObject*<OS_dispatch_queue>)timerQueue;
@end

