/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class NSData;

@interface VKRasterTile : VKTile {

	NSData* _data;
	shared_ptr<gss::StyleManager>* _styleManager;
	int _genericTileType;
	BOOL _hasGenericTileType;
	shared_ptr<ggl::Texture2D>* _gglTexture;
	RenderItem* _renderItem;
	unique_ptr<ggl::Texture::Shader::Setup, std::__1::default_delete<ggl::Texture::Shader::Setup> >* _shaderSetup;
	unique_ptr<ggl::Clut::Shader::Setup, std::__1::default_delete<ggl::Clut::Shader::Setup> >* _shaderSetupCLUT;
	unique_ptr<ggl::TextureWithReverseAlpha::Shader::Setup, std::__1::default_delete<ggl::TextureWithReverseAlpha::Shader::Setup> >* _shaderReverseAlphaSetup;

}

@property (nonatomic,readonly) BOOL hasGenericTileType;                           //@synthesize hasGenericTileType=_hasGenericTileType - In the implementation block
@property (nonatomic,readonly) int genericTileType;                               //@synthesize genericTileType=_genericTileType - In the implementation block
@property (nonatomic,readonly) RenderItem* renderItem; 
@property (assign,nonatomic) shared_ptr<ggl::Texture2D>* gglTexture;              //@synthesize gglTexture=_gglTexture - In the implementation block
-(void)dealloc;
-(shared_ptr<ggl::Texture2D>*)gglTexture;
-(void)setupReverseAlphaShaderWithRenderState:(RenderState*)arg1 mesh:(Mesh*)arg2 roadAlpha:(float)arg3 ;
-(BOOL)hasGenericTileType;
-(RenderItem*)renderItem;
-(void)setupClutShaderWithRenderState:(RenderState*)arg1 mesh:(Mesh*)arg2 clutTexture:(Texture2D*)arg3 clutBlend:(float)arg4 ;
-(int)genericTileType;
-(void)setupNormalShaderWithRenderState:(RenderState*)arg1 mesh:(Mesh*)arg2 ;
-(CGImageRef)newCGImageFromData:(id)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 imageData:(id)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 ;
-(void)immediateLoad:(Device*)arg1 ;
-(void)setGglTexture:(shared_ptr<ggl::Texture2D>*)arg1 ;
-(TextureData2D*)buildTextureDataFromCGImage:(CGImageRef)arg1 ;
-(void)gglBuildTexture:(Device*)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 imageData:(id)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 genericTileType:(int)arg4 ;
@end

