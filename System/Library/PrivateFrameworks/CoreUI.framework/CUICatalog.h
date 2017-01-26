/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSMapTable, NSBundle, NSString, NSCache;

@interface CUICatalog : NSObject {

	unsigned long long _storageRef;
	NSMapTable* _storageMapTable;
	NSBundle* _bundle;
	NSString* _assetStoreName;
	unsigned _purgeWhenFinished : 1;
	NSCache* _lookupCache;

}
+(id)systemUICatalog;
+(id)bestMatchUsingObjects:(id)arg1 getAttributeValueUsing:(/*^block*/id)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 sizeClassHorizontal:(long long)arg6 sizeClassVertical:(long long)arg7 memoryClass:(long long)arg8 graphicsFeatureSetClass:(long long)arg9 graphicsFallBackOrder:(id)arg10 ;
+(id)defaultUICatalog;
+(id)defaultUICatalogForBundle:(id)arg1 ;
+(id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 ;
+(BOOL)isValidAssetStorageWithURL:(id)arg1 ;
+(BOOL)isValidLCRWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 ;
-(id)_imageWithName:(id)arg1 scaleFactor:(double)arg2 ;
-(id)_themeStore;
-(unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(BOOL*)arg2 ;
-(id)_baseKeyForName:(id)arg1 ;
-(id)allImageNames;
-(void)_resourceUnPinnedNotification:(id)arg1 ;
-(id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 ;
-(id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 memoryClass:(unsigned long long)arg7 graphicsClass:(unsigned long long)arg8 graphicsFallBackOrder:(id)arg9 withBaseKeySelector:(SEL)arg10 ;
-(BOOL)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 ;
-(BOOL)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 ;
-(id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 graphicsFallBackOrder:(id)arg6 ;
-(id)_baseAtlasKeyForName:(id)arg1 ;
-(id)_baseAtlasContentsKeyForName:(id)arg1 ;
-(unsigned long long)_themeRef;
-(id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 memoryClass:(unsigned long long)arg5 graphicsClass:(unsigned long long)arg6 graphicsFallBackOrder:(id)arg7 ;
-(id)_resolvedRenditionKeyFromThemeRef:(unsigned long long)arg1 withBaseKey:(id)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 sizeClassHorizontal:(long long)arg6 sizeClassVertical:(long long)arg7 memoryClass:(unsigned long long)arg8 graphicsClass:(unsigned long long)arg9 graphicsFallBackOrder:(id)arg10 ;
-(id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 ;
-(id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 ;
-(id)_defaultAssetRenditionKey:(id)arg1 ;
-(BOOL)canGetShapeEffectRenditionWithKey:(id)arg1 ;
-(id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5 ;
-(id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5 ;
-(id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 ;
-(id)newShapeEffectPresetWithRenditionKey:(id)arg1 ;
-(id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 ;
-(BOOL)requiredDrawOfUnstyledGlyphs:(const unsigned short*)arg1 atPositions:(const CGPoint*)arg2 inContext:(CGContextRef)arg3 withFont:(CTFontRef)arg4 count:(unsigned long long)arg5 ;
-(id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(CGColorRef)arg3 ;
-(BOOL)fillStyledPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 ;
-(BOOL)_doStyledQuartzDrawingInContext:(CGContextRef)arg1 inBounds:(CGRect)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(/*^block*/id)arg5 ;
-(BOOL)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2 ;
-(id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(CGColorRef)arg3 ;
-(id)initWithName:(id)arg1 fromBundle:(id)arg2 ;
-(id)imageWithName:(id)arg1 scaleFactor:(double)arg2 ;
-(id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 ;
-(BOOL)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2 ;
-(BOOL)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 ;
-(id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 ;
-(id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 ;
-(id)parentNamedImageAtlastForImageNamed:(id)arg1 scaleFactor:(double)arg2 ;
-(void)preloadNamedAtlasWithScaleFactor:(double)arg1 andNames:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enumerateNamedLookupsUsingBlock:(/*^block*/id)arg1 ;
-(CGPDFDocumentRef)pdfDocumentWithName:(id)arg1 ;
-(id)layerStackWithName:(id)arg1 ;
-(id)defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5 ;
-(id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 ;
-(long long)artVariantIDOrZero;
-(BOOL)strokeStyledPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 ;
-(BOOL)fillStyledRect:(CGRect)arg1 inContext:(CGContextRef)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 ;
-(BOOL)hasStylePresetWithName:(id)arg1 ;
-(CGColorRef)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2 ;
-(int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2 ;
-(BOOL)drawGlyphs:(const unsigned short*)arg1 atPositions:(const CGPoint*)arg2 inContext:(CGContextRef)arg3 withFont:(CTFontRef)arg4 count:(unsigned long long)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(CGColorRef)arg8 ;
-(void)dealloc;
-(id)debugDescription;
-(psdGradientColor)styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(CGColorRef)arg3 scale:(double)arg4 ;
-(id)imageByStylingImage:(CGImageRef)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(CGColorRef)arg4 scale:(double)arg5 ;
-(id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 ;
-(id)dataWithName:(id)arg1 ;
-(void)clearCachedImageResources;
-(id)imagesWithName:(id)arg1 ;
-(id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5 ;
@end

