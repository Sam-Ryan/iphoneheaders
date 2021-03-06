/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class UIImage, SBFColorBoxes;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	UIImage* _image;
	UIImage* _displayedImage;
	UIImage* _displayedSurfaceImage;
	BOOL _sampleAndDisplayedImageAreSame;
	double _overallContrast;
	SBFColorBoxes* _colorBoxes;

}

@property (nonatomic,retain) SBFColorBoxes * colorBoxes; 
+(BOOL)_allowsRasterization;
+(BOOL)_allowsParallax;
-(void)setContentView:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)_zoomScale;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)_displayedImage;
-(id)_displayedSurfaceImage;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(void)_setupContentView;
-(SBFColorBoxes *)colorBoxes;
-(id)_computeAverageColor;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 ;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB8)arg1 includeTint:(BOOL)arg2 ;
-(BOOL)contrastRequiresTreatments;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(id)snapshotImage;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(void)_setSampleImage:(id)arg1 ;
-(id)_repeatingGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_createColorBoxes;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(void)_setupSampleImage:(id)arg1 treated:(BOOL)arg2 ;
-(void)_cacheImagesIfNeeded;
-(id)_wallpaperImageForAnalysis;
-(void)_setDisplayedImage:(id)arg1 ;
-(void)_setupWallpaperImage:(id)arg1 treated:(BOOL)arg2 forceNoTreatment:(BOOL)arg3 ;
-(id)_mappedImageKeyForParameters:(SCD_Struct_SB8)arg1 includingTint:(BOOL)arg2 ;
-(id)_untintedImageForBackdropParameters:(SCD_Struct_SB8)arg1 ;
-(void)_resetColorBoxes;
-(id)_variantCacheIdentifier;
-(id)_displayedImageKey;
-(id)_sampleImageKey;
-(id)_displayedSurfaceImageKey;
-(id)wallpaperImage;
-(CGSize)_imageSize;
-(void)_setImage:(id)arg1 ;
@end

