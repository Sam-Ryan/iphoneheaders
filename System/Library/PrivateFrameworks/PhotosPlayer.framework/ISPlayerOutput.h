/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayerLayer, CALayer, ISCrossfadeLayer;


@protocol ISPlayerOutput <NSObject>
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
@property (nonatomic,readonly) CALayer * photoLayer; 
@property (nonatomic,retain) CGImageRef photoContents; 
@property (assign,nonatomic) double photoScale; 
@property (nonatomic,readonly) ISCrossfadeLayer * crossfadeLayer; 
@required
-(AVPlayerLayer *)videoLayer;
-(ISCrossfadeLayer *)crossfadeLayer;
-(void)playerWillBeginTransitionToPlaybackState:(long long)arg1;
-(void)playerWillPlayVideoToEnd;
-(void)playerDidPlayVideoToEnd;
-(void)playerDidEndTransitionToPlaybackState:(long long)arg1;
-(double)photoScale;
-(CALayer *)photoLayer;
-(CGImageRef)photoContents;
-(void)setPhotoContents:(CGImageRef)arg1;
-(void)setPhotoScale:(double)arg1;

@end

