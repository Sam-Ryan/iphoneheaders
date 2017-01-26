/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(CGRect)layerFrameInScaledCanvas;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)i_queueForTileProvider;
-(UIEdgeInsets)p_edgeInsetsForClipping;
-(CGImageRef)p_newImageForCachingBaseRep;
-(CGRect)p_clipRect;
-(CGRect)p_convertBaseToNaturalRect:(CGRect)arg1 ;
-(void)resetCachedPartitionedRendering;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(CGRect)clipRect;
@end

