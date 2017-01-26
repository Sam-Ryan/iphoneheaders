/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@interface ABLEConstantModelController : ABLEModelController {

	BOOL valid;
	unsigned long long _constantValue;

}

@property (readonly) unsigned long long constantValue;              //@synthesize constantValue=_constantValue - In the implementation block
-(void)resetModel;
-(BOOL)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(BOOL)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(id)initWithConstant:(unsigned long long)arg1 ;
-(void)significantEvent;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(unsigned long long)constantValue;
@end
