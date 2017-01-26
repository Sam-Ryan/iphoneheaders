/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>

@class CALayer, NSMutableDictionary, TSCHMultiDataChartRepElementIndex, NSSet;

@interface TSCHMultiDataChartRep : TSCHChartRep {

	CALayer* mRootLayer;
	CALayer* mElementsContainerLayer;
	BOOL mRenderingBackgroundLayer;
	BOOL mRenderingElementShapeLayer;
	BOOL mRenderingElementLabelsLayer;
	BOOL mRenderingDataSetNameLayer;
	BOOL mRenderingReferenceLineLayer;
	BOOL mAnimatedLayersNeedUpdate;
	BOOL mShouldAnimateLabelsQuickly;
	BOOL mIsAnimatingForBuilds;
	unsigned long long mElementLayersMultiDataSetIndex;
	int mGridDirection;
	NSMutableDictionary* mIndexedElements;
	TSCHMultiDataChartRepElementIndex* mCurrentRepElementIndex;
	CALayer* mDataSetNameLayer;
	CALayer* mReferenceLinesContainerLayer;
	NSSet* mReferenceLinesToRender;
	NSSet* mReferenceLineLabelsSearchSelectionsToRender;
	NSMutableDictionary* mLayerIdToLayerMap;
	NSMutableDictionary* mPreviousOutsideBodyBounds;
	BOOL _shouldDisableMultiDataControls;

}

@property (nonatomic,readonly) BOOL shouldDisableMultiDataControls;              //@synthesize shouldDisableMultiDataControls=_shouldDisableMultiDataControls - In the implementation block
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(void)willBeginZooming;
-(void)didEndZooming;
-(BOOL)isHorizontalChart;
-(id)p_chartModel;
-(id)p_elementLayers;
-(BOOL)needsAnimationForAnimationInfo:(id)arg1 ;
-(id)layerIdToLayerMap;
-(id)previousOutsideBodyBounds;
-(id)imageFromFill:(id)arg1 forResolutionWithBounds:(CGRect)arg2 toRepElementTransform:(CGAffineTransform)arg3 skipIntegral:(BOOL)arg4 returningFillFrame:(CGRect*)arg5 ;
-(BOOL)shouldUseLegendLayerForLayerBasedRep;
-(BOOL)shouldDisableMultiDataControls;
-(void)dealloc;
@end

