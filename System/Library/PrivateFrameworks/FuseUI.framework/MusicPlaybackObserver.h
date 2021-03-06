/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, MusicLocalPlaybackEventDataSource, MPMediaPlaylist, MPAVController;

@interface MusicPlaybackObserver : NSObject {

	NSOperationQueue* _addOperationQueue;
	MusicLocalPlaybackEventDataSource* _localPlaybackEventDataSource;
	MPMediaPlaylist* _lastIncrementedPlaylist;
	MPAVController* _player;

}

@property (nonatomic,readonly) MPAVController * player;                                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MusicLocalPlaybackEventDataSource * localPlaybackEventDataSource; 
+(id)playbackObserverForPlayer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(MusicLocalPlaybackEventDataSource *)localPlaybackEventDataSource;
-(void)_itemArtworkDidChangeNotification:(id)arg1 ;
-(id)_initWithPlayer:(id)arg1 ;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_currentItemWillChange:(id)arg1 ;
-(void)_currentItemDidChange:(id)arg1 ;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
@end

