/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementSceneObject.h>

@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject
+(Class)propertiesClass;
+(BOOL)shouldCreateMeshSeriesStorage;
+(id)createBoundsForSeries:(id)arg1 ;
+(float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2 ;
+(float)chartSeriesPolygonOffset;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1 ;
-(float)chartMinZForScene:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4 ;
-(void)updateElementEffectsStates:(const RenderElementInfo*)arg1 depthToWidthRatio:(float)arg2 ;
-(BOOL)transparencyDepthMask;
-(void)sortElements:(vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >*)arg1 pipeline:(id)arg2 ;
-(void)updateTilingEffect:(TexCoordTilingShaderEffectState*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(tvec3<float>*)arg4 ;
-(void)prerenderElement:(const RenderElementInfo*)arg1 ;
-(void)postrenderElement:(const RenderElementInfo*)arg1 ;
-(BOOL)shouldRenderSeries:(id)arg1 ;
@end

