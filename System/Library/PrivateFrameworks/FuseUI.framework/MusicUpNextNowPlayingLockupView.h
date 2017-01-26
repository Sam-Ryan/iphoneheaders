/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityHorizontalLockupView.h>

@protocol MusicUpNextNowPlayingLockupViewDelegate;
@class MusicMiniPlayerPlaybackProgressView, MusicPlaybackProgressScrubberController, MPAVController, UIView, UITapGestureRecognizer;

@interface MusicUpNextNowPlayingLockupView : MusicEntityHorizontalLockupView {

	MusicMiniPlayerPlaybackProgressView* _playbackProgressView;
	MusicPlaybackProgressScrubberController* _playbackProgressController;
	MPAVController* _player;
	UIView* _itemContentViewContainerView;
	id<MusicUpNextNowPlayingLockupViewDelegate> _dismissalDelegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) MPAVController * player;                                                           //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIView * itemContentViewContainerView;                                             //@synthesize itemContentViewContainerView=_itemContentViewContainerView - In the implementation block
@property (assign,nonatomic,__weak) id<MusicUpNextNowPlayingLockupViewDelegate> dismissalDelegate;              //@synthesize dismissalDelegate=_dismissalDelegate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                                   //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(MPAVController *)player;
-(void)setDismissalDelegate:(id<MusicUpNextNowPlayingLockupViewDelegate>)arg1 ;
-(void)setItemContentViewContainerView:(UIView *)arg1 ;
-(UIView *)itemContentViewContainerView;
-(id<MusicUpNextNowPlayingLockupViewDelegate>)dismissalDelegate;
@end

