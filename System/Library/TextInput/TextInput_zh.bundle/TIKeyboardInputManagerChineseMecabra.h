/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerChinese.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class CIMCandidateData, NSOperationQueue, TIConversionHistory, NSString, NSArray, TIMecabraIMLogger, TIKeyboardCandidate;

@interface TIKeyboardInputManagerChineseMecabra : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {

	BOOL _usesCandidateSelection;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	BOOL _isCandidateSelected;
	BOOL _acceptingCandidate;
	BOOL _isInHardwareKeyboardMode;
	BOOL _isInAmbiguousMode;
	BOOL _lockingFirstPinyinSyllable;
	BOOL _filterCandidatesUsingInputIndex;
	BOOL _updateInlineContextWhenAddingCandidate;
	TIConversionHistory* _conversionHistory;
	NSString* _remainingInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;
	NSString* _composedTextBeforeFirstSyllableLocked;
	NSArray* _pinyinSyllableCandidates;
	unsigned long long _selectedPinyinSyllableCandidateIndex;
	TIMecabraIMLogger* _logger;
	NSString* _cachedConvertedInput;
	NSString* _currentClientIdentifier;
	NSString* _currentRecipientIdentifier;
	NSArray* _recentlyCommittedCandidatesForReanalysis;

}

@property (nonatomic,retain) TIMecabraIMLogger * logger;                                              //@synthesize logger=_logger - In the implementation block
@property (getter=isPhraseBoundarySet,nonatomic,readonly) BOOL phraseBoundarySet; 
@property (nonatomic,readonly) TIKeyboardCandidate * candidateForInlineTextSegmentation; 
@property (nonatomic,retain) TIConversionHistory * conversionHistory;                                 //@synthesize conversionHistory=_conversionHistory - In the implementation block
@property (nonatomic,copy) NSString * remainingInput;                                                 //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,readonly) NSString * unconvertedInput; 
@property (nonatomic,readonly) NSString * convertedInput; 
@property (assign,nonatomic) BOOL filterCandidatesUsingInputIndex;                                    //@synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex - In the implementation block
@property (assign,nonatomic) BOOL updateInlineContextWhenAddingCandidate;                             //@synthesize updateInlineContextWhenAddingCandidate=_updateInlineContextWhenAddingCandidate - In the implementation block
@property (nonatomic,copy) NSString * cachedConvertedInput;                                           //@synthesize cachedConvertedInput=_cachedConvertedInput - In the implementation block
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                                //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;                           //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * composedTextBeforeFirstSyllableLocked;                          //@synthesize composedTextBeforeFirstSyllableLocked=_composedTextBeforeFirstSyllableLocked - In the implementation block
@property (nonatomic,retain) NSArray * pinyinSyllableCandidates;                                      //@synthesize pinyinSyllableCandidates=_pinyinSyllableCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedPinyinSyllableCandidateIndex;                 //@synthesize selectedPinyinSyllableCandidateIndex=_selectedPinyinSyllableCandidateIndex - In the implementation block
@property (nonatomic,readonly) BOOL usesGeometryModelData; 
@property (nonatomic,copy) NSString * currentClientIdentifier;                                        //@synthesize currentClientIdentifier=_currentClientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currentRecipientIdentifier;                                     //@synthesize currentRecipientIdentifier=_currentRecipientIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * recentlyCommittedCandidatesForReanalysis;                        //@synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis - In the implementation block
+(Class)wordSearchClass;
+(id)stringFallBackForTenKeyInput:(id)arg1 range:(NSRange)arg2 ;
+(id)ambiguousPinyinSet;
+(id)directlyCommittedCharacterSetForEmptyInline;
+(id)ambiguousDefaults;
-(void)dealloc;
-(void)suspend;
-(id)keyboardBehaviors;
-(void)resume;
-(id)candidateResultSet;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(id)searchStringForMarkedText;
-(id)inputString;
-(BOOL)shouldExtendPriorWord;
-(unsigned)inputIndex;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(unsigned long long)phraseBoundary;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(BOOL)commitsAcceptedCandidate;
-(id)defaultCandidate;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)_nop;
-(id)keyEventMap;
-(BOOL)ignoresDeadKeys;
-(id)locale;
-(void)setInput:(id)arg1 ;
-(TIMecabraIMLogger *)logger;
-(void)setLogger:(TIMecabraIMLogger *)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(void)setCollatorLocale;
-(void)clearDynamicDictionary;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)sentenceDelimitingCharacters;
-(void)syncToLayoutState:(id)arg1 ;
-(BOOL)canStartSentenceAfterString:(id)arg1 ;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(BOOL)doesComposeText;
-(void)checkAutocorrectionDictionaries;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)updateComposedText;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)geometryModelData;
-(id)sortingMethods;
-(void)inputLocationChanged;
-(NSString *)remainingInput;
-(id)keyboardConfigurationLayoutTag;
-(id)rawInputString;
-(id)newInputManagerState;
-(id)didAcceptCandidate:(id)arg1 ;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(BOOL)updateCandidates;
-(BOOL)shouldLookForCompletionCandidates;
-(void)adjustAdaptationContextIfNecessary;
-(void)setRemainingInput:(NSString *)arg1 ;
-(int)inputMethodType;
-(NSString *)convertedInput;
-(NSString *)replacementUnambiguousPinyinSyllable;
-(NSString *)replacedAmbiguousPinyinSyllable;
-(void)setReplacedAmbiguousPinyinSyllable:(NSString *)arg1 ;
-(void)setReplacementUnambiguousPinyinSyllable:(NSString *)arg1 ;
-(void)didDeleteCandidates:(id)arg1 ;
-(TIConversionHistory *)conversionHistory;
-(NSString *)currentClientIdentifier;
-(NSString *)currentRecipientIdentifier;
-(void)setCurrentRecipientIdentifier:(NSString *)arg1 ;
-(void)setCurrentClientIdentifier:(NSString *)arg1 ;
-(void)setLanguageModelAdaptationContext;
-(void)setPinyinSyllableCandidates:(NSArray *)arg1 ;
-(void)setSelectedPinyinSyllableCandidateIndex:(unsigned long long)arg1 ;
-(BOOL)firstSyllableLocked;
-(BOOL)isPhraseBoundarySet;
-(NSString *)unconvertedInput;
-(id)stringByPrependingConvertedCandidateTextToString:(id)arg1 ;
-(void)clearPinyinSyllableSelection;
-(id)internalInputString;
-(TIKeyboardCandidate *)candidateForInlineTextSegmentation;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(void)setUpdateInlineContextWhenAddingCandidate:(BOOL)arg1 ;
-(void)setCachedConvertedInput:(NSString *)arg1 ;
-(BOOL)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1 ;
-(BOOL)isSpecialInput:(id)arg1 ;
-(NSString *)cachedConvertedInput;
-(void)revertToAmbiguousPinyinSyllable;
-(void)setFilterCandidatesUsingInputIndex:(BOOL)arg1 ;
-(id)remapInput:(id)arg1 ;
-(BOOL)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2 ;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(void)addInputToInternal:(id)arg1 ;
-(unsigned long long)internalInputIndex;
-(BOOL)usesGeometryModelData;
-(NSArray *)pinyinSyllableCandidates;
-(unsigned long long)selectedPinyinSyllableCandidateIndex;
-(id)inputStringForSearch;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(unsigned long long)internalInputCount;
-(NSString *)composedTextBeforeFirstSyllableLocked;
-(BOOL)generateReanalysisCandidatesIfAppropriate;
-(BOOL)hasExtensionEmojiCandidates;
-(id)phoneticSortingMethod;
-(id)stringByStrippingConvertedCandidateTextFromString:(id)arg1 ;
-(void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)setComposedTextBeforeFirstSyllableLocked:(NSString *)arg1 ;
-(void)addCandidateToAdaptationContext:(void*)arg1 ;
-(NSArray *)recentlyCommittedCandidatesForReanalysis;
-(void)setRecentlyCommittedCandidatesForReanalysis:(NSArray *)arg1 ;
-(void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)filterCandidatesUsingInputIndex;
-(id)segmentedPinyinStringFromString:(id)arg1 ;
-(void)loadAddressBook;
-(void)setConversionHistory:(TIConversionHistory *)arg1 ;
-(BOOL)updateInlineContextWhenAddingCandidate;
@end

