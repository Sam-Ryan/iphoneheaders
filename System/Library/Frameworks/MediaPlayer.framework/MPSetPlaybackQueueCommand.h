/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSMutableDictionary;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {

	NSMutableDictionary* _registeredSpecializedQueues;

}
-(id)_mediaRemoteCommandInfoOptions;
-(void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(int)arg3 queueParameters:(id)arg4 ;
-(void)unregisterSpecializedQueueIdentifier:(id)arg1 ;
@end

