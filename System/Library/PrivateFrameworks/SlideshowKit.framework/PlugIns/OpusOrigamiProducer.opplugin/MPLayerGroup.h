/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <OpusOrigamiProducer/MPNavigatorSupportInternal.h>
#import <OpusOrigamiProducer/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>
#import <OpusOrigamiProducer/MPAudioSupport.h>
#import <OpusOrigamiProducer/MPLayerableSupport.h>
#import <OpusOrigamiProducer/MPNavigatorSupport.h>
#import <OpusOrigamiProducer/MPGeometrySupport.h>
#import <OpusOrigamiProducer/MPTimingSupport.h>
#import <OpusOrigamiProducer/MPActionSupport.h>
#import <OpusOrigamiProducer/MPAutomaticLayerSupport.h>
#import <OpusOrigamiProducer/MPManualLayerSupport.h>

@class MPLayerGroupInternal, NSMutableArray, MCPlugParallel, MCContainerParallelizer, MPAudioPlaylist, NSMutableDictionary, NSArray, NSString, NSDictionary;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {

	MPLayerGroupInternal* _internal;
	NSMutableArray* _userProvidedVideoPaths;
	NSMutableArray* _userProvidedAudioPaths;
	MCPlugParallel* _plug;
	MCContainerParallelizer* _parallelizer;
	MPAudioPlaylist* _audioPlaylist;
	NSMutableArray* _layers;
	NSMutableDictionary* _layerDictionary;
	id _parent;
	NSMutableDictionary* _authoringOptions;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;

}

@property (assign,nonatomic) unsigned long long loopingMode; 
@property (assign,nonatomic) CGColorRef backgroundCGColor; 
@property (nonatomic,copy) NSArray * videoPaths; 
@property (nonatomic,copy) NSArray * audioPaths; 
@property (assign,nonatomic) BOOL autoAdjustDuration; 
@property (nonatomic,readonly) NSString * uuid; 
@property (assign,nonatomic) NSDictionary * initialState; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(long long)countOfLayers;
-(id)objectInLayersAtIndex:(long long)arg1 ;
-(void)removeObjectFromLayersAtIndex:(long long)arg1 ;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2 ;
-(void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)setAuthoredVersionInfo:(id)arg1 ;
-(void)copyLayerDictionary:(id)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setLastSlideUsed:(long long)arg1 ;
-(void)setIsDocumentLayerGroup:(BOOL)arg1 ;
-(BOOL)detectFacesInBackground;
-(void)copyLayers:(id)arg1 ;
-(BOOL)nearingEndWithOptions:(id)arg1 ;
-(BOOL)layersCanPositionZIndex;
-(id)actionableObjectForID:(id)arg1 ;
-(long long)lastSlideUsed;
-(void)setPlug:(id)arg1 ;
-(id)liveLock;
-(id)authoredVersionInfo;
-(id)layerKeyDictionary;
-(double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2 ;
-(void)reconfigureLoopingMode;
-(void)setUsedAllPaths:(BOOL)arg1 ;
-(void)copyStruct:(id)arg1 ;
-(void)cachePaths;
-(double)durationPadding;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(void)resetDuration;
-(void)configureActions;
-(void)reconnectAll;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(id)observer;
-(void)cleanup;
-(id)objectID;
-(void)setParent:(id)arg1 ;
-(id)absoluteVideoPaths;
-(double)posterTime;
-(id)allEffectContainers;
-(id)allSlides:(BOOL)arg1 ;
-(id)allSongs;
-(id)parentDocument;
-(id)plug;
-(id)allEffects;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(BOOL)autoAdjustDuration;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(BOOL)startsPaused;
-(id)mainLayers;
-(double)phaseOutDuration;
-(void)setAudioPaths:(NSArray *)arg1 ;
-(unsigned long long)loopingMode;
-(id)keyedLayers;
-(void)addAudioPath:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)insertLayers:(id)arg1 atIndex:(long long)arg2 ;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(id)authoringOptions;
-(void)setAuthoringOptions:(id)arg1 ;
-(id)authoringOptionForKey:(id)arg1 ;
-(void)setAutoAdjustDuration:(BOOL)arg1 ;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)removeLayerForKey:(id)arg1 ;
-(id)layerKey;
-(void)removePaths:(id)arg1 ;
-(CGColorRef)backgroundCGColor;
-(void)addAudioPaths:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(void)removeAllAudioPaths;
-(void)removeAllVideoPaths;
-(unsigned long long)setStyleID:(id)arg1 ;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)layerForKey:(id)arg1 ;
-(id)orderedVideoPaths;
-(NSArray *)audioPaths;
-(id)navigatorKey;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)addVideoPath:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllLayers;
-(void)setIsTriggered:(BOOL)arg1 ;
-(id)styleID;
-(double)xRotationAngle;
-(NSArray *)videoPaths;
-(BOOL)isTriggered;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)yRotationAngle;
-(id)animationPaths;
-(double)phaseInDuration;
-(void)setVideoPaths:(NSArray *)arg1 ;
-(double)timeIn;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)actions;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)layers;
-(id)actionForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(NSString *)uuid;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)addLayers:(id)arg1 ;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(void)addLayer:(id)arg1 ;
-(double)videoDuration;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)parent;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)removePath:(id)arg1 ;
@end

