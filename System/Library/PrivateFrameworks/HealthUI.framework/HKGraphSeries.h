/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesDataSourceDelegate.h>

@protocol HKSeriesDelegate, HKGraphSeriesAxisScalingRule;
@class NSMutableDictionary, NSNumber, HKPropertyAnimationApplier, HKGraphSeriesDataSource, NSUUID, HKAxis, UIColor, NSString;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate> {

	BOOL _dirty;
	SCD_Struct_HK7 _selectedPointPath;
	NSMutableDictionary* _cachedCoordinateListsByBlockPath;
	NSMutableDictionary* _cachedDataBlocksByBlockPath;
	NSNumber* _closestSelectedXCoordinate;
	HKPropertyAnimationApplier* _animationApplier;
	BOOL _allowsSelection;
	HKGraphSeriesDataSource* _dataSource;
	id<HKSeriesDelegate> _delegate;
	double _alpha;
	double _offscreenIndicatorAlpha;
	NSUUID* _UUID;
	HKAxis* _yAxis;
	id<HKGraphSeriesAxisScalingRule> _axisScalingRule;
	UIColor* _offScreenIndicatorColor;

}

@property (nonatomic,retain) HKGraphSeriesDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<HKSeriesDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double alpha;                                                  //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double offscreenIndicatorAlpha;                                //@synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                               //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL allowsSelection;                                          //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (nonatomic,copy) HKAxis * yAxis;                                                  //@synthesize yAxis=_yAxis - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesAxisScalingRule> axisScalingRule;              //@synthesize axisScalingRule=_axisScalingRule - In the implementation block
@property (nonatomic,retain) UIColor * offScreenIndicatorColor;                             //@synthesize offScreenIndicatorColor=_offScreenIndicatorColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(HKGraphSeriesDataSource *)arg1 ;
-(void)setDelegate:(id<HKSeriesDelegate>)arg1 ;
-(void)dealloc;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(id)init;
-(HKGraphSeriesDataSource *)dataSource;
-(id<HKSeriesDelegate>)delegate;
-(void)_setDirty;
-(NSUUID *)UUID;
-(BOOL)isHighlighted;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)allowsSelection;
-(void)autoscaleYAxisWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(long long)arg3 chartRect:(CGRect)arg4 animated:(BOOL)arg5 ;
-(id)_valueRangeForYAxisWithXAxisRange:(id)arg1 xAxis:(id)arg2 dateZoom:(long long)arg3 ;
-(id)_dataBlockForBlockPath:(SCD_Struct_HK6)arg1 ;
-(void)_enumeratePathIndexesInDateRange:(id)arg1 zoomLevel:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(CGRect)arg3 contentOffset:(CGPoint)arg4 ;
-(CGAffineTransform)coordinateTransformForChartRect:(CGRect)arg1 xAxisTransform:(CGAffineTransform)arg2 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(void)enumerateCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 roundToViewScale:(BOOL)arg6 rejectPointsOutOfChartRect:(BOOL)arg7 block:(/*^block*/id)arg8 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(CGRect)arg2 contentOffset:(CGPoint)arg3 zoomScale:(double)arg4 ;
-(id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3 ;
-(id)_cachedCoordinatesForBlockPath:(SCD_Struct_HK6)arg1 ;
-(id)_coordinatesForBlockPath:(SCD_Struct_HK6)arg1 xAxis:(id)arg2 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK6)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)_cacheCoordinates:(id)arg1 forBlockPath:(SCD_Struct_HK6)arg2 ;
-(void)selectPathAtPoint:(SCD_Struct_HK8)arg1 closestXCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)enumerateCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 roundToViewScale:(BOOL)arg6 block:(/*^block*/id)arg7 ;
-(void)dataSourceDidUpdateCache:(id)arg1 ;
-(UIColor *)offScreenIndicatorColor;
-(void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(long long)arg3 chartRect:(CGRect)arg4 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)drawWithChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(CGAffineTransform)arg6 inContext:(CGContextRef)arg7 secondaryRenderContext:(id)arg8 ;
-(BOOL)containsCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 ;
-(void)_sendInvalidateToDelegate;
-(SCD_Struct_HK8)selectedPointPath;
-(id)closestSelectedXCoordinate;
-(void)deselectPath;
-(double)distanceFromTouchPoint:(CGPoint)arg1 inChartRect:(CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(CGPoint)arg5 xAxisTransform:(CGAffineTransform)arg6 ;
-(double)offscreenIndicatorAlpha;
-(void)setOffscreenIndicatorAlpha:(double)arg1 ;
-(HKAxis *)yAxis;
-(void)setYAxis:(HKAxis *)arg1 ;
-(id<HKGraphSeriesAxisScalingRule>)axisScalingRule;
-(void)setAxisScalingRule:(id<HKGraphSeriesAxisScalingRule>)arg1 ;
-(void)setOffScreenIndicatorColor:(UIColor *)arg1 ;
@end

