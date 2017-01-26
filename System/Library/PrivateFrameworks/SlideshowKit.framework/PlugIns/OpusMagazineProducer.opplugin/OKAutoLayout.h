/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMagazineProducer/OpusMagazineProducer-Structs.h>
@class OKPresentation, NSMutableDictionary, OKAutoLayoutLiveFeedContext, OKAutoLayoutFreqController;

@interface OKAutoLayout : NSObject {

	OKPresentation* _presentation;
	NSMutableDictionary* _metadataCacheDict;
	OKAutoLayoutLiveFeedContext* _liveFeedContext;
	OKAutoLayoutFreqController* _freqController;
	BOOL _allowMovieWithPhotos;
	BOOL _forceToIterateAllLayouts;
	double _layoutAspectRatio;
	double _targetAspectRatio;

}

@property (assign,nonatomic) double layoutAspectRatio;                   //@synthesize layoutAspectRatio=_layoutAspectRatio - In the implementation block
@property (assign,nonatomic) double targetAspectRatio;                   //@synthesize targetAspectRatio=_targetAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL allowMovieWithPhotos;                  //@synthesize allowMovieWithPhotos=_allowMovieWithPhotos - In the implementation block
@property (assign,nonatomic) BOOL forceToIterateAllLayouts;              //@synthesize forceToIterateAllLayouts=_forceToIterateAllLayouts - In the implementation block
+(float)croppedPercentageforRectASP:(float)arg1 photoASP:(float)arg2 ;
+(float)photoScoreForMediaItem:(id)arg1 ;
+(float)scaleFactorForMediaItem:(id)arg1 toFitInRect:(CGRect)arg2 ;
+(BOOL)needsPanoramaEffectForRectASP:(float)arg1 mediaASP:(float)arg2 ;
+(float)panningCropThreshold;
-(long long)liveFeedNumOfPagesGenerated;
-(BOOL)startFeedWith:(id)arg1 primaryResolutionKey:(id)arg2 ;
-(id)generateNextPagesByMediaItems:(id)arg1 maxPages:(long long)arg2 isFirstPage:(BOOL)arg3 ;
-(void)endFeed;
-(id)liveFeedPrimaryResolutionKey;
-(long long)liveFeedNumOfMediasUsed;
-(unsigned long long)_analyzeLayouts:(id)arg1 ;
-(BOOL)allowMovieWithPhotos;
-(void)setForceToIterateAllLayouts:(BOOL)arg1 ;
-(void)setLayoutAspectRatio:(double)arg1 ;
-(id)_parseLayouts:(id)arg1 ;
-(id)_subtitleGuidelineFromPresentation:(id)arg1 forMediaItem:(id)arg2 ;
-(double)targetAspectRatio;
-(id)_analyzeLayouts2:(id)arg1 ;
-(double)_maxDurationOfMediaItems:(id)arg1 ;
-(double)layoutAspectRatio;
-(id)generatePagesByMediaItems:(id)arg1 layoutsByResolution:(id)arg2 primaryResolutionKey:(id)arg3 ;
-(BOOL)forceToIterateAllLayouts;
-(id)_matchMediaItems:(id)arg1 toLayoutInfo:(id)arg2 orderedKeys:(id)arg3 ;
-(id)_titleGuidelineFromPresentation:(id)arg1 ;
-(double)_croppingScoreForMediaItems:(id)arg1 layoutInfo:(id)arg2 ;
-(id)_loopAllLayouts:(id)arg1 numOfAllMedias:(unsigned long long)arg2 layoutInfos:(id)arg3 primaryResolution:(id)arg4 ;
-(void)setAllowMovieWithPhotos:(BOOL)arg1 ;
-(id)_findBestMatchingLayoutFromLayouts:(id)arg1 forMediaItems:(id)arg2 currentIndx:(unsigned long long)arg3 checkFollowingMediaItems:(long long)arg4 remainingItems:(unsigned long long)arg5 guidelineForMediaItems:(id)arg6 isFirstPage:(BOOL)arg7 ;
-(void)setTargetAspectRatio:(double)arg1 ;
-(id)_metadataForMediaItem:(id)arg1 ;
-(void)dealloc;
-(id)initWithPresentation:(id)arg1 ;
@end

