/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <Media/MPAssistantPlaybackQueue.h>

@class NSArray;

@interface MPAssistantStoreTracklistPlaybackQueue : MPAssistantPlaybackQueue {

	NSArray* _storeItemIDs;
	unsigned long long _shuffleType;

}

@property (nonatomic,readonly) NSArray * storeItemIDs;                    //@synthesize storeItemIDs=_storeItemIDs - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 ;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 ;
-(NSArray *)storeItemIDs;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(unsigned long long)shuffleType;
-(void)setShuffleType:(unsigned long long)arg1 ;
@end
