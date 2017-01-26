/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHLegendCellMetrics, NSArray, TSWPParagraphStyle, TSDStroke, TSDShadow, TSCHLegendViewCache;

@interface TSCHLegendModelCache : NSObject {

	TSCHLegendCellMetrics* mMetrics;
	BOOL mLegendOn;
	NSArray* mCells;
	unsigned long long mCellCount;
	TSWPParagraphStyle* mParagraphStyle;
	TSDStroke* mStroke;
	TSDShadow* mShadow;
	id mFill;
	double mOpacity;
	double mHorizontalCellSpacing;
	double mVerticalCellSpacing;
	CGSize mLargestCellSize;
	double mEffectiveStrokeWidth;
	BOOL mReverseSingleColumnLegendOrder;
	double mLastLegendWidth;
	TSCHLegendViewCache* mLastLegendViewCache;
	double mSymbolGap;

}

@property (readonly) BOOL legendOn; 
@property (readonly) unsigned long long cellCount; 
@property (readonly) NSArray * cells; 
@property (readonly) TSWPParagraphStyle * paragraphStyle; 
@property (readonly) TSDStroke * stroke; 
@property (readonly) id fill; 
@property (readonly) TSDShadow * shadow; 
@property (readonly) double opacity; 
@property (readonly) double horizontalCellSpacing; 
@property (readonly) double verticalCellSpacing; 
@property (readonly) double symbolGap; 
@property (readonly) CGSize largestCellSize; 
@property (readonly) double effectiveStrokeWidth; 
@property (readonly) BOOL reverseSingleColumnLegendOrder; 
-(BOOL)reverseSingleColumnLegendOrder;
-(double)effectiveStrokeWidth;
-(BOOL)legendOn;
-(id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2 ;
-(id)viewCacheForWidth:(double)arg1 ;
-(double)symbolGap;
-(double)horizontalCellSpacing;
-(id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2 ;
-(double)verticalCellSpacing;
-(CGSize)largestCellSize;
-(void)dealloc;
-(id)fill;
-(TSDStroke *)stroke;
-(double)opacity;
-(TSDShadow *)shadow;
-(TSWPParagraphStyle *)paragraphStyle;
-(NSArray *)cells;
-(unsigned long long)cellCount;
@end

