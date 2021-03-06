/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, NSMutableArray;

@interface TSDTilingLayer : CALayer {

	int mTilingMode;
	CGSize mTileSize;
	struct {
		unsigned tiled : 1;
		unsigned hasCustomContents : 1;
		unsigned drawsInBackground : 1;
		unsigned forceTiling : 1;
		unsigned needsTileLayout : 1;
		unsigned needsTileDisplay : 1;
		unsigned needsSelfDisplay : 1;
	}  mFlags;
	CGRect mLastVisibleBounds;
	CGSize mLastBoundsSize;
	CALayer* mProviderContentLayer;
	NSMutableArray* mDirtyTiles;
	BOOL mHasEverHadTileLayout;

}

@property (assign,nonatomic) int tilingMode; 
@property (assign,nonatomic) BOOL drawsInBackground; 
@property (assign,nonatomic) BOOL forceTiling; 
+(CGImageRef)p_newCheckerboardImage;
+(CGImageRef)p_newGeneratedCheckerboardImage;
-(void)setNeedsLayoutForTilingLayers;
-(void)setDrawsInBackground:(BOOL)arg1 ;
-(void)tilingSafeSetSublayers:(id)arg1 ;
-(BOOL)tilingSafeHasContents;
-(id)p_tileLayers;
-(BOOL)p_updateTileSizeWithLayerSize:(CGSize)arg1 ;
-(BOOL)drawsInBackground;
-(BOOL)forceTiling;
-(void)setTileContents:(id)arg1 ;
-(void)i_setNeedsTileDisplayForTile:(id)arg1 ;
-(void)setNeedsDisplayForDirtyTiles:(id)arg1 ;
-(id)p_nonTileAndContentLayers;
-(id)p_tileAndContentLayers;
-(void)i_drawRect:(CGRect)arg1 inContext:(CGContextRef)arg2 inBackground:(BOOL)arg3 ;
-(void)setForceTiling:(BOOL)arg1 ;
-(void)i_drawTile:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)i_drawTileInBackground:(id)arg1 inRect:(CGRect)arg2 ;
-(int)tilingMode;
-(void)dealloc;
-(void)setNeedsLayout;
-(id)init;
-(void)display;
-(void)setContentsScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setTilingMode:(int)arg1 ;
-(void)layoutSublayers;
@end

