/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>

@class TSCH3DLightingModel, TSCH3DFillSetIdentifier, TSDFill, NSNumber;

@interface TSCH3DFill : TSDFill {

	TSCH3DLightingModel* _lightingModel;
	TSCH3DFillSetIdentifier* _identifier;
	TSDFill* _fallbackFill;
	NSNumber* _percentage;
	TSDFill* _cachedImageFill;
	CGSize _cachedImageFillSize;

}

@property (readonly) TSCH3DLightingModel * lightingModel; 
@property (nonatomic,retain) TSCH3DFillSetIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSNumber * percentage;                             //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) float percentageValue; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)lightingModelWithSageFillData:(id)arg1 ;
+(id)fillWithSageFillData:(id)arg1 ;
+(id)fillWithLightingModel:(id)arg1 identifier:(id)arg2 ;
+(id)fillWithIdentifier:(id)arg1 ;
+(id)fill;
-(BOOL)tsch_hasAllResources;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(id)sageFillData;
-(void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1 ;
-(void)didInitFromSOS;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)nonatomicallySetLightingModel:(id)arg1 ;
-(TSCH3DLightingModel *)lightingModel;
-(BOOL)hasCompleteData;
-(id)lightenByPercent:(float)arg1 ;
-(id)initWithLightingModel:(id)arg1 identifier:(id)arg2 ;
-(float)percentageValue;
-(id)p_lazyLightingModel;
-(id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3 ;
-(id)p_imageFillForSize:(CGSize)arg1 context:(id)arg2 ;
-(id)p_imageFillForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(id)p_iconFill;
-(BOOL)identifierReferencesUnavailableLocalBundle;
-(id)renderingLightingModelWithLightings:(id)arg1 ;
-(id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 ;
-(id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2 ;
-(void)setFallbackFill:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSCH3DFillSetIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOpaque;
-(void)setIdentifier:(TSCH3DFillSetIdentifier *)arg1 ;
-(id)referenceColor;
-(NSNumber *)percentage;
-(void)setPercentage:(NSNumber *)arg1 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(int)fillType;
@end

