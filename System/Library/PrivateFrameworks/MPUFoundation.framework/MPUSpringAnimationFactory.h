/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory {

	double _damping;
	double _mass;
	double _stiffness;
	double _velocity;

}

@property (assign,nonatomic) double damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double mass;                   //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double velocity;               //@synthesize velocity=_velocity - In the implementation block
+(void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(/*^block*/id)arg5 options:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)setVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)velocity;
-(double)damping;
-(double)mass;
-(id)_newSpringAnimationForKeyPath:(id)arg1 ;
-(double)durationForEpsilon:(double)arg1 ;
-(double)stiffness;
@end

