/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBFWallpaperConfigurationManagerDelegate, SBFProceduralWallpaperProvider;
@class NSMutableDictionary, SBFMagnifyMode, NSArray, SBFWallpaperConfiguration, NSString;

@interface SBFWallpaperConfigurationManager : NSObject <BSDescriptionProviding> {

	NSMutableDictionary* _wallpaperImageCache;
	NSMutableDictionary* _proceduralWallpaperCache;
	int _externalNotificationToken;
	BOOL _cachedVariantsShareWallpaperConfiguration;
	BOOL _cachedVariantsShareWallpaperConfigurationValid;
	id<SBFWallpaperConfigurationManagerDelegate> _delegate;
	double _wallpaperScale;
	long long _wallpaperSizeType;
	id<SBFProceduralWallpaperProvider> _proceduralWallpaperProvider;
	SBFMagnifyMode* _magnifyMode;
	NSArray* _dataStores;
	CGSize _wallpaperSize;

}

@property (assign,nonatomic,__weak) id<SBFWallpaperConfigurationManagerDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize wallpaperSize;                                                                                                   //@synthesize wallpaperSize=_wallpaperSize - In the implementation block
@property (nonatomic,readonly) CGSize wallpaperSizeIncludingParallaxOverhang; 
@property (nonatomic,readonly) double wallpaperScale;                                                                                                  //@synthesize wallpaperScale=_wallpaperScale - In the implementation block
@property (nonatomic,readonly) long long wallpaperSizeType;                                                                                            //@synthesize wallpaperSizeType=_wallpaperSizeType - In the implementation block
@property (nonatomic,copy,readonly) SBFWallpaperConfiguration * lockScreenWallpaperConfiguration; 
@property (nonatomic,copy,readonly) SBFWallpaperConfiguration * homeScreenWallpaperConfiguration; 
@property (nonatomic,readonly) BOOL variantsShareWallpaperConfiguration; 
@property (nonatomic,readonly) unsigned long long numberOfCachedStaticImages; 
@property (assign,nonatomic,__weak) id<SBFProceduralWallpaperProvider> proceduralWallpaperProvider;                                                    //@synthesize proceduralWallpaperProvider=_proceduralWallpaperProvider - In the implementation block
@property (nonatomic,retain) SBFMagnifyMode * magnifyMode;                                                                                             //@synthesize magnifyMode=_magnifyMode - In the implementation block
@property (nonatomic,copy) NSArray * dataStores;                                                                                                       //@synthesize dataStores=_dataStores - In the implementation block
@property (assign,nonatomic) BOOL cachedVariantsShareWallpaperConfiguration;                                                                           //@synthesize cachedVariantsShareWallpaperConfiguration=_cachedVariantsShareWallpaperConfiguration - In the implementation block
@property (assign,getter=isCachedVariantsShareWallpaperConfigurationValid,nonatomic) BOOL cachedVariantsShareWallpaperConfigurationValid;              //@synthesize cachedVariantsShareWallpaperConfigurationValid=_cachedVariantsShareWallpaperConfigurationValid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long long)currentDeviceWallpaperSizeType;
-(void)setDelegate:(id<SBFWallpaperConfigurationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<SBFWallpaperConfigurationManagerDelegate>)delegate;
-(double)thumbnailWidth;
-(void)restoreDefaultWallpaperForAllVariantsAndNotify:(BOOL)arg1 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 ;
-(id)wallpaperImageForVariant:(long long)arg1 ;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 ;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1 ;
-(void)removeProceduralWallpaperForVariants:(long long)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(void)clearCacheForVariants:(long long)arg1 ;
-(id)initWithWallpaperDataStores:(id)arg1 wallpaperSize:(CGSize)arg2 scale:(double)arg3 sizeType:(long long)arg4 ;
-(id)initWithWallpaperDataStores:(id)arg1 ;
-(long long)wallpaperSizeType;
-(CGSize)wallpaperSize;
-(long long)parallaxDeviceType;
-(BOOL)isVideoSupportedByDefaultForVariant:(long long)arg1 ;
-(BOOL)isVideoSupportedForVariant:(long long)arg1 ;
-(NSArray *)dataStores;
-(BOOL)isProceduralWallpaperInfoValid:(id)arg1 ;
-(double)wallpaperScale;
-(BOOL)variantsShareWallpaperConfiguration;
-(id)wallpaperThumbnailImageDataForVariant:(long long)arg1 ;
-(BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 wallpaperOptions:(id)arg3 forVariants:(long long)arg4 options:(unsigned long long)arg5 ;
-(id)normalizeImage:(id)arg1 ;
-(void)wallpaperWillChangeForVariants:(long long)arg1 ;
-(long long)effectiveSharedVariantForVariants:(long long)arg1 ;
-(id)thumbnailDataForImage:(id)arg1 ;
-(void)wallpaperDidChangeForVariants:(long long)arg1 shouldNotify:(BOOL)arg2 ;
-(void)removeWallpaperImagesForVariants:(long long)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2 ;
-(BOOL)isCachedVariantsShareWallpaperConfigurationValid;
-(BOOL)cachedVariantsShareWallpaperConfiguration;
-(BOOL)variantsShareWallpaperConfigurationForTypes:(unsigned long long)arg1 ;
-(void)setCachedVariantsShareWallpaperConfiguration:(BOOL)arg1 ;
-(void)setCachedVariantsShareWallpaperConfigurationValid:(BOOL)arg1 ;
-(void)removeWallpaperImagesForVariants:(long long)arg1 ;
-(void)removeVideoForVariants:(long long)arg1 ;
-(BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 forVariants:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 shoudCrop:(BOOL)arg3 relativeCropRect:(CGRect)arg4 ;
-(void)migrateWallpaperOptionsForImageIfNecessaryForVariant:(long long)arg1 ;
-(void)safeMigrateWallpaperImageIfNecessary;
-(void)regenerateThumbnailsIfNecessary;
-(CGRect)cropRectForOldCropRect:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 oldParallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 newZoomScale:(double*)arg6 ;
-(double)parallaxFactorForCropRect:(CGRect)arg1 portrait:(BOOL)arg2 forImageSize:(CGSize)arg3 zoomScale:(double)arg4 ;
-(SBFMagnifyMode *)magnifyMode;
-(BOOL)safeMigrateWallpaperImageIfNecessaryForVariant:(long long)arg1 ;
-(id)wallpaperThumbnailImageForVariant:(long long)arg1 ;
-(void)regenerateThumbnailIfNecessaryForVariant:(long long)arg1 ;
-(void)saveCroppedVideo:(id)arg1 toURL:(id)arg2 cropRect:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(Class)proceduralWallpaperClassForIdentifier:(id)arg1 ;
-(id<SBFProceduralWallpaperProvider>)proceduralWallpaperProvider;
-(CGRect)cropRectForViewPort:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 parallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 contentScaleFactor:(double)arg6 ;
-(CGSize)wallpaperSizeIncludingParallaxOverhang;
-(SBFWallpaperConfiguration *)lockScreenWallpaperConfiguration;
-(SBFWallpaperConfiguration *)homeScreenWallpaperConfiguration;
-(BOOL)setWallpaperImage:(id)arg1 wallpaperOptions:(id)arg2 forVariants:(long long)arg3 ;
-(void)preheatImageCacheForVariant:(long long)arg1 ;
-(unsigned long long)numberOfCachedStaticImages;
-(void)performMigrationWithFailureHandler:(/*^block*/id)arg1 ;
-(void)regenerateStaticWallpaperThumbnailImages;
-(id)videoURLForVariant:(long long)arg1 ;
-(id)cachedProceduralWallpaperWithIdentifier:(id)arg1 options:(id)arg2 forVariant:(long long)arg3 ;
-(BOOL)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 forVariants:(long long)arg3 ;
-(void)getBestCropRect:(out CGRect*)arg1 zoomScale:(out double*)arg2 forImageSize:(CGSize)arg3 portrait:(BOOL)arg4 parallaxFactor:(double)arg5 ;
-(void)setProceduralWallpaperProvider:(id<SBFProceduralWallpaperProvider>)arg1 ;
-(void)setMagnifyMode:(SBFMagnifyMode *)arg1 ;
-(void)setDataStores:(NSArray *)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
