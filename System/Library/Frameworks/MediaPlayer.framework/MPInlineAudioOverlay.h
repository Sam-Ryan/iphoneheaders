/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPPlaybackControlsView.h>

@protocol MPVideoControllerProtocol;
@class UIView, MPInlineAudioTransportControls, UILabel, NSString;

@interface MPInlineAudioOverlay : MPPlaybackControlsView {

	id<MPVideoControllerProtocol> _videoViewController;
	long long _style;
	UIView* _backgroundView;
	MPInlineAudioTransportControls* _transportControls;
	UILabel* _streamingLabel;
	NSString* _playbackErrorDescription;
	UILabel* _playbackErrorDescriptionLabel;

}

@property (assign,nonatomic,__weak) id<MPVideoControllerProtocol> videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (assign,nonatomic) long long style;                                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * playbackErrorDescription;                                     //@synthesize playbackErrorDescription=_playbackErrorDescription - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPlaybackErrorDescription:(NSString *)arg1 ;
-(NSString *)playbackErrorDescription;
-(void)_itemDurationDidChangeNotification:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id<MPVideoControllerProtocol>)videoViewController;
-(unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1 ;
-(void)reloadView;
-(id)newProgressIndicator;
-(void)_updateVisiblePartsForAvailableRoutes;
-(id)_newDescriptionLabel;
-(CGRect)_frameInBackgroundViewForDescriptionLabel:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(void)setVideoViewController:(id<MPVideoControllerProtocol>)arg1 ;
@end

