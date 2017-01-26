/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSReading/TSDMixing.h>

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {

	double mPattern[6];
	unsigned long long mCount;
	double mPhase;
	int mType;

}

@property (nonatomic,readonly) int patternType; 
@property (nonatomic,readonly) double* pattern; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) double phase; 
@property (nonatomic,readonly) BOOL isDash; 
@property (nonatomic,readonly) BOOL isRoundDash; 
+(id)strokePatternWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3 ;
+(id)solidPattern;
+(id)emptyPattern;
+(id)shortDashPattern;
+(id)mediumDashPattern;
+(id)longDashPattern;
+(id)roundDashPattern;
+(id)roundDashPatternWithSpacing:(double)arg1 ;
+(id)dashPatternWithSpacing:(double)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)p_initWithType:(int)arg1 pattern:(const double*)arg2 count:(unsigned long long)arg3 phase:(double)arg4 ;
-(id)initWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3 ;
-(int)patternType;
-(void)i_applyToContext:(CGContextRef)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long*)arg3 ;
-(BOOL)isRoundDash;
-(void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2 ;
-(BOOL)isDash;
-(void)applyToContext:(CGContextRef)arg1 lineWidth:(double)arg2 ;
-(void)applyToCAShapeLayer:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)phase;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double*)pattern;
@end
