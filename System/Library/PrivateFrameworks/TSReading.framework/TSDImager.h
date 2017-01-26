/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCanvasDelegate.h>

@class NSArray, TSKDocumentRoot, TSDCanvas, NSString;

@interface TSDImager : NSObject <TSDCanvasDelegate> {

	NSArray* mInfos;
	CGColorRef mBackgroundColor;
	CGRect mUnscaledClipRect;
	double mViewScale;
	CGSize mScaledImageSize;
	CGSize mMaximumScaledImageSize;
	BOOL mUseScaledImageSize;
	BOOL mDistortedToMatch;
	BOOL mImageMustHaveEvenDimensions;
	BOOL mShouldReuseBitmapContext;
	UIEdgeInsets mContentInset;
	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;
	CGRect mActualScaledClipRect;
	BOOL mDrawingIntoPDF;
	BOOL mIsPrinting;
	BOOL mShouldUseSRGBColorSpace;
	CGContextRef mReusableBitmapContext;
	CGRect mReusableBounds;
	CGRect mReusableIntegralBounds;
	CGRect mReusableActualScaledClipRect;
	CGSize mReusableScaledImageSize;
	BOOL mReusableShouldUseSRGBColorSpace;
	/*^block*/id mPostRenderAction;

}

@property (nonatomic,retain) NSArray * infos; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) CGRect unscaledClipRect; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGSize scaledImageSize; 
@property (assign,nonatomic) CGSize maximumScaledImageSize; 
@property (assign,nonatomic) BOOL distortedToMatch; 
@property (assign,nonatomic) BOOL imageMustHaveEvenDimensions; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect actualScaledClipRect; 
@property (assign,nonatomic) BOOL shouldReuseBitmapContext; 
@property (assign,nonatomic) BOOL isPrinting; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)viewScale;
-(BOOL)isPrinting;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)isPrintingCanvas;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(BOOL)p_configureCanvas;
-(BOOL)shouldReuseBitmapContext;
-(CGImageRef)p_newImageInReusableContext;
-(void)p_drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(void)setPostRenderAction:(/*^block*/id)arg1 ;
-(CGSize)scaledImageSize;
-(void)setScaledImageSize:(CGSize)arg1 ;
-(CGSize)maximumScaledImageSize;
-(void)setMaximumScaledImageSize:(CGSize)arg1 ;
-(id)pdfData;
-(BOOL)drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(CGRect)unscaledClipRect;
-(void)setUnscaledClipRect:(CGRect)arg1 ;
-(CGRect)actualScaledClipRect;
-(BOOL)distortedToMatch;
-(void)setDistortedToMatch:(BOOL)arg1 ;
-(BOOL)imageMustHaveEvenDimensions;
-(void)setImageMustHaveEvenDimensions:(BOOL)arg1 ;
-(void)setShouldReuseBitmapContext:(BOOL)arg1 ;
-(void)setIsPrinting:(BOOL)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(TSDCanvas *)canvas;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(CGImageRef)newImage;
-(id)documentRoot;
@end

