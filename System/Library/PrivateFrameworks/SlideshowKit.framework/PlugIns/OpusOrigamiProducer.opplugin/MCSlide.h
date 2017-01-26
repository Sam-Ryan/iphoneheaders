/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCFilterSupport.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, MCPlugSlide, MCSong, NSString, MCContainerEffect, MCAssetVideo, NSDictionary;

@interface MCSlide : MCObject <MCFilterSupport, MCAnimationPathSupport> {

	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned long long mFlags;
	float mAudioVolume;
	float mAudioDuckLevel;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned long long mIndex;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;
	NSString* mFrameID;
	MCContainerEffect* mContainer;

}

@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (retain) MCAssetVideo * asset; 
@property (retain) MCPlugSlide * plug; 
@property (readonly) MCSong * song; 
@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (copy) NSString * frameID; 
@property (copy) NSDictionary * frameAttributes; 
@property (copy) NSString * kenBurnsType; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)demolishFilters;
-(unsigned long long)countOfFilters;
-(id)addFilterWithFilterID:(id)arg1 ;
-(void)removeAllFilters;
-(void)observeFilter:(id)arg1 ;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)initFiltersWithImprints:(id)arg1 ;
-(id)imprintsForFilters;
-(void)unobserveFilter:(id)arg1 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(NSArray *)orderedFilters;
-(NSSet *)filters;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)removeAllAnimationPaths;
-(unsigned long long)countOfAnimationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)animationPathForKey:(id)arg1 ;
-(NSSet *)animationPaths;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)frameAttributeForKey:(id)arg1 ;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(double)audioDuckInDuration;
-(unsigned char)currentLayoutIndex;
-(void)setPlug:(MCPlugSlide *)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(double)audioDuckOutDuration;
-(double)audioFadeInDuration;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(unsigned char)countOfLayouts;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(float)arg1 ;
-(void)undefineDuration;
-(void)undefineStartTime;
-(void)setFrameID:(NSString *)arg1 ;
-(NSString *)frameID;
-(NSString *)kenBurnsType;
-(float)audioDuckLevel;
-(NSDictionary *)frameAttributes;
-(BOOL)durationIsDefined;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(MCPlugSlide *)plug;
-(BOOL)startTimeIsDefined;
-(void)setFrameAttributes:(NSDictionary *)arg1 ;
-(void)setSongForAsset:(id)arg1 ;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(MCAssetVideo *)asset;
-(double)startTime;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(MCSong *)song;
-(double)audioFadeOutDuration;
-(void)setAudioVolume:(float)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(float)audioVolume;
-(id)imprint;
@end

