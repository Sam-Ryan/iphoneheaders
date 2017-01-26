/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSURL;

@interface MPGeniusPlaybackQueue : MPRemotePlaybackQueue {

	NSURL* _seedTrack;

}

@property (nonatomic,readonly) NSURL * seedTrack;              //@synthesize seedTrack=_seedTrack - In the implementation block
-(void)createPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_createPlaybackContextWithRecommendedContentWithSeedAdamID:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createPlaybackContextFromCloudControllerWithSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createPlaybackContextFromMediaLibraryWithSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(NSURL *)seedTrack;
@end
