/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)invalidResult;
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(void)_resetVariableIndicies;
-(BOOL)isValueIllegal:(float)arg1 ;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)resetAllVariables;
-(void)setVariableValues:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)valueForVariable:(id)arg1 ;
-(id)stringValue;
-(void)cleanup;
-(BOOL)isConstant;
-(float)evaluate;
@end

