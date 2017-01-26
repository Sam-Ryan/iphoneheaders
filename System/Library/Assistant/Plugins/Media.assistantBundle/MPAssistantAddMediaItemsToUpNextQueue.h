/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <SAObjects/SAMPAddMediaItemsToUpNextQueue.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MPAssistantAddMediaItemsToUpNextQueue : SAMPAddMediaItemsToUpNextQueue <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MRSystemAppPlaybackQueueRef)_createPlaybackQueueWithCollection:(id)arg1 error:(id*)arg2 ;
-(MRSystemAppPlaybackQueueRef)_createLocalLibraryPlaybackQueueWithCollection:(id)arg1 error:(id*)arg2 ;
-(MRSystemAppPlaybackQueueRef)_createStoreTracklistPlaybackQueueWithCollection:(id)arg1 error:(id*)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

