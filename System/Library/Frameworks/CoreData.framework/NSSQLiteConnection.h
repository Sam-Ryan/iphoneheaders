/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSSQLConnection.h>

@class NSSQLEntity, NSSQLiteStatement, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray;

@interface NSSQLiteConnection : NSSQLConnection {

	sqlite3Ref _db;
	sqlite3_stmtRef _vmstatement;
	int _rowsProcessedCount;
	unsigned _lastEntityKey;
	NSSQLEntity* _finalEntity;
	NSSQLEntity* _lastEntity;
	sqlite3_stmtRef _fetchPKStatement;
	sqlite3_stmtRef _updatePKStatement;
	NSSQLiteStatement* _beginStatement;
	NSSQLiteStatement* _commitStatement;
	NSSQLiteStatement* _rollbackStatement;
	NSMutableDictionary* _cachedFetchStatements;
	NSMutableSet* _vmCachedStatements;
	NSMutableDictionary* _pragmaSettings;
	CFDictionaryRef _cachedEntityUpdateStatements;
	CFDictionaryRef _cachedEntityConstrainedValuesUpdateStatements;
	double _timeOutOption;
	double _timeOutIncrement;
	void** _extraBuffersForRegisteredFunctions[5];
	NSString* _dbPathRegisteredWithBackupd;
	long long _vacuumTracker;
	NSMutableArray* _temporaryTables;
	struct {
		unsigned _readyToBind : 1;
		unsigned _fetchInProgress : 1;
		unsigned _fileSystemType : 2;
		unsigned _proxyLocking : 1;
		unsigned _vacuumSetupNeeded : 1;
		unsigned _usingWAL : 1;
		unsigned _disallowReconnect : 1;
		unsigned _reserved : 24;
	}  _sqliteConnectionFlags;
	unsigned long long _debugInode;

}
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(int)readMagicWordFromPath:(const char*)arg1 ;
+(int)openAtPath:(const char*)arg1 handle:(sqlite3*)arg2 flags:(int)arg3 module:(const char*)arg4 ;
+(const char*)_databaseOpenURLStringForURL:(id)arg1 ;
+(void)_setDebugFlags:(int)arg1 ;
+(void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
+(void)initialize;
-(id)_adapter;
-(id)_beginPowerAssertionWithAssert:(unsigned long long*)arg1 ;
-(void)_endPowerAssertionWithAssert:(unsigned long long)arg1 andApp:(id)arg2 ;
-(id)cachedStatementForRequest:(id)arg1 ;
-(void)incrementInUseCounterForCachedStatementForRequest:(id)arg1 ;
-(void)endFetch;
-(BOOL)isFetchInProgress;
-(void)bindTempTableForBindIntarray:(id)arg1 ;
-(void)prepareSQLStatement:(id)arg1 ;
-(void)cacheCurrentDBStatementOn:(id)arg1 ;
-(int)rowsChangedByLastStatement;
-(void)resetSQLStatement;
-(void)releaseSQLStatement;
-(void)willCreateSchema;
-(BOOL)hasMetadataTable;
-(void)didCreateSchema;
-(id)newFetchedArray;
-(BOOL)hasCachedModelTable;
-(id)initWithAdapter:(id)arg1 ;
-(void)_forceDisconnectOnError;
-(BOOL)canConnect;
-(BOOL)databaseIsEmpty;
-(void)writeCorrelationChangesFromTracker:(id)arg1 ;
-(void)insertRow:(id)arg1 ;
-(void)updateRow:(id)arg1 ;
-(void)updateConstrainedValuesForRow:(id)arg1 ;
-(void)deleteRow:(id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2 ;
-(CFArrayRef)rawIntegerRowsForSQL:(id)arg1 ;
-(long long)fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(id)fetchTableNames;
-(id)fetchTableCreationSQL;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned)arg2 ;
-(void)prepareForPrimaryKeyGeneration;
-(void)endPrimaryKeyGeneration;
-(BOOL)hasPrimaryKeyTable;
-(void)_performPostSaveTasks;
-(id)fetchUbiquityKnowledgeVector;
-(void)updateUbiquityKnowledgeVector:(id)arg1 ;
-(void)replaceUbiquityKnowledgeVector:(id)arg1 ;
-(void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(void)addPeerRange:(id)arg1 ;
-(void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6 ;
-(id)allPeerRanges;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg1 ;
-(void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2 ;
-(id)ubiquityTableKeysAndValues;
-(id)ubiquityTableValueForKey:(id)arg1 ;
-(void)dropUbiquityTables;
-(void)cacheStatement:(id)arg1 forRequest:(id)arg2 ;
-(void)clearCachedStatementForRequestWithIdentifier:(id)arg1 ;
-(id)generateStatementForCheckingUniqueAttributesOnObjects:(id)arg1 ;
-(id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2 ;
-(id)executeAttributeUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2 ;
-(id)executeMulticolumnUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2 ;
-(BOOL)isLocalFS;
-(void)_ensureNoStatementPrepared;
-(void)_ensureNoFetchInProgress;
-(void)_ensureDatabaseOpen;
-(long long)_fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(void)_executeSQLString:(id)arg1 ;
-(BOOL)performIntegrityCheck;
-(void)_registerExtraFunctions;
-(void)_configureSynchronousMode;
-(void)_configureIntegrityCheck;
-(void)_configurePragmaOptions:(int)arg1 createdSchema:(BOOL)arg2 ;
-(void)_configureUbiquityMetadataTable;
-(void)_clearTransactionCaches;
-(void)_clearCachedStatements;
-(void)_finalizeStatement;
-(void)_ensureNoTransactionOpen;
-(void)_setupVacuumIfNecessary;
-(void)_bindVariablesWithInsertedRow:(id)arg1 ;
-(void)_clearBindVariablesForInsertedRow;
-(int)_rowsChangedByLastExecute;
-(id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(CFBitVectorRef)arg2 ;
-(void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(CFBitVectorRef)arg3 ;
-(void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(CFBitVectorRef)arg3 ;
-(void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(CFBitVectorRef)arg2 ;
-(id)cachedUpdateConstrainedValuesStatmentForEntity:(id)arg1 ;
-(void)cacheUpdateConstrainedValuesStatement:(id)arg1 forEntity:(id)arg2 ;
-(void)_bindVariablesForConstrainedValuesWithRow:(id)arg1 ;
-(void)_clearBindVariablesForConstrainedValuesUpdateStatement:(id)arg1 ;
-(void)_bindVariablesWithDeletedRow:(id)arg1 ;
-(void)executeCorrelationChangesForValue1:(unsigned long long)arg1 value2:(unsigned long long)arg2 value3:(unsigned long long)arg3 value4:(unsigned long long)arg4 ;
-(void)writeCorrelationInsertsFromTracker:(id)arg1 ;
-(void)writeCorrelationDeletesFromTracker:(id)arg1 ;
-(void)writeCorrelationMasterReordersFromTracker:(id)arg1 ;
-(void)writeCorrelationReordersFromTracker:(id)arg1 ;
-(void)_clearOtherStatements;
-(id)_newValueForColumn:(id)arg1 atIndex:(unsigned)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)handleCorruptedDB:(id)arg1 ;
-(BOOL)_hasTableWithName:(id)arg1 ;
-(void)_configurePageSize;
-(void)_configureAutoVacuum;
-(long long)_getCurrentAutoVacuumValue;
-(id)generateSubselectForColumn:(id)arg1 givenObjects:(id)arg2 ;
-(sqlite3_stmtRef)_vmstatement;
-(void*)_buffersForRegisteredFunctions;
-(void)dealloc;
-(void)commitTransaction;
-(void)connect;
-(void)disconnect;
-(void)rollbackTransaction;
-(void)beginTransaction;
-(void)execute;
-(void)finalize;
-(BOOL)isOpen;
@end

