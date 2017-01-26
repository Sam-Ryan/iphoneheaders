/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSObject;

@interface GEOLogMessageCacheManager : NSObject {

	NSString* _logMessageCacheFilePath;
	sqlite3Ref _logMessageCacheDatabase;
	NSString* _adaptorId;
	BOOL _fromLogFrameworkAdaptor;
	long long _logMessageCacheIterator;
	long long _logMessageCacheEndIterator;
	NSMutableArray* _retrivedLogMessageCacheIds;
	int _currentRetrivedLogMessageRetryCount;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	void* _databaseQueueIdentityKey;
	void* _databaseQueueIdentityValue;

}

@property (readonly) int currentRetrivedLogMessageRetryCount;              //@synthesize currentRetrivedLogMessageRetryCount=_currentRetrivedLogMessageRetryCount - In the implementation block
-(void)dealloc;
-(void)_createTables;
-(void)_openCreateLogMessageCacheDBFile;
-(void)purgeCurrentlyRetrievedLogMessagesFromCache;
-(void)insertLogMessageIntoCache:(id)arg1 ;
-(void)closeLogMessageCache;
-(void)_updateLogMessageCacheDBUserVersion;
-(id)retrieveNextBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2 ;
-(void)resetLogMessageCacheIterator;
-(void)_deleteAllExpiredLogMessages:(double)arg1 ;
-(void)updateCurrentlyRetrievedLogMessagesRetryCount;
-(id)retrieveFirstBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2 ;
-(long long)_queryLogMessageCacheDBUserVersion;
-(void)_deleteExpiredLogMessageCacheDBFile:(double)arg1 ;
-(void)openLogMessageCache;
-(BOOL)_logMessageCacheFileExists;
-(void)_cleanupLogMessageCacheDatabase;
-(BOOL)isLogMessageCacheEmpty;
-(long long)_retrieveEndLogMessageCacheIterator;
-(BOOL)_usingInMemoryLogMessageCacheFile;
-(id)initWithLogMessageCacheFilePath:(id)arg1 adaptorId:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3 ;
-(void)_addRetryCountColumnToTable;
-(void)purgeExpiredLogMessagesFromCache:(double)arg1 ;
-(int)currentRetrivedLogMessageRetryCount;
-(void)_openLogMessageCacheDBFile;
-(long long)_getNumberOfLogMessagesInCache;
-(void)_migrateDatabaseIfNeeded;
-(void)_executeSQL:(id)arg1 ;
-(id)_groupIDOfNextPendingLogMessage;
-(id)_retrieveBatchOfLogMessagesLimitCount:(long long)arg1 limitSize:(long long)arg2 ;
@end

