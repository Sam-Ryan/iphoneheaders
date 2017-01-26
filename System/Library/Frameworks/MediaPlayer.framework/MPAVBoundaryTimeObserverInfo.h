/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface MPAVBoundaryTimeObserverInfo : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _times;

}

@property (nonatomic,copy,readonly) id block;                                   //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSArray * times;                                 //@synthesize times=_times - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(NSArray *)times;
-(id)block;
-(id)initWithTimes:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

