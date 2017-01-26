/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CMMotionActivityManager, NSOperationQueue;

@interface MotionStateRelay : NSObject {

	NSObject*<OS_dispatch_queue> _alarmQueue;
	unsigned _currentMotion;
	BOOL _isStationary;
	BOOL _isMoving;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _alarmOperationQueue;

}

@property (nonatomic,readonly) unsigned currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
@property (nonatomic,readonly) BOOL isStationary;                   //@synthesize isStationary=_isStationary - In the implementation block
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+(BOOL)automaticallyNotifiesObserversOfIsStationary;
-(void)dealloc;
-(id)init;
-(void)transitionToState:(unsigned)arg1 ;
-(BOOL)isStationary;
-(BOOL)isMoving;
-(void)initializeEngine;
-(void)destroyEngine;
-(void)stopMotionMonitoring;
-(void)startMotionMonitoring;
-(void)startActivityUpdates;
-(id)motionStateString:(unsigned)arg1 ;
-(void)subscribe;
-(void)unsubscribe;
-(unsigned)currentMotion;
-(void)stopActivityUpdates;
@end

