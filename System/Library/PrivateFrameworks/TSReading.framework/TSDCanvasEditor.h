/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCanvasEditor.h>
@class TSDInteractiveCanvasController, TSDCanvasEditorHelper, TSPObject;


@protocol TSDCanvasEditor <TSDEditor,TSDSubcommandProvider,TSDTextInput>
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDCanvasEditorHelper * canvasEditorHelper; 
@property (nonatomic,readonly) TSKSelection*<TSDCanvasSelection> canvasSelection; 
@property (nonatomic,readonly) TSPObject * modelForSelection; 
@optional
-(void)setExteriorTextWrap:(id)arg1 forInfos:(id)arg2;
-(void)setExteriorTextWrapMargin:(double)arg1 forInfos:(id)arg2;
-(id)exteriorTextWrapForInfos:(id)arg1;

@required
+(id)canvasSelectionWithInfos:(id)arg1;
+(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
-(TSKSelection*<TSDCanvasSelection>)canvasSelection;
-(void)repWasCreated:(id)arg1;
-(id)initWithInteractiveCanvasController:(id)arg1;
-(void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
-(void)canvasInfosDidChange;
-(id)canvasSelectionWithInfos:(id)arg1;
-(void)setSelectionToRep:(id)arg1;
-(void)setSelectionToInfo:(id)arg1;
-(id)editorToPopToOnEndEditing;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(BOOL)isRepSelectable:(id)arg1;
-(BOOL)isSelectedInfo:(id)arg1;
-(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
-(TSDCanvasEditorHelper *)canvasEditorHelper;
-(BOOL)canvasEditorCanDeleteWithSender:(id)arg1;
-(BOOL)canvasEditorCanCopyWithSender:(id)arg1;
-(unsigned long long)countOfDrawables;
-(BOOL)canGroupDrawable:(id)arg1;
-(void)setSelectionToInfos:(id)arg1;
-(void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
-(void)connectWithConnectionLine:(id)arg1;
-(BOOL)shouldUseAlternateSelectionHighlight;
-(BOOL)canvasEditorCanCutWithSender:(id)arg1;
-(BOOL)canvasEditorCanDuplicateWithSender:(id)arg1;
-(BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1;
-(BOOL)canvasEditorCanSelectAllWithSender:(id)arg1;
-(BOOL)canvasEditorCanGroupWithSender:(id)arg1;
-(BOOL)canvasEditorCanUngroupWithSender:(id)arg1;
-(BOOL)shouldPushNewEditorForNewSelection;
-(TSPObject *)modelForSelection;
-(void)selectAll:(id)arg1;
-(void)copy:(id)arg1;
-(void)select:(id)arg1;
-(id)drawables;
-(void)teardown;

@end


@protocol TSDArrangeInspectorDelegate, TSDInlineFloatingWrapInspectorDelegate;
@class TSDInteractiveCanvasController, TSDCanvasEditorHelper, TSPObject, TSDCanvasSelection, NSObject, UIView, NSSet, NSString, TSKSelection;

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor> {

	TSDInteractiveCanvasController* mInteractiveCanvasController;
	TSDCanvasEditorHelper* mCanvasEditorHelper;
	TSDCanvasSelection* mSelection;
	NSObject*<TSDArrangeInspectorDelegate> mZOrderArranger;
	NSObject*<TSDInlineFloatingWrapInspectorDelegate> mInlineFloatingEditor;
	BOOL mPreventImageDataReplace;
	UIView* mInputView;

}

@property (nonatomic,readonly) NSSet * infosForSelectAllInRoot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSelection * selection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
@property (nonatomic,retain,readonly) TSKSelection*<TSDTextSelection> textInputSelection; 
@property (nonatomic,readonly) NSRange markedRange; 
@property (retain,readonly) UIView * inputView; 
@property (retain,readonly) UIView * inputAccessoryView; 
@property (readonly) BOOL wantsRawArrowKeyEvents; 
@property (nonatomic,retain) TSKSelection*<TSDTextSelection> selectionForArrowKeys; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDCanvasEditorHelper * canvasEditorHelper; 
@property (nonatomic,readonly) TSKSelection*<TSDCanvasSelection> canvasSelection; 
@property (nonatomic,readonly) TSPObject * modelForSelection; 
+(id)canvasSelectionWithInfos:(id)arg1 ;
+(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2 ;
+(Class)canvasEditorHelperClass;
+(BOOL)physicalKeyboardIsSender:(id)arg1 ;
+(/*^block*/id)spatialInfoComparator;
-(id)pasteboardController;
-(TSKSelection*<TSDCanvasSelection>)canvasSelection;
-(void)repWasCreated:(id)arg1 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(BOOL)wantsKeyboard;
-(BOOL)textIsVerticalAtCharIndex:(unsigned long long)arg1 ;
-(void)extendSelectionLeft;
-(void)extendSelectionRight;
-(id)textColorAtCharIndex:(unsigned long long)arg1 ;
-(id)textFontAtCharIndex:(unsigned long long)arg1 ;
-(id)selectionWithRange:(NSRange)arg1 ;
-(void)setSelectionWithRange:(NSRange)arg1 endOfLine:(BOOL)arg2 ;
-(void)clearMarkedRange;
-(BOOL)isCharIndex:(unsigned long long)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4 ;
-(unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double*)arg4 ;
-(BOOL)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(BOOL)arg2 ;
-(TSKSelection*<TSDTextSelection>)textInputSelection;
-(BOOL)wantsRawArrowKeyEvents;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canAddOrShowComment;
-(void)canvasInfosDidChange;
-(id)canvasSelectionWithInfos:(id)arg1 ;
-(void)setSelectionToRep:(id)arg1 ;
-(void)setSelectionToInfo:(id)arg1 ;
-(id)editorToPopToOnEndEditing;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(BOOL)isRepSelectable:(id)arg1 ;
-(BOOL)isSelectedInfo:(id)arg1 ;
-(id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2 ;
-(TSDCanvasEditorHelper *)canvasEditorHelper;
-(BOOL)canDeleteComment;
-(id)p_filterNonDisplayedInfos:(id)arg1 ;
-(BOOL)canvasEditorCanDeleteWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanCopyWithSender:(id)arg1 ;
-(BOOL)canCopyStyle;
-(unsigned long long)countOfDrawables;
-(BOOL)canSelectAllWithSender:(id)arg1 ;
-(BOOL)canGroupDrawable:(id)arg1 ;
-(BOOL)canGroupWithSender:(id)arg1 ;
-(BOOL)canUngroupWithSender:(id)arg1 ;
-(NSSet *)infosForSelectAllInRoot;
-(void)setSelectionToInfos:(id)arg1 ;
-(id)p_spatiallySortedDrawables;
-(id)p_nextInfoInTabSequence:(int)arg1 ;
-(void)copyToPasteboard:(id)arg1 withSender:(id)arg2 ;
-(void)connectWithConnectionLine:(id)arg1 ;
-(BOOL)shouldUseAlternateSelectionHighlight;
-(BOOL)canvasEditorCanCutWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanDuplicateWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanSelectAllWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanGroupWithSender:(id)arg1 ;
-(BOOL)canvasEditorCanUngroupWithSender:(id)arg1 ;
-(BOOL)shouldPushNewEditorForNewSelection;
-(TSPObject *)modelForSelection;
-(Class)editorClassForSelection;
-(void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2 ;
-(unsigned long long)textLength;
-(void)insertBacktab:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)dealloc;
-(id)keyCommands;
-(NSRange)editRange;
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
-(void)endEditing;
-(id)textInRange:(NSRange)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)replaceRange:(NSRange)arg1 withText:(id)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(CGRect)firstRectForRange:(NSRange)arg1 ;
-(id)selectionRectsForRange:(NSRange)arg1 ;
-(NSRange)markedRange;
-(long long)returnKeyType;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(void)selectAll:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)select:(id)arg1 ;
-(id)drawables;
-(void)teardown;
-(id)documentRoot;
@end

