/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDCAAnimationContextCacheProtocol;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary, CALayer, CAAnimation;

@interface TSDCAAnimationCache : NSObject {

	NSDictionary* _overrideInitialValuesDict;
	double _animationDuration;
	long long _cacheValuesCount;
	CGPoint* _anchorPointCache;
	double* _anchorPointZCache;
	double* _borderWidthCache;
	CGRect* _boundsCache;
	BOOL* _doubleSidedCache;
	BOOL* _hiddenCache;
	double* _opacityCache;
	CGPoint* _positionCache;
	CATransform3D* _transformCache;
	double* _transformRotationCache;
	double* _transformRotationXCache;
	double* _transformRotationYCache;
	double* _transformRotationZCache;
	double* _transformScaleXCache;
	double* _transformScaleYCache;
	double* _transformScaleXYCache;
	CGPoint* _transformTranslationCache;
	double* _transformTranslationXCache;
	double* _transformTranslationYCache;
	double* _transformTranslationZCache;
	double* _zPositionCache;
	BOOL _anchorPointAnimationExists;
	BOOL _anchorPointZAnimationExists;
	BOOL _borderColorAnimationExists;
	BOOL _borderWidthAnimationExists;
	BOOL _boundsAnimationExists;
	BOOL _contentsAnimationExists;
	BOOL _doubleSidedAnimationExists;
	BOOL _doubleSidedInitialValue;
	BOOL _hiddenAnimationExists;
	BOOL _hiddenInitialValue;
	BOOL _opacityAnimationExists;
	BOOL _positionAnimationExists;
	BOOL _transformAnimationExists;
	BOOL _transformRotationAnimationExists;
	BOOL _transformRotationXAnimationExists;
	BOOL _transformRotationYAnimationExists;
	BOOL _transformRotationZAnimationExists;
	BOOL _transformScaleXAnimationExists;
	BOOL _transformScaleYAnimationExists;
	BOOL _transformScaleXYAnimationExists;
	BOOL _transformTranslationAnimationExists;
	BOOL _transformTranslationXAnimationExists;
	BOOL _transformTranslationYAnimationExists;
	BOOL _transformTranslationZAnimationExists;
	BOOL _zPositionAnimationExists;
	CALayer* _layer;
	CAAnimation* _animation;
	double _anchorPointZInitialValue;
	CGColorRef _borderColorInitialValue;
	double _borderWidthInitialValue;
	CGImageRef _contentsInitialValue;
	double _opacityInitialValue;
	double _transformRotationInitialValue;
	double _transformRotationXInitialValue;
	double _transformRotationYInitialValue;
	double _transformRotationZInitialValue;
	double _transformScaleXInitialValue;
	double _transformScaleYInitialValue;
	double _transformScaleXYInitialValue;
	double _transformTranslationXInitialValue;
	double _transformTranslationYInitialValue;
	double _transformTranslationZInitialValue;
	double _zPositionInitialValue;
	NSDictionary* _initialValues;
	id<TSDCAAnimationContextCacheProtocol> _animationContextCache;
	CGPoint _anchorPointInitialValue;
	CGPoint _positionInitialValue;
	CGPoint _transformTranslationInitialValue;
	CGRect _boundsInitialValue;
	CATransform3D _transformInitialValue;

}

