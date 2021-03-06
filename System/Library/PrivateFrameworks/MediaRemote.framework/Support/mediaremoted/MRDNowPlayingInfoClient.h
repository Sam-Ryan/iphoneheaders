/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:51 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, MRNowPlayingArtwork;

@interface MRDNowPlayingInfoClient : NSObject {

	unsigned _playbackState;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;

}

@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                               //@synthesize playbackState=_playbackState - In the implementation block
-(void)dealloc;
-(id)init;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(unsigned)playbackState;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)setPlaybackState:(unsigned)arg1 ;
@end

