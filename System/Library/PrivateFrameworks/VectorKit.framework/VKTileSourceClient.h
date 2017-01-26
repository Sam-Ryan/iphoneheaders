/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKTileSourceClient <NSObject>
@required
-(void)invalidateTilesFromTileSource:(id)arg1;
-(void)didStopLoadingTilesWithError:(id)arg1;
-(void)willStartLoadingTiles;
-(void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
-(void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
-(void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const VKTileKey*)arg2;
-(BOOL)tileSource:(id)arg1 keyIsNeeded:(const VKTileKey*)arg2;
-(void)tileSource:(id)arg1 didFailToLoadTileForKey:(const VKTileKey*)arg2 error:(id)arg3;
-(void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const VKTileKey*)arg3;
-(BOOL)tileSourceMayUseNetwork:(id)arg1;
-(void)tileSource:(id)arg1 dirtyTilesWithinRect:(const SCD_Struct_VK11*)arg2 level:(long long)arg3;
-(void)tileSource:(id)arg1 invalidateKey:(const VKTileKey*)arg2;
-(void)dirtyTilesFromTileSource:(id)arg1;

@end
