/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>

@class CALayer, TSDMutableReflection, TSDShadow, TSDReflection;

@interface TSDStyledRep : TSDRep {

	CALayer* mShadowLayer;
	CALayer* mReflectionLayer;
	CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
	BOOL mIsUpdatingReflectionOpacity;
	TSDMutableReflection* mDynamicReflection;
	BOOL mIsUpdatingShadow;
	TSDShadow* mDynamicShadow;
	struct {
		unsigned shadowInvalid : 1;
	}  mFlags;

}

@property (nonatomic,readonly) CALayer * shadowLayer; 
@property (nonatomic,readonly) CALayer * reflectionLayer; 
@property (nonatomic,readonly) TSDReflection * reflection; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) TSDShadow * shadow; 
-(void)viewScaleDidChange;
-(void)willUpdateLayer:(id)arg1 ;
-(id)additionalLayersUnderLayer;
-(void)didUpdateLayer:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)shouldShowSelectionHighlight;
-(id)textureForContext:(id)arg1 ;
-(BOOL)shouldHideSelectionHighlightDueToRectangularPath;
-(void)invalidateShadowLayer;
-(CALayer *)reflectionLayer;
-(id)magicMoveAttributesWithShapeAttributes:(BOOL)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(id)pathSourceForSelectionHighlightBehavior;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
-(id)styledLayout;
-(void)setMagicMoveTextureAttributes:(id)arg1 ;
-(CALayer *)shadowLayer;
-(void)disposeReflectionLayer;
-(void)createReflectionLayer;
-(BOOL)shouldShowReflection;
-(void)drawGradientWithAlphaOverReflection:(CGContextRef)arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(CGSize)arg3 ;
-(id)styledInfo;
-(CGRect)clipRectWithoutEffects;
-(CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1 ;
-(CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(CGRect)reflectionLayerFrameInRoot;
-(void)drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4 ;
-(void)p_drawReflectionInContext:(CGContextRef)arg1 ;
-(void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(CGRect)arg3 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3 ;
-(void)drawInContextWithoutEffectsForAlphaOnly:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContextRef)arg1 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(/*^block*/id)arg5 ;
-(CGImageRef)p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(BOOL)arg2 viewScale:(double)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(/*^block*/id)arg5 ;
-(void)drawShadowInContext:(CGContextRef)arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 drawChildren:(BOOL)arg2 ;
-(void)willUpdateEffectLayersForLayer:(id)arg1 ;
-(void)didUpdateEffectLayersForLayer:(id)arg1 ;
-(CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1 ;
-(CGRect)reflectionLayerFrame;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildren:(CGContextRef)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)description;
-(double)opacity;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSDShadow *)shadow;
-(BOOL)shouldShowShadow;
-(BOOL)isInvisible;
-(CGRect)clipRect;
-(TSDReflection *)reflection;
@end

