/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderProcessor.h>

@class TSCH3DRenderProcessor;

@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor {

	TSCH3DRenderProcessor* mOriginal;

}

@property (nonatomic,retain) TSCH3DRenderProcessor * original; 
+(id)processorWithOriginal:(id)arg1 ;
-(BOOL)canRenderPrefilteredLines;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)pushMatrix;
-(void)popMatrix;
-(id)effectsStates;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
-(long long)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecs*)arg3 ;
-(RenderState)renderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(void)pushRenderState;
-(void)popRenderState;
-(void)setOriginal:(TSCH3DRenderProcessor *)arg1 ;
-(void)resetBuffers;
-(void)updateRenderState;
-(long long)texture:(id)arg1 attributes:(const TextureAttributes*)arg2 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)multiply:(tmat4x4<float>*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)endFrame;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(void)beginFrame;
-(TSCH3DRenderProcessor *)original;
-(void)scale:(tvec3<float>*)arg1 ;
-(id)effects;
-(void)popState;
-(void)pushState;
@end

