/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextInputAdditions.h>

@protocol UITextInputDelegate, UITextInput, UITextInputControllerDelegate;
@class _UITextKitTextRange, _UITextInputControllerTokenizer, NSLayoutManager, NSHashTable, _UITextServiceSession, UITextInputTraits, NSArray, UIView, _UITextUndoManager, _UITextUndoOperationTyping, UITextChecker, NSSet, _UIDictationAttachment, NSDictionary, NSString, UITextRange, UITextPosition;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions> {

	id<UITextInputDelegate> _inputDelegate;
	_UITextKitTextRange* _selectedTextRange;
	_UITextInputControllerTokenizer* _tokenizer;
	NSLayoutManager* _layoutManager;
	NSHashTable* _observedScrollViews;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextInputTraits* _textInputTraits;
	NSRange _markedTextRange;
	NSRange _markedTextSelection;
	struct {
		unsigned delegateRespondsToTextInputShouldBeginEditing : 1;
		unsigned delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1;
		unsigned delegateRespondsToTextInputDidChange : 1;
		unsigned delegateRespondsToTextInputDidChangeSelection : 1;
		unsigned delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1;
		unsigned delegateRespondsToTextInputEditorDidChangeSelection : 1;
		unsigned delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1;
		unsigned textOrSelectionChangeOriginatesWithKeyboard : 1;
		unsigned showingTextStyleOptions : 1;
		unsigned undoRedoInProgress : 1;
		unsigned textOrSelectionChangeOriginatesWithMarkedText : 1;
		unsigned nextSelectionChangeMustUpdate : 1;
		unsigned hasTextAlternatives : 1;
		unsigned suppressDelegateChangeNotifications : 1;
	}  _tiFlags;
	NSArray* _extraItemsBeforeTextStyleOptions;
	UIView*<UITextInput> _firstTextView;
	_UITextUndoManager* _undoManager;
	_UITextUndoOperationTyping* _undoOperationForCoalescing;
	UITextChecker* _textChecker;
	NSSet* _whitelistedTypingAttributes;
	_UIDictationAttachment* _dictationPlaceholder;
	BOOL _allowsEditingTextAttributes;
	BOOL _continuousSpellCheckingEnabled;
	NSDictionary* _emptyStringAttributes;
	NSDictionary* _typingAttributes;
	id<UITextInputControllerDelegate> _delegate;
	NSRange _previousSelectedRange;

}

