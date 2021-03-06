/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaQueryQueueFeeder.h>

@class MPMediaPlaylist;

@interface MusicQueryQueueFeeder : MPMediaQueryQueueFeeder

@property (nonatomic,retain) MPMediaPlaylist * mixPlaylist; 
+(BOOL)supportsStateRestoration;
+(Class)playbackItemMetadataClass;
-(void)setMixPlaylist:(MPMediaPlaylist *)arg1 ;
-(MPMediaPlaylist *)mixPlaylist;
-(unsigned long long)realRepeatType;
-(id)errorResolverForItem:(id)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(unsigned long long)realShuffleType;
-(Class)itemClass;
@end

