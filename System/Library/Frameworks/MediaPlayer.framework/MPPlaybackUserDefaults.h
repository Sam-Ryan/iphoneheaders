/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject;

@interface MPPlaybackUserDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsHighQualityMusicStreamingOnCellular;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	vector<int, std::__1::allocator<int> >* _notifyTokens;

}

@property (nonatomic,readonly) BOOL allowsHighQualityMusicStreamingOnCellular; 
+(id)standardUserDefaults;
-(void)dealloc;
-(id)init;
-(BOOL)allowsHighQualityMusicStreamingOnCellular;
-(void)_addNotificationObserver:(/*^block*/id)arg1 forUserDefaultKey:(CFStringRef)arg2 ;
@end

