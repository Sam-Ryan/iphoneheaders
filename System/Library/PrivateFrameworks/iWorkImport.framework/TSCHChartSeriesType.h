/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSCHChartSeriesType : NSObject {

	NSArray* mSeriesRendererClasses;

}
+(id)stackedColumn3DSeries;
+(id)stackedBar3DSeries;
+(id)pie3DSeries;
+(id)mixedLineSeries;
+(id)mixedAreaSeries;
+(id)mixedColumnSeries;
+(id)scatterSeries;
+(id)bubbleSeries;
+(Class)sceneObjectClass;
+(id)pieSeries;
+(id)columnSeries;
+(id)lineSeries;
+(id)areaSeries;
+(id)stackedColumnSeries;
+(id)stackedBarSeries;
+(id)stackedAreaSeries;
+(id)column3DSeries;
+(id)line3DSeries;
+(id)area3DSeries;
+(id)stackedArea3DSeries;
+(id)bar3DSeries;
+(id)inspectorDefaultLocalizedValueLabelsTabName;
+(id)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+(id)expandProperties:(id)arg1 ;
+(id)styleArchTypes;
+(id)barSeries;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(BOOL)floatValueForLabelExplosion:(float*)arg1 series:(id)arg2 ;
-(BOOL)canUseEstimatedValueLabelsDrawingRect;
-(id)elementBuilder;
-(BOOL)useInBarGapCalculations;
-(unsigned long long)valueDimensions;
-(Class)sceneObjectClass;
-(id)seriesRendererClasses;
-(id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2 ;
-(BOOL)supportsValueLabelsAxisOption;
-(id)axisTypesForValueLabels;
-(BOOL)supportsValueLabelsSeriesName;
-(id)genericToSpecificPropertyMap;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 ;
-(id)legendFillForSeries:(id)arg1 ;
-(BOOL)supportsSeriesFill;
-(BOOL)supportsFillSetFill;
-(BOOL)supportsSymbolDrawing;
-(id)p_supportedSymbolsIfSymbolsSupported;
-(id)p_axisForSeries:(id)arg1 isCategory:(BOOL)arg2 ;
-(int)fillSetFillProperty;
-(BOOL)supportsSetGap;
-(BOOL)supportsBarGap;
-(id)legalChartLabelPositions;
-(id)userInterfaceNameForLabelPosition:(id)arg1 ;
-(unsigned)adjustLabelPosition:(unsigned)arg1 forAxisValue:(double)arg2 intercept:(double)arg3 ;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 forSeries:(id)arg2 ;
-(int)legendBadgeType;
-(id)legendStrokeForSeries:(id)arg1 ;
-(id)propertiesForReferenceColors;
-(id)cdeFillForSeries:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)supportsSeriesGradientFill;
-(BOOL)supportsSeries3DFill;
-(BOOL)supportsSeriesStroke;
-(BOOL)supportsSymbolTypeEditing;
-(id)supportedSymbols;
-(BOOL)supportsShadowOffset;
-(BOOL)supportsSymbolFillForSymbolType:(int)arg1 ;
-(BOOL)supportsLineTypeNone;
-(BOOL)supportsLineConnectionStyle;
-(BOOL)chunkedBuildsIncludeInterceptValues;
-(double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5 ;
-(double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3 ;
-(unsigned long long)seriesIndexForDrawing:(id)arg1 ;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1 ;
-(BOOL)supportsValueLabels;
-(id)valueAxisForSeries:(id)arg1 ;
-(id)coordinateAxisForSeries:(id)arg1 ;
-(id)userInterfaceName;
-(int)defaultSymbolType;
-(id)supportedValueLabelsAxisCombinations;
-(int)specificFillSetFillProperty;
-(id)inspectorLocalizedValueLabelsTabName;
-(id)inspectorLocalizedValueLabelsDisclosureTitle;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVertical;
@end

