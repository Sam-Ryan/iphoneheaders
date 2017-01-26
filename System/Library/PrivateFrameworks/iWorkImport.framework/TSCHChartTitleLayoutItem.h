/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSString;

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem {

	double mChartBodyWidth;
	NSString* mEditedString;
	double mMinHitSize;

}

@property (assign,nonatomic) double chartBodyWidth; 
@property (nonatomic,copy) NSString * editedString; 
@property (assign,nonatomic) double minHitSize; 
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(CGAffineTransform)transformForRenderingRange:(NSRange)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(void)setEditedString:(NSString *)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(void)setChartBodyWidth:(double)arg1 ;
-(CGSize)calcMinSizeForModel:(id)arg1 ;
-(id)p_titleParagraphStyle;
-(double)chartBodyWidth;
-(CGAffineTransform)p_transformForRenderingRangePtr:(NSRange*)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(double)minHitSize;
-(NSString *)editedString;
-(void)setMinHitSize:(double)arg1 ;
-(void)dealloc;
-(id)titleText;
-(id)initWithParent:(id)arg1 ;
@end

