/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPDocument, MRRenderer;


@protocol MRMarimbaBasicPlayback
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification; 
@required
-(void)setStopWithVideo:(BOOL)arg1;
-(void)touchesMoved:(id)arg1;
-(BOOL)displaysFPS;
-(void)pauseWhenStill;
-(void)touchesBegan:(id)arg1;
-(void)touchesCancelled:(id)arg1;
-(void)warmupRenderer;
-(void)setDisplaysFPS:(BOOL)arg1;
-(void)touchesEnded:(id)arg1;
-(void)requestRendering:(BOOL)arg1;
-(void)goForth;
-(void)prevFrame;
-(BOOL)stopWithVideo;
-(void)gotoEnd;
-(void)gotoBeginning;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2;
-(CGImageRef)snapshotAsCGImage;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1;
-(void)nextFrame;
-(BOOL)enableSlideDidChangeNotification;
-(void)setTime:(double)arg1;
-(double)time;
-(void)goBack;
-(MPDocument *)document;
-(void)setDocument:(id)arg1;
-(void)pause;
-(double)timeRemaining;
-(void)togglePlayback;
-(MRRenderer *)renderer;
-(void)play;
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1;
-(double)volume;

@end

