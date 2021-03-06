/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RadioUI/RURadioAVPlayer.h>

@class MPPlaybackContext;

@interface MusicAVPlayer : RURadioAVPlayer {

	MPPlaybackContext* _lastPlaybackContext;

}
+(id)sharedAVPlayer;
+(Class)playlistManagerClass;
-(void)dealloc;
-(id)init;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1 ;
-(void)_musicPlayer_defaultsDidChangeNotification:(id)arg1 ;
-(void)_connectAVPlayer;
-(void)_initiateMusicPlayback;
-(BOOL)hasVolumeControl;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(id)_fallbackMusicPlaybackContext;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(void)beginPlayback;
-(void)beginOrTogglePlayback;
-(void)seekAlbum:(int)arg1 ;
-(void)seekPlaylist:(int)arg1 ;
@end

