/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSetBackedTileSource.h>

@interface VKRealisticTileSource : VKTileSetBackedTileSource
-(BOOL)minimumZoomLevelBoundsCamera;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(long long)defaultMinimumZoomLevel;
-(unsigned long long)mapLayerForZoomLevelRange;
-(long long)defaultMaximumZoomLevel;
@end

