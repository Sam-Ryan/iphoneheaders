/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView {

	CALayer* _innerCircleLayer;
	BOOL _isShowingStaleColor;
	BOOL _shouldInnerPulse;
	UIImage* _innerImageMask;
	BOOL _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	CALayer* _baseDimmingLayer;

}

@property (assign,nonatomic) BOOL shouldInnerPulse;                           //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (nonatomic,retain) UIImage * innerImageMask;                        //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) BOOL rotateInnerImageToMatchCourse;              //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
+(double)baseDiameter;
+(double)innerDiameter;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)_dealloc;
-(void)_setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setMapRotationRadians:(double)arg1 ;
-(id)_innerPulseAnimation;
-(void)_updateInnerCourseRotation;
-(void)_updatePulseAnimation;
-(void)setShouldInnerPulse:(BOOL)arg1 ;
-(void)_setupLayers;
-(UIImage *)innerImageMask;
-(void)_resetLayerToMatchAccuracyRing;
-(void)_updateInnerMaskLayer;
-(void)_updateInnerImage;
-(BOOL)shouldInnerPulse;
-(void)setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(void)_updateBaseImage;
-(CGColorRef)_accuracyFillColor;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(id)_layerToMatchAccuracyRing;
-(void)setInnerImageMask:(UIImage *)arg1 ;
-(id)_baseDimmingLayer;
-(BOOL)rotateInnerImageToMatchCourse;
-(id)_pulseLayer;
-(void)_updatePulseColor;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(void)_updateAccuracyColors;
-(void)_updateLayers;
-(id)_baseLayer;
-(id)_pulseAnimation;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end
