/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPLayoutTarget.h>
#import <iWorkImport/TSWPLayoutOwner.h>
#import <iWorkImport/TSWPColumnMetrics.h>

@protocol TSWPTextDelegate;
@class TSWPListStyle, TSWPColumnStyle, TSUColor, TSWPStorage, TSWPTextParentInfo, TSWPTextParentLayout, NSMutableArray, NSObject, TSWPParagraphStyle, TSULocale, NSString, TSDCanvas, TSDLayout, TSWPPadding;

@interface TSWPText : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics> {

	TSWPListStyle* _listStyle;
	TSWPColumnStyle* _columnStyle;
	TSUColor* _textColorOverride;
	TSWPStorage* _storage;
	CGSize _minSize;
	CGSize _maxSize;
	unsigned long long _pageNumber;
	unsigned long long _pageCount;
	int _flags;
	CGPoint _anchor;
	int _naturalAlignment;
	int _naturalDirection;
	TSWPTextParentInfo* _parentInfo;
	TSWPTextParentLayout* _parentLayout;
	NSMutableArray* _columns;
	NSObject*<TSWPTextDelegate> _delegate;
	TSWPParagraphStyle* _paragraphStyle;

}

@property (assign,nonatomic) NSObject*<TSWPTextDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle;                                  //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (nonatomic,retain) TSUColor * textColorOverride;                                           //@synthesize textColorOverride=_textColorOverride - In the implementation block
@property (nonatomic,readonly) TSULocale * locale; 
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
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment;                                                 //@synthesize naturalAlignment=_naturalAlignment - In the implementation block
@property (nonatomic,readonly) int naturalDirection;                                                 //@synthesize naturalDirection=_naturalDirection - In the implementation block
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
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(id)initWithParagraphStyle:(id)arg1 ;
-(id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 ;
-(void)setTextColorOverride:(TSUColor *)arg1 ;
-(id)layoutText:(id)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 anchor:(CGPoint)arg4 flags:(int)arg5 ;
-(id)layoutTextStorage:(id)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 anchor:(CGPoint)arg4 pageNumber:(unsigned long long)arg5 pageCount:(unsigned long long)arg6 flags:(int)arg7 ;
-(void)drawColumn:(id)arg1 selection:(id)arg2 inContext:(CGContextRef)arg3 isFlipped:(BOOL)arg4 viewScale:(double)arg5 ;
-(BOOL)textIsVertical;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(CGSize)measureText:(id)arg1 ;
-(id)layoutText:(id)arg1 kind:(int)arg2 minSize:(CGSize)arg3 maxSize:(CGSize)arg4 anchor:(CGPoint)arg5 flags:(int)arg6 ;
-(id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 alignmentForNaturalAlignment:(int)arg3 naturalDirection:(int)arg4 ;
-(BOOL)forceWesternLineBreaking;
-(void)drawText:(id)arg1 inContext:(CGContextRef)arg2 minSize:(CGSize)arg3 maxSize:(CGSize)arg4 anchor:(CGPoint)arg5 flags:(int)arg6 viewScale:(double)arg7 ;
-(void)drawColumn:(id)arg1 inContext:(CGContextRef)arg2 isFlipped:(BOOL)arg3 viewScale:(double)arg4 ;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(unsigned)autosizeFlags;
-(id)validatedLayoutForInlineDrawable:(id)arg1 ;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(id)textWrapper;
-(TSUColor *)textColorOverride;
-(id)currentInlineDrawableLayouts;
-(double)maxAnchorY;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(void)addAttachmentLayout:(id)arg1 ;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(BOOL)isLastTarget;
-(int)naturalAlignment;
-(BOOL)isLayoutOffscreen;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 alignmentForNaturalAlignment:(int)arg4 naturalDirection:(int)arg5 ;
-(void)p_setParentLayoutMaximumFrameSizeForChildren;
-(id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 ;
-(id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 ;
-(id)layoutTextStorage:(id)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 anchor:(CGPoint)arg4 flags:(int)arg5 ;
-(void)setDelegate:(NSObject*<TSWPTextDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<TSWPTextDelegate>)delegate;
-(CGSize)maxSize;
-(TSWPPadding *)layoutMargins;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(CGSize)minSize;
-(unsigned long long)pageCount;
-(TSULocale *)locale;
-(int)verticalAlignment;
-(unsigned long long)columnCount;
-(unsigned long long)pageNumber;
-(CGSize)currentSize;
-(TSWPParagraphStyle *)paragraphStyle;
-(NSMutableArray *)columns;
@end

