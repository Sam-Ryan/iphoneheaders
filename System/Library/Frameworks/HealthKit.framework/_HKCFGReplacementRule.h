/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _HKCFGReplacementRule : NSObject {

	NSString* _description;
	NSArray* _rightHandSide;
	/*^block*/id _nodeEvaluator;
	unsigned long long _lengthIncrease;

}

@property (nonatomic,copy,readonly) NSArray * rightHandSide;                   //@synthesize rightHandSide=_rightHandSide - In the implementation block
@property (nonatomic,copy,readonly) id nodeEvaluator;                          //@synthesize nodeEvaluator=_nodeEvaluator - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthIncrease;              //@synthesize lengthIncrease=_lengthIncrease - In the implementation block
+(id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(/*^block*/id)arg3 ;
-(id)description;
-(id)nodeEvaluator;
-(NSArray *)rightHandSide;
-(unsigned long long)lengthIncrease;
@end

