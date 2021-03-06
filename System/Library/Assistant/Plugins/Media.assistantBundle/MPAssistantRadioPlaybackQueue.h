/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <Media/MPAssistantPlaybackQueue.h>

@class NSString;

@interface MPAssistantRadioPlaybackQueue : MPAssistantPlaybackQueue {

	NSString* _stationStringID;

}

@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
+(id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2 ;
-(id)initWithContextID:(id)arg1 stationStringID:(id)arg2 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(NSString *)stationStringID;
@end

