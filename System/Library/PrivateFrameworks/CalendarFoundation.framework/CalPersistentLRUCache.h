/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, CalPersistentLRUCacheItem, NSMutableDictionary, NSDate, NSObject, CalLimitingQueue, CalFileSensor;

@interface CalPersistentLRUCache : NSObject {

	NSString* _path;
	unsigned long long _capacity;
	CalPersistentLRUCacheItem* _firstCacheItem;
	CalPersistentLRUCacheItem* _lastCacheItem;
	unsigned long long _numItems;
	NSMutableDictionary* _cacheItemsByKey;
	double _expirationInterval;
	NSDate* _expirationDate;
	NSObject*<OS_dispatch_queue> _queue;
	CalLimitingQueue* _saveQueue;
	NSObject*<OS_dispatch_source> _expirationSource;
	CalFileSensor* _fileSensor;
	id _systemClockObserver;

}
-(void)dealloc;
-(id)init;
-(id)initWithPath:(id)arg1 capacity:(unsigned long long)arg2 expirationInterval:(double)arg3 ;
-(void)_expire;
-(void)_writeToFile;
-(void)_readFromFile;
-(void)_resetExpirationTimer;
-(void)_removeCacheItem:(id)arg1 ;
-(void)_addCacheItem:(id)arg1 ;
-(void)_pruneIfNeeded;
-(void)_promoteCacheItem:(id)arg1 ;
-(void)_dataChanged;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)cachedObjectForKey:(id)arg1 ;
@end

