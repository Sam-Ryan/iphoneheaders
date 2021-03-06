/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayerController, AVPictureInPicturePlayerLayerView, AVPlayerLayer, NSDictionary;

@interface __AVPlayerLayerView : UIView {

	AVPlayerController* _playerController;
	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,nonatomic) long long videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
+(Class)layerClass;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoLayerGravity;
+(id)keyPathsForValuesAffectingVideoScaled;
+(id)keyPathsForValuesAffectingPlayerLayer;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)startRoutingVideoToPictureInPicturePlayerLayerView;
-(void)stopRoutingVideoToPictureInPicturePlayerLayerView;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(long long)videoGravity;
-(BOOL)_isPlayingOnSecondScreen;
-(CGRect)videoBounds;
-(BOOL)isVideoScaled;
-(void)setVideoScaled:(BOOL)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(long long)arg1 ;
-(AVPlayerLayer *)playerLayer;
@end

