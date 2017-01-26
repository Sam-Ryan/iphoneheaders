/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager.h>
#import <libobjc.A.dylib/TIRevisionHistoryDelegate.h>

@class NSMutableString, TIKeyboardInputManagerConfig, CPLRUDictionary, TITextCheckerExemptions, NSCharacterSet, TIRevisionHistory, TIAutoshiftRegularExpressionLoader, TIAssetContentItem, NSArray, NSString;

@interface TIKeyboardInputManagerZephyr : TIKeyboardInputManager <TIRevisionHistoryDelegate> {

	TIInputManagerZephyr* m_impl;
	NSMutableString* m_composedText;
	unsigned long long m_initialSelectedIndex;
	shared_ptr<KB::TypologyLogger>* m_typology_recorder;
	USetRef m_precomposed_character_set;
	BOOL _isEditingWordPrefix;
	BOOL _wordLearningEnabled;
	TIKeyboardInputManagerConfig* _config;
	CPLRUDictionary* _autocorrectionHistory;
	CPLRUDictionary* _recentAutocorrections;
	CPLRUDictionary* _recentPredictiveInputSelections;
	CPLRUDictionary* _rejectedAutocorrections;
	CPLRUDictionary* _autocorrectionsSuggestedForCurrentInput;
	TITextCheckerExemptions* _textCheckerExemptions;
	USetRef _acceptableCharacterSet;
	NSCharacterSet* _allowPredictionCharacterSet;
	TIRevisionHistory* _revisionHistory;
	TIAutoshiftRegularExpressionLoader* _autoshiftRegexLoader;
	TIAssetContentItem* _staticDictionaryAsset;
	TIAssetContentItem* _deltaDictionaryAsset;
	TIAssetContentItem* _phraseDictionaryAsset;
	NSArray* _languageModelAssets;
	long long _userInterfaceIdiom;

}

