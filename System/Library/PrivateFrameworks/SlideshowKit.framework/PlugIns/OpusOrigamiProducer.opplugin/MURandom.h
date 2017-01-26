/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MURandom : MUPoolObject {

	long long _state[31];
	long long* _frontPtr;
	long long* _rearPtr;
	long long* _endPtr;

}
+(id)randomGeneratorWithSeed:(unsigned long long)arg1 ;
+(SCD_Struct_MU3*)poolInfo;
+(BOOL)clearVars;
-(double)randomFloatInRange:(double)arg1 :(double)arg2 ;
-(void)_seed:(unsigned long long)arg1 ;
-(long long)randomInt;
@end
