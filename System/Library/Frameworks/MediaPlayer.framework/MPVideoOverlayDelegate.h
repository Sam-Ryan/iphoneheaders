/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(void)overlayTappedPictureInPictureButton:(id)arg1;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2;
-(BOOL)overlayShouldAcceptSkipForwardEvent:(id)arg1;
-(BOOL)overlayShouldAcceptSkipBackwardEvent:(id)arg1;

@end

