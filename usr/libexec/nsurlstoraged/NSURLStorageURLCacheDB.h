/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlstoraged
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nsurlstoraged/nsurlstoraged-Structs.h>
#import <nsurlstoraged/NSURLStorageDB.h>

@class NSMutableArray, NSLock, NSMutableSet;

@interface NSURLStorageURLCacheDB : NSURLStorageDB {

	sqlite3_stmtRef _sqlUpdateReceiverDataStmt;
	sqlite3_stmtRef _sqlInsertStmtResponse;
	sqlite3_stmtRef _sqlInsertStmtBlobData;
	sqlite3_stmtRef _sqlInsertStmtReceiverData;
	sqlite3_stmtRef _sqlUpdateResponseStmt;
	sqlite3_stmtRef _sqlUpdateBlobDataStmt;
	sqlite3_stmtRef _sqlSelectStmt;
	sqlite3_stmtRef _sqlSelectEntry_idAndRecevierDataForKeyStmt;
	sqlite3_stmtRef _sqlSelectIsDataOnFSForEntry_IDStmt;
	sqlite3_stmtRef _sqlSelectFileSystemFileForDeletionStmt;
	sqlite3_stmtRef _sqlSelectTimeStmt;
	sqlite3_stmtRef _sqlDeleteStmtResponse;
	sqlite3_stmtRef _sqlDeleteStmtBlobData;
	sqlite3_stmtRef _sqlDeleteStmtReceiverData;
	long long _schemaVersion;
	NSMutableArray* _entryIDsToDelete;
	NSLock* _timeRelativeLookupLock;
	unsigned char performTimeRelativeLookups;
	unsigned char _performingShrink;
	NSMutableSet* recentTimeStampLookups;
	unsigned long long _currentFSBackedUsage;
	unsigned long long _currentSQLiteDBUsage;
	unsigned long long _currentTotalPersistentCacheUsage;
	long long _minSizeForFileSystemBackedCacheItem;

}

@property (assign) unsigned long long currentFSBackedUsage;                          //@synthesize currentFSBackedUsage=_currentFSBackedUsage - In the implementation block
@property (assign) unsigned long long currentSQLiteDBUsage;                          //@synthesize currentSQLiteDBUsage=_currentSQLiteDBUsage - In the implementation block
@property (assign) unsigned long long currentTotalPersistentCacheUsage;              //@synthesize currentTotalPersistentCacheUsage=_currentTotalPersistentCacheUsage - In the implementation block
@property (assign) long long minSizeForFileSystemBackedCacheItem;                    //@synthesize minSizeForFileSystemBackedCacheItem=_minSizeForFileSystemBackedCacheItem - In the implementation block
@property (assign) unsigned char performingShrink;                                   //@synthesize performingShrink=_performingShrink - In the implementation block
@property (retain) NSMutableSet * recentTimeStampLookups; 
@property (assign) unsigned char performTimeRelativeLookups; 
-(id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 clientPid:(int)arg3 ;
-(id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 clientPid:(int)arg3 schemaCheck:(BOOL)arg4 ;
-(id)copyAllPartitionNames;
-(void)cleanupAndShutdown_Lock;
-(unsigned long long)getcurrentTotalPersistentCacheUsage;
-(BOOL)deleteResponseForRequestWithKey:(id)arg1 ;
-(void)setMinSizeForFileSystemBackedCacheItem:(long long)arg1 ;
-(void)shrinkDB;
-(void)updateFSBackedCacheUsageOnDisk;
-(void)updateSQLiteDBCacheUsageOnDisk;
-(void)setPerformingShrink:(unsigned char)arg1 ;
-(id)copyHostNamesForOptionalPartition:(id)arg1 ;
-(id)readDBReturningDictforKey:(id)arg1 cacheDataPath:(id*)arg2 cacheDataFile:(id*)arg3 withTaskManager:(id)arg4 ;
-(BOOL)isSchemaCurrent;
-(void)updateToCurrentSchema;
-(BOOL)openAndPrepareReadCacheDB;
-(void)setRecentTimeStampLookups:(NSMutableSet *)arg1 ;
-(BOOL)openAndPrepareWriteCacheDB_NoLock;
-(BOOL)_setDBSchemaAndPragmas;
-(void)setPerformTimeRelativeLookups:(unsigned char)arg1 ;
-(BOOL)_finalizeAllDBStatements;
-(BOOL)_finalizeWriteConnectionDBStatements;
-(void)_activateSecureDelete;
-(BOOL)_prepareDBInsertUpdateStatements;
-(BOOL)_prepareDBDeleteStatements;
-(BOOL)_prepareDBSelectStatements;
-(unsigned long long)currentTotalPersistentCacheUsage;
-(int)execSQLStatement:(const char*)arg1 onConnection:(sqlite3Ref)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(BOOL)arg4 ;
-(void)cleanupWriteConnections_NoLock;
-(BOOL)_finalizeDBSelectStatements;
-(BOOL)_finalizeDBInsertUpdateStatements;
-(BOOL)_finalizeDBDeleteStatements;
-(unsigned char)performingShrink;
-(int)stepSQLStatement:(sqlite3_stmtRef)arg1 toCompletionWithRetry:(long long)arg2 ;
-(entry_idAndRecevierDataInfo*)getEntryIDandReceiverDataForRequestKey:(const char*)arg1 keyLength:(long long)arg2 ;
-(long long)getMinSizeForVMCachedResource;
-(unsigned long long)currentFSBackedUsage;
-(void)setCurrentFSBackedUsage:(unsigned long long)arg1 ;
-(void)setCurrentTotalPersistentCacheUsage:(unsigned long long)arg1 ;
-(void)_ensureDBCapacityConstraints:(id)arg1 ;
-(long long)minSizeForFileSystemBackedCacheItem;
-(void)performTimeRelativeLookupWithInitialTime:(id)arg1 withTaskManager:(id)arg2 ;
-(id)createCachedResponseDictForTransmissionWithKey:(id)arg1 objectVersion:(long long)arg2 storagePolicy:(int)arg3 responseObjectBytes:(char*)arg4 responseObjectBytesLength:(int)arg5 protoProps:(char*)arg6 protoPropsLength:(int)arg7 receiverDataBytes:(char*)arg8 receiverDataLength:(int)arg9 requestObjectBytes:(char*)arg10 requestObjectBytesLength:(int)arg11 userInfoBytes:(const char*)arg12 useInfoLength:(int)arg13 isDataOnFS:(BOOL)arg14 cacheDirPath:(id)arg15 cacheFileName:(id)arg16 ;
-(BOOL)openCacheDB_NoLock;
-(void)_purgeAllFileSystemCacheData;
-(BOOL)_prepareDBStatements;
-(BOOL)writeDBwithCachedResponse_Lock:(id)arg1 withKey:(id)arg2 taskManager:(id)arg3 ;
-(NSMutableSet *)recentTimeStampLookups;
-(unsigned char)performTimeRelativeLookups;
-(unsigned long long)currentSQLiteDBUsage;
-(void)setCurrentSQLiteDBUsage:(unsigned long long)arg1 ;
-(void)deleteResponsesSinceDate:(id)arg1 ;
-(void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2 ;
-(void)deleteAllResponses;
-(void)dealloc;
-(id)init;
-(void)commitTransaction;
-(void)beginTransaction;
@end

