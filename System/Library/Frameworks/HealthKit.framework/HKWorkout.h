/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@class NSArray, HKQuantity;

@interface HKWorkout : HKSample {

	unsigned long long _workoutActivityType;
	double _duration;
	NSArray* _workoutEvents;
	HKQuantity* _totalEnergyBurned;
	HKQuantity* _totalBasalEnergyBurned;
	HKQuantity* _totalDistance;
	unsigned long long _goalType;
	HKQuantity* _goal;

}

@property (readonly) unsigned long long workoutActivityType; 
@property (copy,readonly) NSArray * workoutEvents;                                                                                               //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (readonly) double duration; 
@property (readonly) HKQuantity * totalEnergyBurned; 
@property (readonly) HKQuantity * totalDistance; 
@property (assign,setter=_setGoalType:,getter=_goalType,nonatomic) unsigned long long goalType;                                                  //@synthesize goalType=_goalType - In the implementation block
@property (setter=_setGoal:,getter=_goal,nonatomic,retain) HKQuantity * goal;                                                                    //@synthesize goal=_goal - In the implementation block
@property (setter=_setTotalBasalEnergyBurned:,getter=_totalBasalEnergyBurned,nonatomic,retain) HKQuantity * totalBasalEnergyBurned; 
+(double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(BOOL)FU_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(BOOL)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1 ;
+(BOOL)_isHeartRateSupportedInPrivacySettings;
+(id)FU_supportedWorkoutMetricsForActivityType:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(BOOL)FU_shouldTrackPaceAsSpeedForActivityType:(unsigned long long)arg1 ;
+(unsigned long long)FU_associatedMetricForGoalType:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 config:(/*^block*/id)arg13 ;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 ;
+(id)_stringFromWorkoutActivityType:(unsigned long long)arg1 ;
+(BOOL)_isConcreteObjectClass;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)_activityTypeMappings;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(unsigned long long)_workoutActivityTypeFromString:(id)arg1 ;
+(id)_allWorkoutTypeNames;
+(id)_workoutWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 startDate:(double)arg5 endDate:(double)arg6 workoutType:(id)arg7 activityType:(unsigned long long)arg8 workoutEvents:(id)arg9 duration:(double)arg10 totalActiveEnergyBurned:(id)arg11 totalBasalEnergyBurned:(id)arg12 totalDistance:(id)arg13 goalType:(unsigned long long)arg14 goal:(id)arg15 ;
-(id)hkui_localizedActivityTypeName;
-(long long)hk_integerValue;
-(id)hk_timePeriods;
-(id)fiui_splitsFromDistanceSamples:(id)arg1 userPreferredUnit:(id)arg2 ;
-(BOOL)_FU_supportsDistanceMetricForGoalDisplay;
-(unsigned long long)_FU_effectiveGoalType;
-(id)_localizedGoalDescriptionWithActivity:(id)arg1 formattedValue:(id*)arg2 ;
-(id)FU_localizedKeyMetricDistanceStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedKeyMetricEnergyBurnedStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedKeyMetricCyclingStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedKeyMetricDurationString;
-(id)FU_localizedOpenGoalKeyMetricStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedShareTextWithShareValue:(id)arg1 ;
-(id)FU_fitnessLocalizedGoalWithValue:(id*)arg1 ;
-(id)FU_fitnessLocalizedGoalDescriptionWithValue:(id*)arg1 ;
-(id)FU_localizedKeyMetricStringWithUnitStyle:(long long)arg1 ;
-(double)FU_completionFactor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(HKQuantity *)totalDistance;
-(void)_setDuration:(double)arg1 ;
-(HKQuantity *)totalEnergyBurned;
-(id)_validateConfiguration;
-(id)_validateWorkoutEvents:(id)arg1 ;
-(id)_deepCopy;
-(unsigned long long)workoutActivityType;
-(double)_totalEnergyBurnedInCanonicalUnit;
-(double)_totalBasalEnergyBurnedInCanonicalUnit;
-(double)_totalDistanceInCanonicalUnit;
-(id)_goal;
-(unsigned long long)_goalType;
-(double)_goalInCanonicalUnit;
-(NSArray *)workoutEvents;
-(id)_totalBasalEnergyBurned;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalBasalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(void)_setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)_setGoal:(id)arg1 ;
-(void)_setGoalType:(unsigned long long)arg1 ;
-(void)_setWorkoutEvents:(id)arg1 ;
-(void)_enumerateActiveTimePeriods:(/*^block*/id)arg1 ;
@end

