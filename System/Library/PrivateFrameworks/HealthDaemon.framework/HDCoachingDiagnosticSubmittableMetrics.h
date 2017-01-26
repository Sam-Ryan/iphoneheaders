/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, HKActivitySummary, NSNumber, HKQuantitySample;

@interface HDCoachingDiagnosticSubmittableMetrics : NSObject {

	NSDate* _startOfDay;
	NSArray* _diagnosticData;
	HKActivitySummary* _activitySummary;
	NSDate* _dateOfBirth;
	NSNumber* _biologicalSex;
	HKQuantitySample* _heightSample;
	HKQuantitySample* _weightSample;

}

@property (nonatomic,retain) NSDate * startOfDay;                              //@synthesize startOfDay=_startOfDay - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticData;                       //@synthesize diagnosticData=_diagnosticData - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;              //@synthesize activitySummary=_activitySummary - In the implementation block
@property (nonatomic,retain) NSDate * dateOfBirth;                             //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) NSNumber * biologicalSex;                         //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (nonatomic,retain) HKQuantitySample * heightSample;                  //@synthesize heightSample=_heightSample - In the implementation block
@property (nonatomic,retain) HKQuantitySample * weightSample;                  //@synthesize weightSample=_weightSample - In the implementation block
-(id)init;
-(void)setBiologicalSex:(NSNumber *)arg1 ;
-(NSNumber *)biologicalSex;
-(void)addDiagnosticDataObject:(id)arg1 ;
-(NSDate *)startOfDay;
-(void)setStartOfDay:(NSDate *)arg1 ;
-(NSArray *)diagnosticData;
-(HKActivitySummary *)activitySummary;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(NSDate *)dateOfBirth;
-(void)setDateOfBirth:(NSDate *)arg1 ;
-(HKQuantitySample *)heightSample;
-(void)setHeightSample:(HKQuantitySample *)arg1 ;
-(HKQuantitySample *)weightSample;
-(void)setWeightSample:(HKQuantitySample *)arg1 ;
@end