@property (nonatomic,readonly) CALayer * layer;                                                           //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAAnimation * animation;                                                   //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) BOOL anchorPointAnimationExists;                                           //@synthesize anchorPointAnimationExists=_anchorPointAnimationExists - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPointInitialValue;                                           //@synthesize anchorPointInitialValue=_anchorPointInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL anchorPointZAnimationExists;                                          //@synthesize anchorPointZAnimationExists=_anchorPointZAnimationExists - In the implementation block
@property (nonatomic,readonly) double anchorPointZInitialValue;                                           //@synthesize anchorPointZInitialValue=_anchorPointZInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL borderColorAnimationExists;                                           //@synthesize borderColorAnimationExists=_borderColorAnimationExists - In the implementation block
@property (nonatomic,readonly) CGColorRef borderColorInitialValue;                                        //@synthesize borderColorInitialValue=_borderColorInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL borderWidthAnimationExists;                                           //@synthesize borderWidthAnimationExists=_borderWidthAnimationExists - In the implementation block
@property (nonatomic,readonly) double borderWidthInitialValue;                                            //@synthesize borderWidthInitialValue=_borderWidthInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL boundsAnimationExists;                                                //@synthesize boundsAnimationExists=_boundsAnimationExists - In the implementation block
@property (nonatomic,readonly) CGRect boundsInitialValue;                                                 //@synthesize boundsInitialValue=_boundsInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL contentsAnimationExists;                                              //@synthesize contentsAnimationExists=_contentsAnimationExists - In the implementation block
@property (nonatomic,readonly) CGImageRef contentsInitialValue;                                           //@synthesize contentsInitialValue=_contentsInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL doubleSidedAnimationExists;                                           //@synthesize doubleSidedAnimationExists=_doubleSidedAnimationExists - In the implementation block
@property (nonatomic,readonly) BOOL doubleSidedInitialValue;                                              //@synthesize doubleSidedInitialValue=_doubleSidedInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL hiddenAnimationExists;                                                //@synthesize hiddenAnimationExists=_hiddenAnimationExists - In the implementation block
@property (nonatomic,readonly) BOOL hiddenInitialValue;                                                   //@synthesize hiddenInitialValue=_hiddenInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL opacityAnimationExists;                                               //@synthesize opacityAnimationExists=_opacityAnimationExists - In the implementation block
@property (nonatomic,readonly) double opacityInitialValue;                                                //@synthesize opacityInitialValue=_opacityInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL positionAnimationExists;                                              //@synthesize positionAnimationExists=_positionAnimationExists - In the implementation block
@property (nonatomic,readonly) CGPoint positionInitialValue;                                              //@synthesize positionInitialValue=_positionInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformAnimationExists;                                             //@synthesize transformAnimationExists=_transformAnimationExists - In the implementation block
@property (nonatomic,readonly) CATransform3D transformInitialValue;                                       //@synthesize transformInitialValue=_transformInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformRotationAnimationExists;                                     //@synthesize transformRotationAnimationExists=_transformRotationAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationInitialValue;                                      //@synthesize transformRotationInitialValue=_transformRotationInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformRotationXAnimationExists;                                    //@synthesize transformRotationXAnimationExists=_transformRotationXAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationXInitialValue;                                     //@synthesize transformRotationXInitialValue=_transformRotationXInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformRotationYAnimationExists;                                    //@synthesize transformRotationYAnimationExists=_transformRotationYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationYInitialValue;                                     //@synthesize transformRotationYInitialValue=_transformRotationYInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformRotationZAnimationExists;                                    //@synthesize transformRotationZAnimationExists=_transformRotationZAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationZInitialValue;                                     //@synthesize transformRotationZInitialValue=_transformRotationZInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformScaleXAnimationExists;                                       //@synthesize transformScaleXAnimationExists=_transformScaleXAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformScaleXInitialValue;                                        //@synthesize transformScaleXInitialValue=_transformScaleXInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformScaleYAnimationExists;                                       //@synthesize transformScaleYAnimationExists=_transformScaleYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformScaleYInitialValue;                                        //@synthesize transformScaleYInitialValue=_transformScaleYInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformScaleXYAnimationExists;                                      //@synthesize transformScaleXYAnimationExists=_transformScaleXYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformScaleXYInitialValue;                                       //@synthesize transformScaleXYInitialValue=_transformScaleXYInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformTranslationAnimationExists;                                  //@synthesize transformTranslationAnimationExists=_transformTranslationAnimationExists - In the implementation block
@property (nonatomic,readonly) CGPoint transformTranslationInitialValue;                                  //@synthesize transformTranslationInitialValue=_transformTranslationInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformTranslationXAnimationExists;                                 //@synthesize transformTranslationXAnimationExists=_transformTranslationXAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformTranslationXInitialValue;                                  //@synthesize transformTranslationXInitialValue=_transformTranslationXInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformTranslationYAnimationExists;                                 //@synthesize transformTranslationYAnimationExists=_transformTranslationYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformTranslationYInitialValue;                                  //@synthesize transformTranslationYInitialValue=_transformTranslationYInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL transformTranslationZAnimationExists;                                 //@synthesize transformTranslationZAnimationExists=_transformTranslationZAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformTranslationZInitialValue;                                  //@synthesize transformTranslationZInitialValue=_transformTranslationZInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL zPositionAnimationExists;                                             //@synthesize zPositionAnimationExists=_zPositionAnimationExists - In the implementation block
@property (nonatomic,readonly) double zPositionInitialValue;                                              //@synthesize zPositionInitialValue=_zPositionInitialValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * initialValues;                                              //@synthesize initialValues=_initialValues - In the implementation block
@property (nonatomic,readonly) id<TSDCAAnimationContextCacheProtocol> animationContextCache;              //@synthesize animationContextCache=_animationContextCache - In the implementation block
-(double)transformRotationXInitialValue;
-(double)transformRotationYInitialValue;
-(double)transformRotationZInitialValue;
-(BOOL)transformRotationXAnimationExists;
-(double)transformRotationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformRotationYAnimationExists;
-(double)transformRotationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformRotationZAnimationExists;
-(double)transformRotationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformRotationAnimationExists;
-(double)transformRotationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(CGPoint)anchorPointInitialValue;
-(BOOL)anchorPointAnimationExists;
-(double)anchorPointZInitialValue;
-(BOOL)anchorPointZAnimationExists;
-(double)anchorPointZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(CGRect)boundsInitialValue;
-(BOOL)boundsAnimationExists;
-(CGRect)boundsCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformScaleXYAnimationExists;
-(double)transformScaleXYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformScaleXAnimationExists;
-(double)transformScaleXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformScaleYAnimationExists;
-(double)transformScaleYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)positionAnimationExists;
-(CGPoint)positionInitialValue;
-(CGPoint)positionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)zPositionAnimationExists;
-(double)zPositionInitialValue;
-(double)zPositionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(CGPoint)transformTranslationInitialValue;
-(BOOL)transformTranslationAnimationExists;
-(CGPoint)transformTranslationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformTranslationXAnimationExists;
-(double)transformTranslationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformTranslationYAnimationExists;
-(double)transformTranslationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformTranslationZAnimationExists;
-(double)transformTranslationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)transformAnimationExists;
-(CATransform3D)transformCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(double)opacityCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(NSDictionary *)initialValues;
-(id<TSDCAAnimationContextCacheProtocol>)animationContextCache;
-(BOOL)p_setupAndCacheAnimationValues:(BOOL)arg1 verifyOnly:(BOOL)arg2 ;
-(BOOL)verifyCache;
-(id)initWithLayer:(id)arg1 animation:(id)arg2 overrideInitialValues:(id)arg3 cacheAnimationValues:(BOOL)arg4 ;
-(CGPoint)anchorPointCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(double)borderWidthCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)doubleSidedCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)hiddenCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(BOOL)borderColorAnimationExists;
-(CGColorRef)borderColorInitialValue;
-(BOOL)borderWidthAnimationExists;
-(double)borderWidthInitialValue;
-(BOOL)contentsAnimationExists;
-(CGImageRef)contentsInitialValue;
-(BOOL)doubleSidedAnimationExists;
-(BOOL)doubleSidedInitialValue;
-(BOOL)hiddenAnimationExists;
-(BOOL)hiddenInitialValue;
-(BOOL)opacityAnimationExists;
-(double)opacityInitialValue;
-(CATransform3D)transformInitialValue;
-(double)transformRotationInitialValue;
-(double)transformScaleXInitialValue;
-(double)transformScaleYInitialValue;
-(double)transformScaleXYInitialValue;
-(double)transformTranslationXInitialValue;
-(double)transformTranslationYInitialValue;
-(double)transformTranslationZInitialValue;
-(CALayer *)layer;
-(void)dealloc;
-(CAAnimation *)animation;
@end

