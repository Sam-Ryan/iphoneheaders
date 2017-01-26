/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>
#import <TSReading/TSWPLayoutTarget.h>
#import <TSReading/TSWPLayoutOwner.h>

@class NSMutableArray, TSDCanvas, TSDLayout, TSWPLayoutManager, TSDBezierPath, NSString;

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner> {

	TSWPLayoutManager* _layoutManager;
	NSMutableArray* _columns;
	BOOL _textLayoutValid;

}

@property (nonatomic,readonly) TSWPLayoutManager * layoutManager; 
@property (nonatomic,readonly) BOOL textLayoutValid; 
@property (nonatomic,readonly) TSDBezierPath * interiorClippingPath; 
@property (nonatomic,readonly) BOOL shouldWrapAroundExternalDrawables; 
@property (nonatomic,readonly) unsigned lineCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSMutableArray * columns;                                      //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* previousTargetTopicNumbers; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer; 
@property (nonatomic,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject*<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) unsigned verticalAlignment; 
@property (nonatomic,readonly) unsigned naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) double maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@property (nonatomic,readonly) BOOL allowsLastLineTruncation; 
@property (nonatomic,readonly) unsigned maxLineCount; 
@property (nonatomic,readonly) BOOL ignoresEquationAlignment; 
@property (nonatomic,readonly) BOOL allowsDescendersToClip; 
@property (nonatomic,readonly) BOOL pushAscendersIntoColumn; 
@property (nonatomic,readonly) BOOL alwaysAllowWordSplit; 
-(BOOL)textLayoutValid;
-(void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/id)arg1 ;
-(Class)repClassOverride;
-(id)dependentLayouts;
-(void)invalidateSize;
-(void)parentWillChangeTo:(id)arg1 ;
-(void)parentDidChange;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(id)reliedOnLayouts;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldProvideSizingGuides;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(CGRect)frameForCulling;
-(void)wrappableChildInvalidated:(id)arg1 ;
-(BOOL)textIsVertical;
-(id)initWithInfo:(id)arg1 frame:(CGRect)arg2 ;
-(void)p_invalidateTextLayout;
-(id)p_wpLayoutParent;
-(void*)initialLayoutState;
-(BOOL)p_parentAutosizes;
-(void)p_validateTextLayout;
-(unsigned)autosizeFlags;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(CGRect)p_protectedRectWithinLayoutForSelectionRect:(CGRect)arg1 ;
-(id)p_firstAncestorRespondingToSelector:(SEL)arg1 ;
-(BOOL)isLayoutOffscreen;
-(BOOL)shouldHyphenate;
-(void)invalidateTextLayout;
-(void)invalidateParentForAutosizing;
-(id)textWrapper;
-(CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(BOOL)arg2 ;
-(TSDBezierPath *)interiorClippingPath;
-(BOOL)isLastTarget;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(BOOL)shouldPositionAttachmentsIteratively;
-(unsigned long long)iterativeAttachmentPositioningMaxPassCount;
-(id)layoutForInlineDrawable:(id)arg1 ;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(id)currentInlineDrawableLayouts;
-(id)currentAnchoredDrawableLayouts;
-(void)addAttachmentLayout:(id)arg1 ;
-(BOOL)invalidateForPageCountChange;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(unsigned)naturalAlignment;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(double)maxAnchorY;
-(CGRect)maskRect;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(BOOL)allowsLastLineTruncation;
-(BOOL)ignoresEquationAlignment;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(id)lineHintsForTarget:(id)arg1 ;
-(id)textColorOverride;
-(void)invalidateMaxAutoGrowWidth;
-(void)invalidateForFootnoteNumberingChange;
-(double)baselineForCharIndex:(unsigned)arg1 ;
-(BOOL)shouldWrapAroundExternalDrawables;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(CGSize)maxSize;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(TSWPLayoutManager *)layoutManager;
-(CGSize)minSize;
-(CGRect)rectForSelection:(id)arg1 ;
-(TSDCanvas *)canvas;
-(unsigned long long)pageCount;
-(unsigned)verticalAlignment;
-(void)validate;
-(unsigned long long)pageNumber;
-(CGSize)currentSize;
-(unsigned)lineCount;
-(id)styleProvider;
-(NSMutableArray *)columns;
-(unsigned)maxLineCount;
@end

