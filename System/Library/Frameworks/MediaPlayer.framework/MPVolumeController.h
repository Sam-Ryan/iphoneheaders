/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVolumeControllerDelegate;
@class MPAVController, NSString, UIImage;

@interface MPVolumeController : NSObject {

	MPAVController* _player;
	NSString* _volumeAudioCategory;
	BOOL _volumeWarningBlinking;
	UIImage* _volumeWarningTrackImage;
	BOOL _debugVolumeWarning;
	BOOL _volumeWarningEnabled;
	float _volumeValue;
	float _EUVolumeLimit;
	id<MPVolumeControllerDelegate> _delegate;
	long long _volumeWarningState;

}

@property (assign,nonatomic,__weak) id<MPVolumeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float volumeValue;                                         //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,copy) NSString * volumeAudioCategory; 
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                                 //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                              //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                       //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(void)setDelegate:(id<MPVolumeControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MPVolumeControllerDelegate>)delegate;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(BOOL)muted;
-(float)setVolumeValue:(float)arg1 ;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(void)updateVolumeWarningState;
-(void)updateVolumeValue;
-(NSString *)volumeAudioCategory;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(float)EUVolumeLimit;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)_systemVolumeDidChange:(id)arg1 ;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(float)_volumeFromAVController;
-(void)_setVolumeWarningState:(long long)arg1 ;
-(float)volumeValue;
-(void)_internalSetVolumeValue:(float)arg1 ;
-(BOOL)_isPlayerInValidState;
-(void)_systemMuteDidChange:(id)arg1 ;
-(void)_EUVolumeLimitDidChange:(id)arg1 ;
-(void)_EUVolumeLimitEnforcedDidChange:(id)arg1 ;
-(void)_volumeDidChange:(id)arg1 ;
-(void)_forcefullySetVolumeValue:(float)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(void)setMuted:(BOOL)arg1 ;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
@end

