/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingRuleManager.h>

@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager {

	NSRegularExpression* _regex;
	NSMutableDictionary* _rootNodeIDToQualificationRules;
	NSMutableDictionary* _qualificationIDToQualificationRules;

}

@property (nonatomic,retain) NSMutableDictionary * rootNodeIDToQualificationRules;                   //@synthesize rootNodeIDToQualificationRules=_rootNodeIDToQualificationRules - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * qualificationIDToQualificationRules;              //@synthesize qualificationIDToQualificationRules=_qualificationIDToQualificationRules - In the implementation block
+(id)sharedInstance;
+(id)rulesEntryKey;
+(id)rulesPath;
-(void)setRegex:(id)arg1 ;
-(id)regex;
-(id)qualificationRulesForQualificationID:(id)arg1 ;
-(id)qualificationRulesForRootNodeID:(id)arg1 ;
-(void)indexRule:(id)arg1 ;
-(id)ruleWithString:(id)arg1 withEntryDate:(id)arg2 ;
-(NSMutableDictionary *)rootNodeIDToQualificationRules;
-(NSMutableDictionary *)qualificationIDToQualificationRules;
-(void)setRootNodeIDToQualificationRules:(NSMutableDictionary *)arg1 ;
-(void)setQualificationIDToQualificationRules:(NSMutableDictionary *)arg1 ;
@end

