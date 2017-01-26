/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDPNGAsset, NSOrderedSet, NSString;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {

	CGRect _alignmentRect;
	BOOL _allowsMultiPassEncoding;

}

@property (assign,nonatomic) BOOL allowsMultiPassEncoding;                    //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (nonatomic,retain) TDPNGAsset * asset; 
@property (nonatomic,retain) NSOrderedSet * slices; 
@property (assign,nonatomic) CGRect alignmentRect; 
@property (assign,nonatomic) CGRect primitiveAlignmentRect; 
@property (nonatomic,retain) NSString * alignmentRectString; 
@property (nonatomic,retain) NSString * originalImageSizeString; 
@property (nonatomic,retain) NSString * nonAlphaImageAreaString; 
+(void)initialize;
-(BOOL)allowsMultiPassEncoding;
-(void)setAllowsMultiPassEncoding:(BOOL)arg1 ;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)awakeFromFetch;
-(CGRect)alignmentRect;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(CGImageRef)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned*)arg3 vectorBased:(BOOL*)arg4 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)updatePackingPropertiesWithDocument:(id)arg1 ;
-(void)_logError:(id)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(id)_slicesToUseForCSI;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(CGRect)primitiveAlignmentRect;
-(void)setPrimitiveAlignmentRect:(CGRect)arg1 ;
-(int)_rawPixelFormatOfCGImage:(CGImageRef)arg1 ;
-(id)_sliceRectanglesForRenditionSize:(SCD_Struct_TD7)arg1 unadjustedSliceRectangles:(id*)arg2 imageSlicesNeedAdjustment:(BOOL*)arg3 newRenditionSize:(SCD_Struct_TD7*)arg4 ;
-(SCD_Struct_TD16)_edgeMetricsForAlignmentRect:(CGRect)arg1 originalRenditionSize:(SCD_Struct_TD7)arg2 newRenditionSize:(SCD_Struct_TD7)arg3 ;
@end

