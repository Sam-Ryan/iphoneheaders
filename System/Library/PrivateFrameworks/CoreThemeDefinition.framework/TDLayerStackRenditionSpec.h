/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageStackAsset, NSString, NSOrderedSet;

@interface TDLayerStackRenditionSpec : TDRenditionSpec {

	CGSize primitiveCanvasSize;

}

@property (nonatomic,retain) TDImageStackAsset * asset; 
@property (assign,nonatomic) CGSize primitiveCanvasSize; 
@property (nonatomic,retain) NSString * canvasSizeString; 
@property (assign,nonatomic) CGSize canvasSize; 
@property (nonatomic,retain) NSOrderedSet * layerReferences; 
-(void)prepareForDeletion;
-(void)awakeFromFetch;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(void)setPrimitiveCanvasSize:(CGSize)arg1 ;
-(CGSize)primitiveCanvasSize;
@end

