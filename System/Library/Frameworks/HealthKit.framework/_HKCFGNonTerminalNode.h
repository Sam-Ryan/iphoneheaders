/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKCFGNode.h>

@class NSArray, _HKCFGReplacementRule;

@interface _HKCFGNonTerminalNode : _HKCFGNode {

	NSArray* _nodes;
	id _value;
	_HKCFGReplacementRule* _rule;

}

@property (nonatomic,readonly) _HKCFGReplacementRule * rule;              //@synthesize rule=_rule - In the implementation block
+(id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(NSRange)arg3 ;
-(id)evaluate;
-(_HKCFGReplacementRule *)rule;
@end

