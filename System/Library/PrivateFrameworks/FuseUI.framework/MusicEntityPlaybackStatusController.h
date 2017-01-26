/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicPlaybackProgressScrubbing.h>

@class MPUContentItemIdentifierCollection, NSHashTable, MusicPlaybackProgressScrubberController, MPAVController, NSString;

@interface MusicEntityPlaybackStatusController : NSObject <MusicPlaybackProgressScrubbing> {

	BOOL _alwaysLive;
	MPUContentItemIdentifierCollection* _currentContainerIdentifierCollection;
	MPUContentItemIdentifierCollection* _currentItemIdentifierCollection;
	double _playbackCurrentTime;
	double _playbackCurrentTimeOriginatingTime;
	long long _playbackDisplayState;
	double _playbackDuration;
	float _playbackRate;
	NSHashTable* _observers;
	MusicPlaybackProgressScrubberController* _playbackProgressScrubberController;
	MPAVController* _player;

}

@property (nonatomic,readonly) MPAVController * player;                                                      //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate; 
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) BOOL scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
-(void)dealloc;
-(void)setRate:(float)arg1 ;
-(void)_playerItemWillChangeNotification:(id)arg1 ;
-(BOOL)isAlwaysLive;
-(void)setCurrentTime:(double)arg1 ;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(float)rate;
-(MPAVController *)player;
-(BOOL)_setCurrentTime:(double)arg1 ;
-(double)playbackCurrentTime;
-(id)initWithPlayer:(id)arg1 ;
-(void)addPlaybackStatusObserver:(id)arg1 ;
-(void)removePlaybackStatusObserver:(id)arg1 ;
-(id)playbackStatusForContainerIdentifierCollection:(id)arg1 itemIdentifierCollection:(id)arg2 ;
-(void)_enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_playerContentsDidChangeNotification:(id)arg1 ;
-(double)effectiveCurrentTime;
-(void)cancelScrubbing;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(long long)currentScrubSpeed;
-(BOOL)isScrubbingEnabled;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_itemContentItemIdentifierCollectionDidChangeNotification:(id)arg1 ;
-(void)_feederContentItemIdentifierCollectionDidChangeNotification:(id)arg1 ;
-(void)_getContainerIdentifierCollection:(out id*)arg1 itemIdentifierCollection:(out id*)arg2 forItem:(id)arg3 ;
-(void)_sendPlaybackStatusDidChange;
-(id)_playbackStatusForPlaybackDisplayState:(long long)arg1 ;
-(void)_updateCurrentPlaybackIdentifierSet;
@end

