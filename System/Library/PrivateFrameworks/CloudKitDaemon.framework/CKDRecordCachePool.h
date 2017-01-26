/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface CKDRecordCachePool : NSObject {

	NSMutableDictionary* _pools;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _expiryTimer;

}

@property (nonatomic,retain) NSMutableDictionary * pools;                            //@synthesize pools=_pools - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> expiryTimer;              //@synthesize expiryTimer=_expiryTimer - In the implementation block
+(id)sharedPool;
+(void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2 ;
-(void)releaseCache:(id)arg1 ;
-(NSMutableDictionary *)pools;
-(void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2 ;
-(id)_poolForContext:(id)arg1 ;
-(void)clearAllCachesForContext:(id)arg1 ;
-(void)setPools:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)expiryTimer;
-(void)setExpiryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

