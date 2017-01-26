/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSIndexSet, TSCH3DShaderEffects, TSCH3DShaderEffectsStates;

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {

	NSIndexSet* mEnabled;
	StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
	tmat4x4<float> mProjection;
	BOOL mTransformChanged;
	BOOL mProjectionChanged;
	StateStack<TSCH3D::ObjectState, 6>* mObjectStateStack;
	TSCH3DShaderEffects* mEffects;
	TSCH3DShaderEffectsStates* mShaderEffectsStates;

}

@property (nonatomic,readonly) BOOL transformChanged; 
@property (nonatomic,readonly) BOOL projectionChanged; 
+(id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)pushMatrix;
-(void)popMatrix;
-(id)effectsStates;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(BOOL)transformChanged;
-(BOOL)projectionChanged;
-(id)initWithOriginal:(id)arg1 ;
-(StateStack<TSCH3D::ObjectState, 6>*)objectStateStack;
-(void)resetBuffers;
-(id)initWithOriginal:(id)arg1 enableTypes:(id)arg2 ;
-(BOOL)objectStateEnabled;
-(BOOL)shaderEnabled;
-(void)resetTransformChangeFlags;
-(void)multiply:(tmat4x4<float>*)arg1 ;
-(void)dealloc;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(BOOL)matrixEnabled;
-(void)scale:(tvec3<float>*)arg1 ;
-(tmat4x4<float>*)projectionTransform;
-(tmat4x4<float>*)currentTransform;
-(id)effects;
-(void)popState;
-(void)pushState;
@end

