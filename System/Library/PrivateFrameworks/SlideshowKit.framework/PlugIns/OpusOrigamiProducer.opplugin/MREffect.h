/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLoadable.h>
#import <OpusOrigamiProducer/MRRenderable.h>

@class NSDictionary, MRLayerEffect, MRImage, NSString, NSOperation, NSMutableDictionary;

@interface MREffect : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	MRLayerEffect* mEffectLayer;
	MRImage* mOutputImage;
	NSString* mEffectID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	unsigned long long mSeed;
	NSRange mMultiImageSlideRange;
	BOOL mNeedsToUpdateSlides;
	BOOL mNeedsToUpdateTexts;
	BOOL mNeedsToUpdateAttributes;
	BOOL mIsNative3D;
	BOOL mIsOpaque;
	BOOL mIsAlphaFriendly;
	NSOperation* mPreloadOperation;
	CGSize mPixelSize;
	double mDefaultPhaseInDuration;
	double mDefaultMainDuration;
	double mDefaultPhaseOutDuration;
	double mPhaseInDuration;
	double mMainDuration;
	double mPhaseOutDuration;
	NSMutableDictionary* _panoramaPanningOffsets;
	double _panoramaPanningEndTime;
	double _panoramaPanningAmount;
	BOOL _isInInteractiveMode;

}

@property (nonatomic,readonly) BOOL supportsDynamicExpansion; 
@property (nonatomic,readonly) long long typicalSlideBatchSize; 
@property (readonly) NSString * effectID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) BOOL needsToUpdateSlides; 
@property (assign,nonatomic) BOOL needsToUpdateTexts; 
@property (assign,nonatomic) NSRange multiImageSlideRange; 
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
@property (readonly) BOOL isInInteractiveMode;                               //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
+(unsigned long long)typicalSlideBatchSizeForEffectID:(id)arg1 ;
+(BOOL)supportsDynamicExpansionForEffectID:(id)arg1 ;
+(BOOL)hasCustomTiming;
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2 ;
+(id)retainedEffectWithEffectID:(id)arg1 forEffectLayer:(id)arg2 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unload;
-(BOOL)supportsDynamicExpansion;
-(BOOL)needsMoreSlidesAtTime:(double)arg1 ;
-(long long)typicalSlideBatchSize;
-(unsigned long long)firstSlideIndexStillNeededAtTime:(double)arg1 ;
-(BOOL)supportsChapters;
-(double)interestingTimeForTime:(double)arg1 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(BOOL)isInInteractiveMode;
-(double)timeForNextChapterAfterTime:(double)arg1 ;
-(void)endMorphing;
-(BOOL)isAlphaFriendly;
-(double)mainDuration;
-(double)phaseOutDuration;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(BOOL)isRetainedByEffectLayer;
-(BOOL)needsToUpdateSlides;
-(BOOL)needsToUpdateTexts;
-(NSRange)multiImageSlideRange;
-(BOOL)isNative3D;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)setMultiImageSlideRange:(NSRange)arg1 ;
-(double)_computePhaseTimeForTime:(double)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)setLiveAttributes:(id)arg1 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)enterInteractiveModeAtTime:(double)arg1 ;
-(void)exitInteractiveMode;
-(BOOL)getCurrentCenter:(CGPoint*)arg1 scale:(double*)arg2 rotation:(double*)arg3 isMain:(BOOL*)arg4 forElement:(id)arg5 ;
-(void)setNeedsToUpdateSlides:(BOOL)arg1 ;
-(void)setNeedsToUpdateTexts:(BOOL)arg1 ;
-(BOOL)startPanoramaPanningForElementID:(id)arg1 isLandscape:(BOOL*)arg2 ;
-(void)updatePanoramaPanningForElementID:(id)arg1 withDelta:(double)arg2 ;
-(void)endPanoramaPanning;
-(double)_computeTimeForPhaseTime:(double)arg1 ;
-(void)loadWithArguments:(id)arg1 ;
-(void)retainByEffectLayer:(id)arg1 ;
-(void)releaseByEffectLayer:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(double)valueForPanoramaPanningForElementID:(id)arg1 value:(double)arg2 minValue:(double)arg3 maxValue:(double)arg4 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(BOOL)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4 ;
-(BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(double)timeForPreviousChapterBeforeTime:(double)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(NSString *)effectID;
-(double)phaseInDuration;
-(void)dealloc;
-(BOOL)isOpaque;
-(void)_cleanup;
-(NSDictionary *)attributes;
-(void)cleanup;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)cancelLoading;
-(BOOL)isInfinite;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)unload;
-(CGSize)pixelSize;
@end

