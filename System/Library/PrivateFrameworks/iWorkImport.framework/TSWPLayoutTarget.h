/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableArray, TSDCanvas, TSDLayout;


@protocol TSWPLayoutTarget <NSObject>
@property (nonatomic,retain,readonly) NSMutableArray * columns; 
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
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment; 
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
@optional
-(CGRect)maskRect;
-(void)setAnchoredDrawablesForRelayout:(id)arg1;
-(NSMutableArray *)anchoredDrawablesForRelayout;
-(BOOL)shouldHyphenate;
-(BOOL)siblingTargetIsManipulatingDrawable:(id)arg1;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(CGPoint*)anchoredAttachmentPositionFromLayoutPosition:(CGPoint)arg1;
-(CGPoint*)layoutPositionFromAnchoredAttachmentPosition:(CGPoint)arg1;
-(CFLocaleRef)hyphenationLocale;
-(id)interiorClippingPath;
-(BOOL)invalidateForPageCountChange;
-(CGPoint*)layoutPositionFromInlineAttachmentPosition:(CGPoint)arg1;
-(TSDCanvas *)canvas;
-(unsigned)pageIndex;

@required
-(BOOL)textIsVertical;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1;
-(unsigned)autosizeFlags;
-(id)validatedLayoutForInlineDrawable:(id)arg1;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(id)currentInlineDrawableLayouts;
-(double)maxAnchorY;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(void)addAttachmentLayout:(id)arg1;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(BOOL)isLastTarget;
-(int)naturalAlignment;
-(BOOL)isLayoutOffscreen;
-(CGRect*)targetRectForCanvasRect:(CGRect)arg1;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(CGSize)maxSize;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(CGSize)minSize;
-(unsigned long long)pageCount;
-(int)verticalAlignment;
-(unsigned long long)pageNumber;
-(CGSize)currentSize;
-(NSMutableArray *)columns;

@end

