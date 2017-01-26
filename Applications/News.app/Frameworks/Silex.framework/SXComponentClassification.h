/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXComponentLayoutRules, SXComponentTextRules, NSArray;

@interface SXComponentClassification : NSObject {

	SXComponentLayoutRules* _layoutRules;
	SXComponentTextRules* _textRules;

}

@property (nonatomic,readonly) SXComponentLayoutRules * layoutRules;                    //@synthesize layoutRules=_layoutRules - In the implementation block
@property (nonatomic,readonly) SXComponentTextRules * textRules;                        //@synthesize textRules=_textRules - In the implementation block
@property (nonatomic,readonly) NSArray * defaultTextStyleIdentifiers; 
@property (nonatomic,readonly) NSArray * defaultComponentStyleIdentifiers; 
+(id)roleString;
+(id)classificationForComponentWithType:(id)arg1 role:(id)arg2 ;
+(id)classificationForComponentWithRole:(int)arg1 ;
+(void)initializeClassifications;
+(void)registerClassification;
+(id)classificationForClass:(Class)arg1 ;
+(void)initialize;
+(int)role;
+(id)typeString;
-(SXComponentTextRules *)textRules;
-(BOOL)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2 ;
-(id)accessibilityContextualLabel;
-(Class)componentViewClass;
-(id)accessibilityCustomRotorMembership;
-(Class)componentModelClass;
-(SXComponentLayoutRules *)layoutRules;
-(Class)componentSizerClass;
-(BOOL)isCollapsible;
-(BOOL)accessibilitySkippedDuringReadAll;
-(NSArray *)defaultComponentStyleIdentifiers;
-(NSArray *)defaultTextStyleIdentifiers;
@end

