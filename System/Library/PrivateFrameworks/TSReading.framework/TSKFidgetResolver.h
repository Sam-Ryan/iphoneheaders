/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKFidgetResolver : NSObject {

	double _fidgetThreshold;
	id* _values;
	double* _times;
	unsigned long long _head;

}

@property (assign,nonatomic) double fidgetThreshold;              //@synthesize fidgetThreshold=_fidgetThreshold - In the implementation block
@property (nonatomic,readonly) id nonFidgetValue; 
-(unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1 ;
-(void)pushValue:(id)arg1 withTime:(double)arg2 ;
-(void)p_advanceHead;
-(id)nonFidgetValue;
-(void)pushValue:(id)arg1 ;
-(double)fidgetThreshold;
-(void)setFidgetThreshold:(double)arg1 ;
-(void)dealloc;
-(id)init;
@end
