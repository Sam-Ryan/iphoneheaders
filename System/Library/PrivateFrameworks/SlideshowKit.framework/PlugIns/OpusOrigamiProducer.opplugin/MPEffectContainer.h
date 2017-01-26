/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAudioSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>

@class MCPlug, MCContainerParallelizer, NSMutableArray, NSMutableDictionary, MPTransition, MPLayer, MPAudioPlaylist, NSString;

@interface MPEffectContainer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAudioSupport, MPActionableSupport> {

	MCPlug* _containerPlug;
	MCContainerParallelizer* _containerParallelizer;
	NSMutableArray* _effects;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	MPTransition* _transition;
	MPLayer* _parentLayer;
	MPAudioPlaylist* _audioPlaylist;
	BOOL _transitionDisconnected;
	double _startTime;
	double _duration;
	CGColorRef _backgroundColor;
	NSString* _uuid;

}

@property (assign,nonatomic) CGColorRef backgroundCGColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) MPTransition * transition;                 //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
+(id)effectContainer;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setScriptingTransition:(id)arg1 ;
-(void)insertObject:(id)arg1 inEffectsAtIndex:(long long)arg2 ;
-(void)removeObjectFromEffectsAtIndex:(long long)arg1 ;
-(long long)countOfFilters;
-(id)objectInEffectsAtIndex:(long long)arg1 ;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(long long)countOfEffects;
-(void)replaceObjectInEffectsAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(id)scriptingTransition;
-(BOOL)shouldBeParallelizer;
-(void)copyAudioPlaylist:(id)arg1 ;
-(id)nearestLayerGroup;
-(void)setContainerPlug:(id)arg1 ;
-(void)calculateDurationToSmallest:(BOOL)arg1 ;
-(void)setContainerParallelizer:(id)arg1 ;
-(long long)textCount;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)copyEffects:(id)arg1 ;
-(void)copyTransition:(id)arg1 ;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(void)copyVars:(id)arg1 ;
-(void)copyFilters:(id)arg1 ;
-(void)convertFromParallelizerToEffectContainer;
-(void)convertFromEffectContainerToParallelizer;
-(void)adjustPhasesWithDuration:(double)arg1 ;
-(id)parentDocument;
-(id)plugID;
-(void)setContainerEffect:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)cleanup;
-(id)uuid;
-(id)objectID;
-(void)setParentLayer:(id)arg1 ;
-(long long)slideCount;
-(void)disconnectTransition;
-(id)fullDebugLog;
-(double)findMinDuration;
-(BOOL)isTransitionConnected;
-(void)reconnectTransition;
-(id)plug;
-(void)dump;
-(id)container;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(double)introTransitionDuration;
-(CGColorRef)backgroundCGColor;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(double)outroTransitionDuration;
-(void)removeEffectsAtIndices:(id)arg1 ;
-(void)insertEffects:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeAllEffects;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveEffectsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filters;
-(void)setTransition:(MPTransition *)arg1 ;
-(MPTransition *)transition;
-(long long)index;
-(double)startTime;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)addFilters:(id)arg1 ;
-(id)parentLayer;
-(id)effects;
-(void)addEffect:(id)arg1 ;
-(void)addEffects:(id)arg1 ;
-(void)addFilter:(id)arg1 ;
@end