@property (nonatomic,readonly) TIKeyboardInputManagerConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (assign,getter=isWordLearningEnabled,nonatomic) BOOL wordLearningEnabled;                    //@synthesize wordLearningEnabled=_wordLearningEnabled - In the implementation block
@property (nonatomic,readonly) TIRevisionHistory * revisionHistory;                                    //@synthesize revisionHistory=_revisionHistory - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * autocorrectionHistory;                                //@synthesize autocorrectionHistory=_autocorrectionHistory - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * recentAutocorrections;                                //@synthesize recentAutocorrections=_recentAutocorrections - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * recentPredictiveInputSelections;                      //@synthesize recentPredictiveInputSelections=_recentPredictiveInputSelections - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * rejectedAutocorrections;                              //@synthesize rejectedAutocorrections=_rejectedAutocorrections - In the implementation block
@property (nonatomic,readonly) CPLRUDictionary * autocorrectionsSuggestedForCurrentInput;              //@synthesize autocorrectionsSuggestedForCurrentInput=_autocorrectionsSuggestedForCurrentInput - In the implementation block
@property (assign,nonatomic) BOOL isEditingWordPrefix;                                                 //@synthesize isEditingWordPrefix=_isEditingWordPrefix - In the implementation block
@property (nonatomic,retain) TIAutoshiftRegularExpressionLoader * autoshiftRegexLoader;                //@synthesize autoshiftRegexLoader=_autoshiftRegexLoader - In the implementation block
@property (nonatomic,readonly) TITextCheckerExemptions * textCheckerExemptions;                        //@synthesize textCheckerExemptions=_textCheckerExemptions - In the implementation block
@property (nonatomic,readonly) USetRef acceptableCharacterSet;                                         //@synthesize acceptableCharacterSet=_acceptableCharacterSet - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * allowPredictionCharacterSet;                           //@synthesize allowPredictionCharacterSet=_allowPredictionCharacterSet - In the implementation block
@property (nonatomic,readonly) TIAssetContentItem * staticDictionaryAsset;                             //@synthesize staticDictionaryAsset=_staticDictionaryAsset - In the implementation block
@property (nonatomic,readonly) TIAssetContentItem * deltaDictionaryAsset;                              //@synthesize deltaDictionaryAsset=_deltaDictionaryAsset - In the implementation block
@property (nonatomic,readonly) TIAssetContentItem * phraseDictionaryAsset;                             //@synthesize phraseDictionaryAsset=_phraseDictionaryAsset - In the implementation block
@property (nonatomic,readonly) NSArray * languageModelAssets;                                          //@synthesize languageModelAssets=_languageModelAssets - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                                             //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)offlineLearningHandleForInputMode:(id)arg1 ;
-(void)clearHumanReadableTrace;
-(id)humanReadableTrace;
-(void)logToTypologyRecorderWithString:(id)arg1 ;
-(BOOL)isTypologyEnabled;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(id)configurationPropertyList;
-(long long)userInterfaceIdiom;
-(void)dealloc;
-(void)suspend;
-(TIKeyboardInputManagerConfig *)config;
-(void)resume;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(BOOL)usesCandidateSelection;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(id)autocorrection;
-(void)clearInput;
-(void)setWordLearningEnabled:(BOOL)arg1 ;
-(id)inputString;
-(unsigned)inputIndex;
-(BOOL)nextInputWouldStartSentence;
-(id)shadowTyping;
-(unsigned)inputCount;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(id)defaultCandidate;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(id)autocorrectionRecordForWord:(id)arg1 ;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(long long)keyHitTest:(id)arg1 ;
-(id)autocorrectionList;
-(void)setInput:(id)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(BOOL)updateLanguageModelForKeyboardState;
-(CPLRUDictionary *)recentAutocorrections;
-(unsigned)simulateAutoshiftIfNecessaryForFlags:(unsigned)arg1 ;
-(void)setCollatorLocale;
-(id)cannedResponseCandidatesForString:(id)arg1 ;
-(id)sentencePrefixingCharacters;
-(id)wordCharacters;
-(id)phraseCandidateCompletedByWord:(const String*)arg1 allowNoSuggest:(BOOL)arg2 ;
-(id)dictionaryStringForExternalString:(id)arg1 ;
-(void)clearDynamicDictionary;
-(id)indexesOfDuplicatesInCandidates:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const Candidate*)arg2 ;
-(id)dictionaryInputMode;
-(BOOL)shouldAllowContextTokenID:(unsigned)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(void)recordRejectedAutocorrectionForAcceptedText:(id)arg1 ;
-(void)registerKeyArea:(CGRect)arg1 keyCode:(short)arg2 keyString:(const char*)arg3 ;
-(TIRevisionHistory *)revisionHistory;
-(TIAutoshiftRegularExpressionLoader *)autoshiftRegexLoader;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(void)clearKeyAreas;
-(id)terminatorsPrecedingAutospace;
-(BOOL)usesRetrocorrection;
-(void)updateForRevisitedString:(id)arg1 ;
-(void)loadFavoniusLanguageModel;
-(BOOL)hasLegacyInputStem;
-(CPLRUDictionary *)recentPredictiveInputSelections;
-(BOOL)shouldSuppressLearning;
-(id)inputContext;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)sentenceDelimitingCharacters;
-(const USetRef)precomposedCharacterSet;
-(void)syncToLayoutState:(id)arg1 ;
-(TIAssetContentItem *)deltaDictionaryAsset;
-(void)setAutoshiftFromInputContext;
-(void)installTypologyTraceLogger;
-(unsigned)tokenIDForWord:(id)arg1 context:(const unsigned*)arg2 contextLength:(unsigned long long)arg3 createIfNecessary:(BOOL)arg4 ;
-(void)updateInputContext;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(CPLRUDictionary *)autocorrectionHistory;
-(void)enumerateWordSuffixesOfString:(id)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)canComputeSentenceContextForInputStem:(id)arg1 ;
-(void)incrementUnigramCount:(id)arg1 usageFlags:(unsigned)arg2 ;
-(BOOL)canRetrocorrectInputAtIndex:(unsigned)arg1 ;
-(unsigned)tokenIDForWordSeparator:(unsigned short)arg1 ;
-(void)resetRecentMessageCache;
-(id)inputStem;
-(BOOL)shouldExpectSentenceBoundaryAfterContext:(const unsigned*)arg1 contextLength:(unsigned long long)arg2 ;
-(NSCharacterSet *)allowPredictionCharacterSet;
-(BOOL)canStartSentenceAfterString:(id)arg1 ;
-(void)decrementLanguageModelCount:(unsigned)arg1 context:(const unsigned*)arg2 contextLength:(unsigned long long)arg3 ;
-(void)setAutoshiftRegexLoader:(TIAutoshiftRegularExpressionLoader *)arg1 ;
-(id)completionCandidates;
-(BOOL)isEditingExistingWord;
-(void)reconcileCandidates:(vector<KB::Candidate, std::__1::allocator<KB::Candidate> >*)arg1 forTypedString:(String*)arg2 withPhraseCandidate:(Candidate*)arg3 replacing:(const String*)arg4 ;
-(void)refreshInputManagerState;
-(BOOL)canTrimInputAtIndex:(unsigned)arg1 ;
-(void)willChangeToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)updateResponseModelForKeyboardState:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)learnRecentMessageUserIsRespondingTo;
-(void)incrementLanguageModelCount:(unsigned)arg1 context:(const unsigned*)arg2 contextLength:(unsigned long long)arg3 ;
-(BOOL)suggestionBlacklistMatchesStrings:(id)arg1 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(void)decrementUnigramCount:(id)arg1 usageFlags:(unsigned)arg2 ;
-(CPLRUDictionary *)autocorrectionsSuggestedForCurrentInput;
-(void)recordSuggestedAutocorrection:(id)arg1 ;
-(id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(BOOL)arg3 ;
-(unsigned long long)internalIndexOfInputStemSuffix:(id)arg1 ;
-(void)trimInput;
-(BOOL)shouldAutocapitalizePredictionAfterSpace;
-(id)shortcutConversionForDocumentState:(id)arg1 ;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(BOOL)doesComposeText;
-(TIAssetContentItem *)staticDictionaryAsset;
-(USetRef)createAcceptableCharacterSet;
-(void)checkAutocorrectionDictionaries;
-(NSRange)inputStringRangeFromRevisionHistory;
-(id)trimmedInputStem;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(BOOL)nextInputWouldStartSentenceAfterInput:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(void)dropInput;
-(id)candidatesForString:(id)arg1 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(id)internalInputContext;
-(BOOL)spaceAndNextInputWouldStartSentence;
-(LanguageModelContext*)sentenceContextForInputStem:(id)arg1 ;
-(BOOL)acceptsRange:(NSRange)arg1 inString:(id)arg2 ;
-(NSRange)acceptableRangeFromRange:(NSRange)arg1 inText:(id)arg2 withSelectionLocation:(unsigned long long)arg3 ;
-(NSArray *)languageModelAssets;
-(BOOL)shouldGeneratePredictionsForCurrentContext;
-(void)setInputStringFromDocumentState:(id)arg1 ;
-(id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned long long)arg1 ;
-(BOOL)supportsShortcutConversion;
-(BOOL)shouldAllowCorrectionOfAcceptedCandidate:(id)arg1 ;
-(BOOL)isWordLearningEnabled;
-(TIAssetContentItem *)phraseDictionaryAsset;
-(id)pathToDeltaStaticDictionary;
-(unsigned long long)maximumShortcutLengthAllowed;
-(TITextCheckerExemptions *)textCheckerExemptions;
-(id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const Candidate*)arg2 insertingSpace:(BOOL)arg3 sharedPrefixLength:(unsigned long long)arg4 ;
-(id)shortcutCompletionsForDocumentState:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(id)pathToPhraseDictionary;
-(BOOL)shouldSkipShortcutConversionForDocumentState:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(BOOL)shouldInsertSpaceBeforePredictions;
-(id)autocorrectionListForSelectedText;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(BOOL)shouldGenerateSuggestionsForSelectedText;
-(id)extendedAutocorrection:(id)arg1 spanningInputsForCandidates:(id)arg2 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)hasLegacyInputString;
-(id)predictionCandidates;
-(id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(BOOL)arg2 ;
-(NSRange)legacyInputRangeForTokenRange:(NSRange)arg1 ;
-(id)terminatorsDeletingAutospace;
-(void)loadDictionaries;
-(id)terminatorsPreventingAutocorrection;
-(USetRef)acceptableCharacterSet;
-(unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidate:(const Candidate*)arg2 ;
-(void)recordAcceptedAutocorrection:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(id)cannedResponsesToString:(id)arg1 ;
-(CPLRUDictionary *)rejectedAutocorrections;
-(unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidates:(const vector<KB::Candidate, std::__1::allocator<KB::Candidate> >*)arg2 ;
-(NSRange)shortcutSearchRangeForString:(id)arg1 ;
-(void)acceptInput;
-(BOOL)shouldDropInputStem;
-(BOOL)inHardwareKeyboardMode;
-(BOOL)isEditingWordPrefix;
-(TIInputManagerZephyr*)initImplementation;
-(void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1 ;
-(void)refreshDictionaries;
-(void)setIsEditingWordPrefix:(BOOL)arg1 ;
-(void)dropInputPrefix:(unsigned)arg1 ;
-(void)mobileAssetsChanged:(id)arg1 ;
-(id)pathToStaticDictionary;
-(void)updateComposedText;
-(void)releaseDynamicLanguageModel;
-(void)refreshLanguageModelAssets;
-(id)sentenceTrailingCharacters;
@end

