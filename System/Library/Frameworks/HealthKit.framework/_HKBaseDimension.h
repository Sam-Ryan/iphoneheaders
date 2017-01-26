/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKDimension.h>
#import <libobjc.A.dylib/_HKFactor.h>

@class NSString, HKBaseUnit, HKUnit;

@interface _HKBaseDimension : _HKDimension <_HKFactor> {

	NSString* _name;
	HKBaseUnit* _reducibleBaseUnit;
	HKUnit* _reducedUnit;
	double _reductionCoefficient;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HKBaseUnit * reducibleBaseUnit;              //@synthesize reducibleBaseUnit=_reducibleBaseUnit - In the implementation block
@property (nonatomic,retain) HKUnit * reducedUnit;                        //@synthesize reducedUnit=_reducedUnit - In the implementation block
@property (assign,nonatomic) double reductionCoefficient;                 //@synthesize reductionCoefficient=_reductionCoefficient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)length;
+(id)time;
+(id)mass;
+(id)temperature;
+(id)_uniquedDefinedDimensionWithName:(id)arg1 ;
+(id)_uniquedDimensionWithName:(id)arg1 configuration:(/*^block*/id)arg2 ;
+(id)conductance;
+(id)nullDimension;
+(id)pressure;
+(id)energy;
+(id)volume;
-(id)_initWithName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)_baseDimensions;
-(BOOL)canBeReduced;
-(HKUnit *)reducedUnit;
-(void)setReducibleBaseUnit:(HKBaseUnit *)arg1 ;
-(void)setReducedUnit:(HKUnit *)arg1 ;
-(HKBaseUnit *)reducibleBaseUnit;
-(double)reductionCoefficient;
-(void)setReductionCoefficient:(double)arg1 ;
-(id)unitString;
@end