@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes;                                                                                            //@synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributes;                                                                                               //@synthesize typingAttributes=_typingAttributes - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutManager * layoutManager;                                                                                      //@synthesize layoutManager=_layoutManager - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInputControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL continuousSpellCheckingEnabled;                                                                                         //@synthesize continuousSpellCheckingEnabled=_continuousSpellCheckingEnabled - In the implementation block
@property (setter=_setWhitelistedTypingAttributes:,getter=_whitelistedTypingAttributes,nonatomic,copy) NSSet * _whitelistedTypingAttributes; 
@property (assign,nonatomic) NSRange previousSelectedRange;                                                                                               //@synthesize previousSelectedRange=_previousSelectedRange - In the implementation block
@property (setter=_setEmptyStringAttributes:,getter=_emptyStringAttributes,nonatomic,copy) NSDictionary * emptyStringAttributes;                          //@synthesize emptyStringAttributes=_emptyStringAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
-(CGRect)_selectionClipRect;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(id)_wordContainingCaretSelection;
-(unsigned)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentStart;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3 ;
-(BOOL)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(long long)_selectionAffinity;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2 ;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2 ;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(id)_newPhraseBoundaryGestureRecognizer;
-(BOOL)_usesAsynchronousProtocol;
-(BOOL)_hasMarkedText;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(long long)_opposingDirectionFromDirection:(long long)arg1 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(BOOL)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(BOOL)_selectionAtWordStart;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(void)setDelegate:(id<UITextInputControllerDelegate>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<UITextInputControllerDelegate>)delegate;
-(id)undoManager;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)isEditable;
-(id)_parentScrollView;
-(BOOL)isEditing;
-(NSLayoutManager *)layoutManager;
-(void)_performWhileSuppressingDelegateNotifications:(/*^block*/id)arg1 ;
-(id)initWithLayoutManager:(id)arg1 ;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(id)interactionAssistant;
-(id)selectionView;
-(NSRange)selectedRange;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(void)_invalidateEmptyStringAttributes;
-(void)didEndEditing;
-(NSDictionary *)typingAttributes;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(void)delegateWillChangeAttributedText:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)addTextAlternativesDisplayStyleToRange:(NSRange)arg1 ;
-(id)_filteredAttributedTextInRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)drawsAsAtom;
-(int)atomStyle;
-(BOOL)hasText;
-(void)clearText;
-(id)_layoutManager;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(UITextRange *)selectedTextRange;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)_selectionGeometryChanged;
-(id)_textStorage;
-(NSRange)markedRange;
-(BOOL)_hasDictationPlaceholder;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)selectionAffinity;
-(void)selectAll;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(void)selectAll:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_lookup:(CGPoint)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)updateSelection;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(void)_resetShowingTextStyle:(id)arg1 ;
-(BOOL)_isDisplayingLookupViewController;
-(id)_firstTextView;
-(void)_setInternalGestureRecognizers;
-(CGRect)_caretRect;
-(NSRange)_selectedRange;
-(id)textChecker;
-(void)_addToTypingAttributes:(id)arg1 value:(id)arg2 ;
-(void)_setWhitelistedTypingAttributes:(id)arg1 ;
-(NSSet *)_whitelistedTypingAttributes;
-(BOOL)_canHandleResponderAction:(SEL)arg1 ;
-(BOOL)_shouldHandleResponderAction:(SEL)arg1 ;
-(NSRange)_rangeForBackwardsDelete;
-(void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(NSRange)arg3 resultLength:(unsigned long long*)arg4 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2 ;
-(BOOL)_mightHaveSelection;
-(void)_removeDefinitionController;
-(void)_clearSelectionUI;
-(void)stopCoalescing;
-(void)_detachFromLayoutManager;
-(void)_commonInitWithLayoutManager:(id)arg1 ;
-(void)_textContainerDidChangeView:(id)arg1 ;
-(void)setPreviousSelectedRange:(NSRange)arg1 ;
-(void)_updateFirstTextView;
-(void)_cancelDictationIfNecessaryForChangeInRange:(NSRange)arg1 ;
-(void)_setupTextContainerView:(id)arg1 ;
-(void)_teardownTextContainerView:(id)arg1 ;
-(void)_setEmptyStringAttributes:(id)arg1 ;
-(void)_forceUnmarkTextDueToEditing;
-(void)_ensureSelectionValid;
-(void)_setSelectedTextRange:(id)arg1 ;
-(void)_sendDelegateChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2 ;
-(void)_coordinateSelectionChange:(/*^block*/id)arg1 ;
-(void)_invalidateTypingAttributes;
-(void)_setSelectedRange:(NSRange)arg1 ;
-(void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2 ;
-(id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(NSRange)arg2 ;
-(NSRange)nsRangeForTextRange:(id)arg1 ;
-(void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(NSRange)arg3 replacementText:(id)arg4 ;
-(void)_insertText:(id)arg1 fromKeyboard:(BOOL)arg2 ;
-(void)checkSpellingForSelectionChangeIfNecessary;
-(void)removeAlternativesForCurrentWord;
-(void)_insertAttributedText:(id)arg1 fromKeyboard:(BOOL)arg2 ;
-(void)removeSpellingMarkersForCurrentWord;
-(void)removeSpellingMarkersFromWordInRange:(id)arg1 ;
-(BOOL)continuousSpellCheckingEnabled;
-(NSRange)previousSelectedRange;
-(void)checkSpellingForWordInRange:(id)arg1 ;
-(BOOL)_shouldConsiderTextViewForGeometry:(id)arg1 ;
-(unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)arg1 downstream:(BOOL)arg2 ;
-(CGRect)_caretRectForOffset:(unsigned long long)arg1 ;
-(id)_rectsForRange:(NSRange)arg1 ;
-(id)_characterPositionForPoint:(CGPoint)arg1 ;
-(id)_attributesForReplacementInRange:(NSRange)arg1 ;
-(id)_emptyStringAttributes;
-(id)_fixupTypingAttributeForAttributes:(id)arg1 ;
-(void)_undoManagerWillUndo:(id)arg1 ;
-(BOOL)isCoalescing;
-(BOOL)_undoRedoInProgress;
-(void)coalesceInTextView:(id)arg1 affectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(id)textRangeForNSRange:(NSRange)arg1 ;
-(id)_selectedText;
-(void)removeTextStylingFromString:(id)arg1 ;
-(void)_copySelectionToClipboard;
-(BOOL)_delegateShouldChangeTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(void)_removeShareController;
-(void)_removeShortcutController;
-(void)_toggleFontTrait:(int)arg1 ;
-(void)_selectionDidScroll:(id)arg1 ;
-(void)preheatTextChecker;
-(void)_ensureSelectionVisible;
-(void)undoWillChangeText;
-(void)undoDidChangeText;
-(void)_setUndoRedoInProgress:(BOOL)arg1 ;
-(void)changeWillBeUndone:(id)arg1 ;
-(id)_selectedAttributedText;
-(BOOL)_isSecureTextEntry;
@end

