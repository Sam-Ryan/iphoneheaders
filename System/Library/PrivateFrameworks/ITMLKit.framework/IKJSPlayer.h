/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSPlayer.h>
@class NSString, IKJSPlaylist, IKJSMediaItem, IKDOMDocument;


@protocol IKJSPlayer <JSExport>
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (assign,nonatomic) double playbackRate; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@required
-(id)init;
-(void)stop;
-(void)present;
-(void)pause;
-(void)seekToTime:(double)arg1;
-(void)setOverlayDocument:(id)arg1;
-(IKDOMDocument *)overlayDocument;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(void)play;
-(IKJSMediaItem *)currentMediaItem;
-(NSString *)playbackState;
-(void)setPlaylist:(id)arg1;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1;
-(IKJSPlaylist *)playlist;

@end


@class NSString, IKJSPlaylist, IKJSMediaItem, IKDOMDocument, NSMutableDictionary, IKAppPlayerBridge;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {

	IKJSPlaylist* _playlist;
	long long _playerState;
	BOOL _holdingSelfReference;
	NSMutableDictionary* _observedMetadataKeys;
	NSMutableDictionary* _timeListeners;
	NSMutableDictionary* _boundaryListeners;
	IKAppPlayerBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlayerBridge * bridge;                     //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (assign,nonatomic) double playbackRate; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)dealloc;
-(id)init;
-(long long)state;
-(void)stop;
-(void)present;
-(void)pause;
-(void)seekToTime:(double)arg1 ;
-(void)timeIntervalElapsed:(double)arg1 time:(double)arg2 ;
-(void)timeBoundaryDidCross:(double)arg1 ;
-(void)mediaItemWillChange:(long long)arg1 ;
-(void)mediaItemDidChange:(long long)arg1 ;
-(void)stateDidChange:(id)arg1 ;
-(void)stateWillChange:(id)arg1 ;
-(BOOL)shouldHandleStateEvent:(id)arg1 ;
-(BOOL)requestSeekToTime:(double*)arg1 currentTime:(double)arg2 ;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)overlayDocument;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(void)timedMetadataDidChange:(id)arg1 value:(id)arg2 ;
-(void)_addManagedReference;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(void)_removeManagedReference;
-(void)play;
-(IKJSMediaItem *)currentMediaItem;
-(NSString *)playbackState;
-(void)setPlaylist:(IKJSPlaylist *)arg1 ;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(IKJSPlaylist *)playlist;
-(IKAppPlayerBridge *)bridge;
@end

