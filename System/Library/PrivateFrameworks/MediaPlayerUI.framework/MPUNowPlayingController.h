/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, MPUNowPlayingDelegate;
@class NSObject, NSDictionary, NSString, UIImage;

@interface MPUNowPlayingController : NSObject {

	NSObject*<OS_dispatch_source> _timeInformationTimer;
	NSDictionary* _currentNowPlayingInfo;
	double _currentElapsed;
	double _currentDuration;
	long long _isPlaying;
	NSString* _currentNowPlayingAppDisplayID;
	BOOL _hasValidCurrentNowPlayingAppDisplayID;
	BOOL _isRegisteredForNowPlayingNotifications;
	BOOL _isUpdatingNowPlayingInfo;
	BOOL _isUpdatingPlaybackState;
	BOOL _isUpdatingNowPlayingApp;
	BOOL _wantsTimeInformationUpdates;
	UIImage* _cachedNowPlayingArtwork;
	BOOL _cachedArtworkDirty;
	BOOL _currentNowPlayingAppIsRunning;
	BOOL _shouldUpdateNowPlayingArtwork;
	id<MPUNowPlayingDelegate> _delegate;
	double _timeInformationUpdateInterval;

}

@property (assign,nonatomic,__weak) id<MPUNowPlayingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentNowPlayingInfo; 
@property (nonatomic,readonly) UIImage * currentNowPlayingArtwork; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) NSString * nowPlayingAppDisplayID; 
@property (nonatomic,readonly) BOOL currentNowPlayingAppIsRunning;                   //@synthesize currentNowPlayingAppIsRunning=_currentNowPlayingAppIsRunning - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingAppIsSystemMediaApp; 
@property (nonatomic,readonly) double currentElapsed;                                //@synthesize currentElapsed=_currentElapsed - In the implementation block
@property (nonatomic,readonly) double currentDuration; 
@property (assign,nonatomic) double timeInformationUpdateInterval;                   //@synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateNowPlayingArtwork;                     //@synthesize shouldUpdateNowPlayingArtwork=_shouldUpdateNowPlayingArtwork - In the implementation block
-(void)setDelegate:(id<MPUNowPlayingDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MPUNowPlayingDelegate>)delegate;
-(void)update;
-(void)_unregisterForNotifications;
-(BOOL)isPlaying;
-(void)stopUpdating;
-(void)_updateCurrentNowPlaying;
-(void)_updatePlaybackState;
-(void)_updateNowPlayingAppDisplayID;
-(NSString *)nowPlayingAppDisplayID;
-(void)_updateTimeInformationAndCallDelegate:(BOOL)arg1 ;
-(BOOL)_isUpdatingTimeInformation;
-(void)_stopUpdatingTimeInformation;
-(void)_startUpdatingTimeInformation;
-(NSDictionary *)currentNowPlayingInfo;
-(UIImage *)currentNowPlayingArtwork;
-(BOOL)nowPlayingAppIsSystemMediaApp;
-(double)currentDuration;
-(void)setTimeInformationUpdateInterval:(double)arg1 ;
-(void)startUpdating;
-(BOOL)currentNowPlayingAppIsRunning;
-(double)currentElapsed;
-(double)timeInformationUpdateInterval;
-(BOOL)shouldUpdateNowPlayingArtwork;
-(void)setShouldUpdateNowPlayingArtwork:(BOOL)arg1 ;
-(void)_registerForNotifications;
@end
