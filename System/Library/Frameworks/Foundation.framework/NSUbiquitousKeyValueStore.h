/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject {

	id _private1;
	id _private2;
	id _private3;
	void* _private4;
	void** _reserved[3];
	int _daemonWakeToken;

}

@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
+(void)_synchronizeStoresForced:(BOOL)arg1 ;
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(void)_appWillDeactivate;
+(void)_appWillActivate;
+(id)defaultStore;
-(void)_printDebugDescription;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3 ;
-(void)_scheduleRemoteSynchronization;
-(void)_sourceDidChange:(id)arg1 ;
-(void)_configurationDidChange;
-(void)_registerToDaemon;
-(void)_sendPingToDaemon;
-(void)_pleaseSynchronize:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 ;
-(void)_setShouldAvoidSynchronize:(BOOL)arg1 ;
-(int)_storeChangeFromSourceChange:(int)arg1 ;
-(BOOL)_hasPendingSynchronize;
-(void)_setHasPendingSynchronize:(BOOL)arg1 ;
-(void)_rethrowException:(id)arg1 ;
-(BOOL)synchronizeWithSourceForced:(BOOL)arg1 ;
-(BOOL)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2 ;
-(void)_syncConcurrentlyForced:(BOOL)arg1 ;
-(void)_syncConcurrently;
-(void)_adjustTimer:(id)arg1 ;
-(void)_adjustTimerForAutosync;
-(BOOL)_synchronizeForced:(BOOL)arg1 notificationQueue:(id)arg2 ;
-(BOOL)_shouldAvoidSynchronize;
-(BOOL)_synchronizeForced:(BOOL)arg1 ;
-(unsigned long long)maximumKeyCount;
-(unsigned long long)maximumKeyLength;
-(unsigned long long)maximumDataLengthPerKey;
-(unsigned long long)maximumTotalDataLength;
-(void)_useSourceAsyncWithBlock:(/*^block*/id)arg1 ;
-(void)_useSourceSyncWithBlock:(/*^block*/id)arg1 ;
-(void)registerDefaultValues:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unregisterFromDaemon;
-(long long)longLongForKey:(id)arg1 ;
-(void)setLongLong:(long long)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)finalize;
@end

