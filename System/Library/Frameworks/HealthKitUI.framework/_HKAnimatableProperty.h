/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _HKAnimatableProperty : NSObject {

	/*^block*/id _getter;
	/*^block*/id _setter;
	NSMutableArray* _animations;
	id _currentValue;
	id _startValue;
	id _endValue;

}

@property (nonatomic,retain) id startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,retain) id endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,retain) id currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(void)update:(double)arg1 ;
-(void)setStartValue:(id)arg1 ;
-(void)setEndValue:(id)arg1 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(id)endValue;
-(id)startValue;
-(id)initWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(void)addPropertyAnimation:(id)arg1 ;
-(void)removeAllPropertyAnimations;
-(BOOL)isFinishedAnimating;
@end

