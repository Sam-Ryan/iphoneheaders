/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKit/UIView.h>

@class CAUITransportButton, UILabel, UIColor, NSTimer, UIFont;

@interface CAInterAppAudioTransportView : UIView {

	CAUITransportButton* rewindButton;
	CAUITransportButton* playPauseButton;
	CAUITransportButton* recordButton;
	UILabel* currentTimeLabel;
	UIColor* pauseButtonColor;
	UIColor* playButtonColor;
	OpaqueAudioComponentInstanceRef outputUnit;
	HostCallbackInfo* callBackInfo;
	NSTimer* pollingPlayerTimer;
	BOOL enabled;
	BOOL inForeground;
	BOOL _playing;
	BOOL _recording;
	BOOL _connected;
	double _playTime;
	UIFont* _currentTimeLabelFont;

}

@property (getter=isEnabled) BOOL enabled; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;                  //@synthesize playing=_playing - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording;              //@synthesize recording=_recording - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected;              //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) UIColor * labelColor; 
@property (nonatomic,retain) UIFont * currentTimeLabelFont;                    //@synthesize currentTimeLabelFont=_currentTimeLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * rewindButtonColor; 
@property (nonatomic,retain) UIColor * playButtonColor; 
@property (nonatomic,retain) UIColor * pauseButtonColor; 
@property (nonatomic,retain) UIColor * recordButtonColor; 
-(void)audioUnitPropertyChangedListener:(void*)arg1 unit:(OpaqueAudioComponentInstanceRef)arg2 propID:(unsigned)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 ;
-(void)togglePlayback:(id)arg1 ;
-(BOOL)canPlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)initialize;
-(BOOL)isPlaying;
-(void)setLabelColor:(UIColor *)arg1 ;
-(BOOL)isRecording;
-(BOOL)canRecord;
-(void)rewindAction:(id)arg1 ;
-(void)toggleRecording:(id)arg1 ;
-(UIFont *)currentTimeLabelFont;
-(void)setCurrentTimeLabelFont:(UIFont *)arg1 ;
-(void)appHasGoneInBackground;
-(void)appHasGoneForeground;
-(void)updateTransportControls;
-(BOOL)isHostConnected;
-(void)pollHost;
-(id)getPlayTimeString;
-(void)updateStatefromTransportCallBack;
-(void)stopPollingPlayer;
-(void)startPollingPlayer;
-(void)getHostCallbackInfo;
-(void)sendStateToRemoteHost:(unsigned)arg1 ;
-(BOOL)canRewind;
-(UIColor *)rewindButtonColor;
-(void)setRewindButtonColor:(UIColor *)arg1 ;
-(UIColor *)playButtonColor;
-(void)setPlayButtonColor:(UIColor *)arg1 ;
-(UIColor *)pauseButtonColor;
-(void)setPauseButtonColor:(UIColor *)arg1 ;
-(UIColor *)recordButtonColor;
-(void)setRecordButtonColor:(UIColor *)arg1 ;
-(void)setOutputAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(UIColor *)labelColor;
-(BOOL)isConnected;
@end

