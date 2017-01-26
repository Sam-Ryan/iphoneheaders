/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSetBackedTileSource.h>

@class NSMutableDictionary;

@interface VKRasterTileSource : VKTileSetBackedTileSource {

	NSMutableDictionary* _genericTextureCache;
	unordered_map<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D>, std::__1::hash<GEOGenericTileType>, std::__1::equal_to<GEOGenericTileType>, std::__1::allocator<std::__1::pair<const GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> > > >* _gglGenericRasterTextureCache;

}
-(void)clearCaches;
-(void)dealloc;
-(id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(void)decodeData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(void)_fetchedTile:(id)arg1 ;
@end

