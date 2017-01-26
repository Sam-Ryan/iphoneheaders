/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(void)dealloc;
-(NSArray *)candidates;
-(id)keyboardBehaviors;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(unsigned)inputCount;
-(id)defaultCandidate;
-(void)setCandidates:(NSArray *)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(CHRecognizer *)recognizer;
-(void)loadDictionaries;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)inputLocationChanged;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
-(TIHandwritingStrokes *)userDrawing;
-(void)updateCandidates;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
@end

