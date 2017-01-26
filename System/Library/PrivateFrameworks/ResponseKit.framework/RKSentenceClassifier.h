/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSValue;

@interface RKSentenceClassifier : NSObject {

	BOOL _sentenceIsTerminated;
	BOOL _sentenceIsAllSymbols;
	BOOL _sentenceHasQuestionTerminator;
	BOOL _sentenceHasAlternativeConjunction;
	BOOL _lexicalClassAvailable;
	BOOL _lemmaAvailable;
	NSString* _sentenceStringOriginal;
	NSString* _sentenceString;
	NSArray* _sentenceEntities;
	NSValue* _sentenceTag;
	NSArray* _inversions;
	NSArray* _interrogatives;
	NSArray* _choiceDelimiters;
	NSArray* _alternatives;
	NSArray* _appreciations;
	NSArray* _dataDetected;
	NSString* _RKLinguisticTagDataDetected;
	NSString* _languageIdentifier;

}

@property (retain) NSString * sentenceStringOriginal;                   //@synthesize sentenceStringOriginal=_sentenceStringOriginal - In the implementation block
@property (retain) NSString * sentenceString;                           //@synthesize sentenceString=_sentenceString - In the implementation block
@property (retain) NSArray * sentenceEntities;                          //@synthesize sentenceEntities=_sentenceEntities - In the implementation block
@property (assign) BOOL sentenceIsTerminated;                           //@synthesize sentenceIsTerminated=_sentenceIsTerminated - In the implementation block
@property (assign) BOOL sentenceIsAllSymbols;                           //@synthesize sentenceIsAllSymbols=_sentenceIsAllSymbols - In the implementation block
@property (assign) BOOL sentenceHasQuestionTerminator;                  //@synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator - In the implementation block
@property (assign) BOOL sentenceHasAlternativeConjunction;              //@synthesize sentenceHasAlternativeConjunction=_sentenceHasAlternativeConjunction - In the implementation block
@property (retain) NSValue * sentenceTag;                               //@synthesize sentenceTag=_sentenceTag - In the implementation block
@property (retain) NSArray * inversions;                                //@synthesize inversions=_inversions - In the implementation block
@property (retain) NSArray * interrogatives;                            //@synthesize interrogatives=_interrogatives - In the implementation block
@property (retain) NSArray * choiceDelimiters;                          //@synthesize choiceDelimiters=_choiceDelimiters - In the implementation block
@property (retain) NSArray * alternatives;                              //@synthesize alternatives=_alternatives - In the implementation block
@property (retain) NSArray * appreciations;                             //@synthesize appreciations=_appreciations - In the implementation block
@property (retain) NSArray * dataDetected;                              //@synthesize dataDetected=_dataDetected - In the implementation block
@property (retain) NSString * RKLinguisticTagDataDetected;              //@synthesize RKLinguisticTagDataDetected=_RKLinguisticTagDataDetected - In the implementation block
@property (readonly) NSArray * alternativeConjunctions; 
@property (readonly) NSString * languageIdentifier;                     //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
@property (readonly) BOOL lexicalClassAvailable;                        //@synthesize lexicalClassAvailable=_lexicalClassAvailable - In the implementation block
@property (readonly) BOOL lemmaAvailable;                               //@synthesize lemmaAvailable=_lemmaAvailable - In the implementation block
+(BOOL)canClassifyLanguageIdentifier:(id)arg1 ;
+(id)languageIdentifierFromClassName;
+(Class)subclassForLanguageIdentifier:(id)arg1 ;
+(Class)subclassForLocale:(id)arg1 ;
+(id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1 ;
+(id)polarTagRegularExpressionForLanguage:(id)arg1 ;
+(id)categoryKeywordMapForLanguage:(id)arg1 ;
+(id)appreciationKeywordsForLanguage:(id)arg1 ;
+(id)alternativeInversionsForLanguage:(id)arg1 ;
+(id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2 ;
+(id)stringFromLexicalEntities:(id)arg1 ;
+(id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3 ;
-(NSString *)languageIdentifier;
-(id)init;
-(NSArray *)alternatives;
-(id)addSentenceTerminatorQuestion:(id)arg1 ;
-(void)analyzeSentence;
-(id)classifySentence;
-(BOOL)sentenceHasQuestionTerminator;
-(NSArray *)alternativeConjunctions;
-(void)setInversions:(NSArray *)arg1 ;
-(NSArray *)sentenceEntities;
-(NSArray *)inversions;
-(NSArray *)interrogatives;
-(NSString *)sentenceString;
-(BOOL)lemmaAvailable;
-(id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setSentenceString:(NSString *)arg1 ;
-(void)setSentenceStringOriginal:(NSString *)arg1 ;
-(id)lexicalEntitiesFromString:(id)arg1 ;
-(void)setSentenceEntities:(NSArray *)arg1 ;
-(void)setSentenceIsTerminated:(BOOL)arg1 ;
-(void)setSentenceHasQuestionTerminator:(BOOL)arg1 ;
-(BOOL)sentenceIsTerminated;
-(NSString *)sentenceStringOriginal;
-(void)setSentenceIsAllSymbols:(BOOL)arg1 ;
-(void)setSentenceTag:(NSValue *)arg1 ;
-(void)setInterrogatives:(NSArray *)arg1 ;
-(void)setDataDetected:(NSArray *)arg1 ;
-(void)setChoiceDelimiters:(NSArray *)arg1 ;
-(void)setSentenceHasAlternativeConjunction:(BOOL)arg1 ;
-(BOOL)sentenceHasAlternativeConjunction;
-(NSArray *)dataDetected;
-(NSArray *)choiceDelimiters;
-(void)setAlternatives:(NSArray *)arg1 ;
-(BOOL)lexicalClassAvailable;
-(void)setAppreciations:(NSArray *)arg1 ;
-(NSArray *)appreciations;
-(BOOL)sentenceIsAllSymbols;
-(NSValue *)sentenceTag;
-(NSString *)RKLinguisticTagDataDetected;
-(void)setRKLinguisticTagDataDetected:(NSString *)arg1 ;
@end

