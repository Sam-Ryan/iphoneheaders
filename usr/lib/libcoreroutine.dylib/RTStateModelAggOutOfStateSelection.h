/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject {

	NSMutableArray* _selectOOStStates;
	double _weeklyDensityCorrection;
	double _dailyDensityCorrection;

}

@property (nonatomic,retain) NSMutableArray * selectOOStStates;              //@synthesize selectOOStStates=_selectOOStStates - In the implementation block
@property (assign,nonatomic) double weeklyDensityCorrection;                 //@synthesize weeklyDensityCorrection=_weeklyDensityCorrection - In the implementation block
@property (assign,nonatomic) double dailyDensityCorrection;                  //@synthesize dailyDensityCorrection=_dailyDensityCorrection - In the implementation block
-(id)init;
-(void)setWeeklyDensityCorrection:(double)arg1 ;
-(void)setDailyDensityCorrection:(double)arg1 ;
-(void)setSelectOOStStates:(NSMutableArray *)arg1 ;
-(id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3 ;
-(NSMutableArray *)selectOOStStates;
-(double)weeklyDensityCorrection;
-(double)dailyDensityCorrection;
@end

