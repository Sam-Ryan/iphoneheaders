/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DOrderedDictionary, TSCH3DSceneRenderPipeline;

@interface TSCH3DPrefilteredLineRenderer : NSObject {

	tmat4x4<float> mModelMatrix;
	tmat3x3<float> mNormalMatrix;
	tmat4x4<float> mProjection;
	tmat4x4<float> mNormalizedProjection;
	box<glm::detail::tvec2<int> > mViewport;
	TSCH3DOrderedDictionary* mCacheObjects;
	TSCH3DSceneRenderPipeline* mPipeline;

}

@property (nonatomic,readonly) tmat4x4<float> modelMatrix; 
@property (nonatomic,readonly) tmat3x3<float> normalMatrix; 
@property (nonatomic,readonly) tmat4x4<float> projection; 
@property (nonatomic,readonly) tmat4x4<float> normalizedProjection; 
@property (nonatomic,readonly) box<glm::detail::tvec2<int> > viewport; 
@property (nonatomic,readonly) TSCH3DSceneRenderPipeline * pipeline; 
+(id)renderCacheKey;
+(id)renderer;
-(tmat4x4<float>)projection;
-(tmat4x4<float>)normalizedProjection;
-(BOOL)beginWithPipeline:(id)arg1 ;
-(void)renderLineBufferWithSetting:(id)arg1 vertices:(id)arg2 normals:(id)arg3 diffuseTexcoords:(id)arg4 ;
-(void)endWithDidGenerateShaderEffectsBlock:(/*^block*/id)arg1 ;
-(TSCH3DSceneRenderPipeline *)pipeline;
-(tmat4x4<float>)modelMatrix;
-(void)p_setupShaderEffectsForSetting:(id)arg1 ;
-(id)p_renderCacheKey;
-(id)p_renderCacheIDFromSetting:(id)arg1 ;
-(BOOL)p_shouldRenderWithSetting:(id)arg1 returningCacheObject:(id*)arg2 ;
-(void)renderWithSetting:(id)arg1 fromVertex:(const PrefilteredLineVertexProperties*)arg2 toVertex:(const PrefilteredLineVertexProperties*)arg3 ;
-(void)dealloc;
-(id)init;
-(tmat3x3<float>)normalMatrix;
-(box<glm::detail::tvec2<int> >)viewport;
@end

