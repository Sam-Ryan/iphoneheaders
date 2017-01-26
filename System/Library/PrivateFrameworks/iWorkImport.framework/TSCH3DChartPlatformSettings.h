/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {

	NSDictionary* mSettings;

}
+(id)p_defaultSettingsDictionary;
+(id)p_platformSettingsDictionary;
+(id)sharedInstance;
-(unsigned long long)highQualityShadowsSize;
-(unsigned long long)resourceCacheMemoryLimitInBytes;
-(BOOL)buildImageDefaultAntialias;
-(int)p_labelPickingSlackMethod;
-(float)p_labelPickingSlack;
-(BOOL)skipFirstMipmapLevel;
-(unsigned long long)buildImageTileSize;
-(unsigned long long)buildMultisamples;
-(BOOL)buildShouldDiscardBuffers;
-(double)buildTargetFPS;
-(BOOL)buildsUseLowDetailedGeometries;
-(BOOL)buildsCanUseDynamicShadows;
-(BOOL)buildTextureRendersAsSingleImage;
-(unsigned long long)buildFramebufferMemoryLimitInBytes;
-(unsigned long long)supersamplingTileSize;
-(unsigned long long)supersamplingSamples;
-(unsigned long long)insertionIconSupersamplingSamples;
-(double)printingDPI;
-(unsigned long long)printingMaxImageSize;
-(unsigned long long)labelMaxTextureSize;
-(BOOL)interactiveCanvasCanUseHighQualityRenderer;
-(unsigned long long)interactiveCanvasMultisamples;
-(BOOL)interactiveModeUsesFastPerformanceHint;
-(BOOL)knobTrackingUsesRealTimePerformanceHint;
-(BOOL)useInteractiveModeWhileSelected;
-(BOOL)useLayoutInwardForInsertionIcons;
-(float)normalizedLabelPickingSlackForViewScale:(double)arg1 viewport:(const tvec2<int>*)arg2 ;
-(float)rotationTrackerSpeed;
-(BOOL)useHighQualityShadows;
-(BOOL)useTiledFullSizeInteractiveLayer;
-(float)prefilteredLinesFilterRadius;
-(BOOL)protectCachedShaders;
-(double)backgroundLayoutContentsScaleFactor;
-(BOOL)backgroundLayoutUsesTiledRendering;
-(BOOL)shouldHandleResourceCacheOutOfMemory;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

