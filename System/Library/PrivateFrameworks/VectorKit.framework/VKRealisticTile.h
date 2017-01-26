/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class NSMapTable, NSMutableArray, VKRealisticPolygonMaker, VKAnimation, NSArray;

@interface VKRealisticTile : VKVectorTile {

	NSMapTable* _realisticRoadGroupsTable;
	NSMutableArray* _realisticRoadGroups;
	float _roadZ;
	float _laneMarkingZ;
	float _landZ;
	float _waterZ;
	BOOL _shouldBlend;
	float _alpha;
	VKRealisticPolygonMaker* _landPolygonMaker;
	VKRealisticPolygonMaker* _waterPolygonMaker;
	VKAnimation* _startDrawingAnimation;
	map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* _landDrawableIndices;
	map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* _waterDrawableIndices;
	vector<std::__1::shared_ptr<md::TexturedDrawable>, std::__1::allocator<std::__1::shared_ptr<md::TexturedDrawable> > >* _landDrawables;
	vector<std::__1::shared_ptr<md::TexturedDrawable>, std::__1::allocator<std::__1::shared_ptr<md::TexturedDrawable> > >* _waterDrawables;
	shared_ptr<ggl::RealisticCasingFacade::RealisticMesh>* _coastlineMesh;
	shared_ptr<gss::StyleQuery>* _landTextureStyleQuery;
	shared_ptr<ggl::Texture2D>* _defaultLandTexture;
	shared_ptr<ggl::Texture2D>* _defaultLandTextureVariant;
	vector<_VKRealisticPolygonMetaData, std::__1::allocator<_VKRealisticPolygonMetaData> >* _polygonMetaData;
	shared_ptr<ggl::ConstantDataTyped<ggl::RealisticTexture::Realistic> >* _realisticTextureConstantData;
	FogInfo* _fogInfo;

}

@property (nonatomic,readonly) NSArray * realisticRoadGroups;                                                                                    //@synthesize realisticRoadGroups=_realisticRoadGroups - In the implementation block
@property (nonatomic,readonly) float roadZ;                                                                                                      //@synthesize roadZ=_roadZ - In the implementation block
@property (nonatomic,readonly) float landZ;                                                                                                      //@synthesize landZ=_landZ - In the implementation block
@property (nonatomic,readonly) float waterZ;                                                                                                     //@synthesize waterZ=_waterZ - In the implementation block
@property (assign,nonatomic) BOOL shouldBlend;                                                                                                   //@synthesize shouldBlend=_shouldBlend - In the implementation block
@property (assign,nonatomic) float alpha;                                                                                                        //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) VKAnimation * startDrawingAnimation;                                                                                //@synthesize startDrawingAnimation=_startDrawingAnimation - In the implementation block
@property (nonatomic,readonly) shared_ptr<ggl::Texture2D>* defaultLandTexture;                                                                   //@synthesize defaultLandTexture=_defaultLandTexture - In the implementation block
@property (nonatomic,readonly) shared_ptr<ggl::Texture2D>* defaultLandTextureVariant; 
@property (nonatomic,readonly) vector<std::__1::shared_ptr<md::TexturedDrawable>* landDrawables; 
@property (nonatomic,readonly) vector<std::__1::shared_ptr<md::TexturedDrawable>* waterDrawables; 
@property (nonatomic,readonly) RealisticMesh* coastlineMesh; 
@property (nonatomic,readonly) shared_ptr<ggl::ConstantDataTyped<ggl::RealisticTexture::Realistic> >* realisticTextureConstantData;              //@synthesize realisticTextureConstantData=_realisticTextureConstantData - In the implementation block
@property (nonatomic,readonly) FogInfo* fogInfo; 
-(void)dealloc;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(void)updateViewDependentStateIfNecessaryWithContext:(id)arg1 ;
-(long long)vectorType;
-(float)roadZ;
-(FogInfo*)fogInfo;
-(void)_parseCoastlines;
-(void)addTriangulatedPointsToDrawableInMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 vendors:(vector<std::__1::shared_ptr<md::TexturedDrawable>, std::__1::allocator<std::__1::shared_ptr<md::TexturedDrawable> > >*)arg2 zIndex:(float)arg3 points:(const Matrix<float, 2, 1>*)arg4 pointCount:(unsigned long long)arg5 indices:(const unsigned short*)arg6 indexCount:(unsigned long long)arg7 styleQuery:(shared_ptr<gss::StyleQuery>*)arg8 ;
-(TexturedDrawable*)_drawableInMap:(map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)arg1 vendors:(vector<std::__1::shared_ptr<md::TexturedDrawable>, std::__1::allocator<std::__1::shared_ptr<md::TexturedDrawable> > >*)arg2 forStyleQuery:(shared_ptr<gss::StyleQuery>*)arg3 ;
-(shared_ptr<ggl::ConstantDataTyped<ggl::RealisticTexture::Realistic> >*)realisticTextureConstantData;
-(float)waterZ;
-(void)createMeshes;
-(VKAnimation *)startDrawingAnimation;
-(float)landZ;
-(void)_updateDefaultLandTextures;
-(shared_ptr<ggl::Texture2D>*)_createDefaultTextureForLevelOfDetail:(unsigned long long)arg1 takeVariant:(BOOL)arg2 ;
-(id)_groupForRenderZ:(int)arg1 ;
-(NSArray *)realisticRoadGroups;
-(void)_addCoastlineMeshForPoints:(const Matrix<float, 2, 1>*)arg1 pointCount:(unsigned long long)arg2 ;
-(void)_parsePolygons;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(DeviceRef)arg6 ;
-(vector<std::__1::shared_ptr<md::TexturedDrawable>*)landDrawables;
-(shared_ptr<ggl::Texture2D>*)defaultLandTextureVariant;
-(void)setStartDrawingAnimation:(VKAnimation *)arg1 ;
-(shared_ptr<ggl::Texture2D>*)defaultLandTexture;
-(void)setShouldBlend:(BOOL)arg1 ;
-(RealisticMesh*)coastlineMesh;
-(void)updateTextures;
-(BOOL)shouldBlend;
-(vector<std::__1::shared_ptr<md::TexturedDrawable>*)waterDrawables;
@end

