/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicPlaybackProgressScrubberDelegate.h>

@protocol MusicPlaybackProgressScrubbing, MusicPlaybackProgressScrubberDelegate;
@class MPAVItem, MPAVController, NSString;

@interface MusicPlaybackProgressScrubberController : NSObject <MusicPlaybackProgressScrubberDelegate> {

	MPAVItem* _currentItem;
	float _currentRate;
	double _lastSeekedTime;
	id _periodicTimeObserver;
	long long _scrubbingTransactionCount;
	MPAVController* _player;
	id<MusicPlaybackProgressScrubbing> _playbackProgressScrubber;
	id<MusicPlaybackProgressScrubberDelegate> _playbackProgressScrubberDelegate;

}

@property (nonatomic,retain) MPAVController * player;                                                                        //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubbing> playbackProgressScrubber;                             //@synthesize playbackProgressScrubber=_playbackProgressScrubber - In the implementation block
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> playbackProgressScrubberDelegate;              //@synthesize playbackProgressScrubberDelegate=_playbackProgressScrubberDelegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedScrubSpeedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_playerItemDidChangeNotification:(id)arg1 ;
-(void)_playerRateDidChangeNotification:(id)arg1 ;
-(void)_unregisterForNotificationsForCurrentItem:(id)arg1 ;
-(void)_registerForNotificationsForCurrentItem:(id)arg1 ;
-(void)_currentItemDurationAvailableNotification:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(id)initWithPlayer:(id)arg1 playbackProgressScrubber:(id)arg2 ;
-(void)setPlaybackProgressScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(NSString *)localizedScrubSpeedText;
-(void)playbackProgressScrubberTrackingDidBegin:(id)arg1 ;
-(void)playbackProgressScrubberTrackingDidEnd:(id)arg1 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeCurrentTime:(double)arg2 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)setPlaybackProgressScrubber:(id<MusicPlaybackProgressScrubbing>)arg1 ;
-(void)_destroyPeriodicTimeObserverIfNeeded;
-(void)_endScrubbingTransactionForFinalCleanup:(BOOL)arg1 ;
-(id<MusicPlaybackProgressScrubbing>)playbackProgressScrubber;
-(void)_setCurrentItem:(id)arg1 force:(BOOL)arg2 ;
-(void)_updateTimeValuesUsingItemTime:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_beginScrubbingTransaction;
-(void)_updateDurationForCurrentItem;
-(void)_setCurrentTimeIfPossible:(double)arg1 ;
-(void)_createPeriodicTimeObserverIfNeeded;
-(id<MusicPlaybackProgressScrubberDelegate>)playbackProgressScrubberDelegate;
@end

