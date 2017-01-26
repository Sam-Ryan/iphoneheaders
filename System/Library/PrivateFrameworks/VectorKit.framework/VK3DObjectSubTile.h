/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMutableArray, GEOVectorTile, VKSharedResources, NSArray;

@interface VK3DObjectSubTile : NSObject {

	NSMutableArray* _objectGroups;
	GEOVectorTile* _modelTile;
	shared_ptr<gss::StyleManager>* _styleManager;
	VKSharedResources* _sharedResources;
	long long _vectorType;
	double _contentScale;
	vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap> >* _heights;

}

@property (nonatomic,copy) NSArray * objectGroups; 
@property (nonatomic,retain) GEOVectorTile * modelTile;                                //@synthesize modelTile=_modelTile - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager;              //@synthesize styleManager=_styleManager - In the implementation block
@property (nonatomic,retain) VKSharedResources * sharedResources;                      //@synthesize sharedResources=_sharedResources - In the implementation block
@property (assign,nonatomic) double contentScale;                                      //@synthesize contentScale=_contentScale - In the implementation block
-(void)dealloc;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(VKSharedResources *)sharedResources;
-(void)setSharedResources:(VKSharedResources *)arg1 ;
-(GEOVectorTile *)modelTile;
-(void)setModelTile:(GEOVectorTile *)arg1 ;
-(BOOL)heightAtPoint:(const Matrix<float, 2, 1>*)arg1 outZ:(float*)arg2 ;
-(NSArray *)objectGroups;
-(void)fillShadowAreasInContext:(CGContextRef)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 styleManager:(shared_ptr<gss::StyleManager>*)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 ;
-(Box<float, 2>)shadowBounds;
-(BOOL)_createMeshForObjects:(SCD_Struct_VK628*)arg1 count:(unsigned long long)arg2 ;
-(void)_replaceThreeBuldingsInModelTile:(id)arg1 objects:(vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> >*)arg2 ;
-(void)_read3DObjects:(vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> >*)arg1 fromDiskForTileKey:(const GEOTileKey*)arg2 ;
-(void)setObjectGroups:(NSArray *)arg1 ;
@end

