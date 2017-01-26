/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapLayer:(id)arg1 flyoverModeWillChange:(int)arg2;
-(void)mapLayerDidChangeVisibleRegion:(id)arg1;
-(void)mapLayerDidDraw:(id)arg1;
-(void)mapLayerDidStartLoadingTiles:(id)arg1;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1;
-(void)mapLayer:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 didBecomePitched:(BOOL)arg2;
-(id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapLayer:(id)arg1 flyoverModeDidChange:(int)arg2;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
-(void)mapLayerWillStartFlyoverTour:(id)arg1;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
-(void)mapLayerDidFinishInitialTrackingAnimation:(id)arg1;
-(void)mapLayerDidReloadStylesheet:(id)arg1;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
-(void)mapLayer:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
-(void)mapLayer:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
-(void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(SCD_Struct_MK3)arg2;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
-(void)mapLayer:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
-(void)mapLayerLabelsDidLayout:(id)arg1;

@end

