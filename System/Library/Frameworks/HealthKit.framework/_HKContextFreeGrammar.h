/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSCharacterSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject {

	NSMutableSet* _nonTerminals;
	NSMutableSet* _terminals;
	NSCharacterSet* _terminalCharacters;
	_HKCFGNonTerminal* _rootNonTerminal;
	/*^block*/id _emptyStringEvaluator;

}

@property (nonatomic,readonly) _HKCFGNonTerminal * rootNonTerminal;              //@synthesize rootNonTerminal=_rootNonTerminal - In the implementation block
@property (nonatomic,readonly) id emptyStringEvaluator;                          //@synthesize emptyStringEvaluator=_emptyStringEvaluator - In the implementation block
+(id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
+(id)grammarWithRootNonTerminal:(id)arg1 ;
-(void)invalidate;
-(id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
-(void)_gatherExpressions;
-(void)_gatherExpressionsStartingAt:(id)arg1 ;
-(id)parseTreeForString:(id)arg1 ;
-(_HKCFGNonTerminal *)rootNonTerminal;
-(id)emptyStringEvaluator;
@end

