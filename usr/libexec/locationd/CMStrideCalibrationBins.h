/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@class NSMutableArray;

@interface CMStrideCalibrationBins : NSObject {

	unsigned long long _totalStrideCalibrationBins;
	NSMutableArray* _bins;

}
+(unsigned long long)binIndexForSpeed:(double)arg1 ;
+(BOOL)isRunningSpeed:(double)arg1 ;
+(SCD_Struct_CM9)binIntervalForSpeed:(double)arg1 ;
+(id)sharedInstance;
+(void)initialize;
-(id)defaultBins;
-(double)kValueForSpeed:(double)arg1 ;
-(BOOL)isBin:(unsigned long long)arg1 sameActivityAsBin:(unsigned long long)arg2 ;
-(BOOL)isCalibrationAvailableInBinsFromIndex:(unsigned long long)arg1 withLength:(unsigned long long)arg2 ;
-(void)updateNativeBin:(unsigned long long)arg1 withAlpha:(double)arg2 rawKValue:(double)arg3 ;
-(void)updateAdjacentBin:(unsigned long long)arg1 withAlpha:(double)arg2 rawKValue:(double)arg3 nativeBin:(unsigned long long)arg4 ;
-(void)setBins:(id)arg1 ;
-(void)logBins;
-(BOOL)isSpeedValid:(double)arg1 ;
-(BOOL)isWalkCalibrationAvailable;
-(BOOL)isRunCalibrationAvailable;
-(void)updateBinsWithTrack:(id)arg1 rawDistance:(const CLStepDistance*)arg2 ;
-(void)resetBins;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)bins;
@end

