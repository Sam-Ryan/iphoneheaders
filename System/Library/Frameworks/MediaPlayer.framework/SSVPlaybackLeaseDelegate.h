/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSVPlaybackLeaseDelegate <NSObject>
@optional
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
-(void)playbackLeaseDidEnd:(id)arg1;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;
-(void)playbackLease:(id)arg1 automaticRefreshDidFailWithError:(id)arg2;
-(void)playbackLeaseAutomaticRefreshDidFinish:(id)arg1;

@end

