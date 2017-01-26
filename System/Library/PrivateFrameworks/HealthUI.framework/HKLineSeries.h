/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class NSArray, UIImage;

@interface HKLineSeries : HKGraphSeries {

	NSArray* _unhighlightedPresentationStyles;
	NSArray* _highlightedPresentationStyles;
	UIImage* _selectedPointMarkerImage;

}

@property (nonatomic,retain) NSArray * unhighlightedPresentationStyles;              //@synthesize unhighlightedPresentationStyles=_unhighlightedPresentationStyles - In the implementation block
@property (nonatomic,retain) NSArray * highlightedPresentationStyles;                //@synthesize highlightedPresentationStyles=_highlightedPresentationStyles - In the implementation block
@property (nonatomic,retain) UIImage * selectedPointMarkerImage;                     //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
-(id)init;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK6)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(UIImage *)selectedPointMarkerImage;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 weightedAverageWidth:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(CGRect)arg5 block:(/*^block*/id)arg6 ;
-(void)_enumerateSawToothPathsFromBlockCoordinates:(id)arg1 transform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(CGRect)arg5 handler:(/*^block*/id)arg6 ;
-(void)_enumerateSinePathsFromBlockCoordinates:(id)arg1 transfrom:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(CGRect)arg5 handler:(/*^block*/id)arg6 ;
-(void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(CGRect)arg5 block:(/*^block*/id)arg6 ;
-(id)_currentPresentationStyles;
-(void)_enumeratePathsFromBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 transform:(CGAffineTransform)arg4 presentationStyle:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)_renderLineEndCapsInContext:(CGContextRef)arg1 endCaps:(id)arg2 endCapImage:(id)arg3 ;
-(void)_renderPointMarkersInContext:(CGContextRef)arg1 blockCoordinates:(id)arg2 pointTransform:(CGAffineTransform)arg3 pointMarkerImage:(id)arg4 ;
-(void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 secondaryRenderContext:(id)arg2 pointTransform:(CGAffineTransform)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(CGRect)arg5 ;
-(NSArray *)unhighlightedPresentationStyles;
-(void)setUnhighlightedPresentationStyles:(NSArray *)arg1 ;
-(NSArray *)highlightedPresentationStyles;
-(void)setHighlightedPresentationStyles:(NSArray *)arg1 ;
@end

