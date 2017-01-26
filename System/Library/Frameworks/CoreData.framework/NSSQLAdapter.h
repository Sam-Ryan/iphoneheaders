/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSSQLCore;

@interface NSSQLAdapter : NSObject {

	NSMutableArray* _connections;
	NSSQLCore* _sqlCore;

}
-(id)sqlCore;
-(unsigned)sqlTypeForExpressionConstantValue:(id)arg1 ;
-(BOOL)supportsCorrelatedSubqueries;
-(Class)statementClass;
-(Class)generatorClass;
-(id)newStatementWithEntity:(id)arg1 ;
-(id)newGeneratorWithStatement:(id)arg1 ;
-(id)_originalRowForUpdate:(id)arg1 ;
-(void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2 ;
-(id)_newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 ;
-(id)_statementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 ;
-(id)newStatementWithoutEntity;
-(id)typeStringForColumn:(id)arg1 ;
-(id)newStatementWithSQLString:(id)arg1 ;
-(void)_generateFragmentsForEntity:(id)arg1 inArray:(id)arg2 ;
-(id)typeStringForSQLType:(unsigned)arg1 ;
-(id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)newConnection;
-(id)createConnection;
-(BOOL)hasOpenConnections;
-(id)newInsertStatementWithRow:(id)arg1 ;
-(id)newUpdateStatementWithRow:(id)arg1 ;
-(id)newConstrainedValuesUpdateStatementWithRow:(id)arg1 ;
-(id)newDeleteStatementWithRow:(id)arg1 ;
-(id)newSelectStatementWithFetchRequest:(id)arg1 ;
-(id)newCountStatementWithFetchRequest:(id)arg1 ;
-(id)newCorrelationInsertStatementForRelationship:(id)arg1 ;
-(id)newCorrelationDeleteStatementForRelationship:(id)arg1 ;
-(id)newCorrelationMasterReorderStatementForRelationship:(id)arg1 ;
-(id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(id)newCorrelationReorderStatementForRelationship:(id)arg1 ;
-(id)newCreateTableStatementForEntity:(id)arg1 ;
-(id)newCreatePrimaryKeyTableStatement;
-(id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2 ;
-(id)newSimplePrimaryKeyUpdateStatementForEntity:(id)arg1 ;
-(id)newComplexPrimaryKeyUpdateStatementForEntity:(id)arg1 ;
-(id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3 ;
-(id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(BOOL)arg4 ;
-(id)newDropTableStatementForTableNamed:(id)arg1 ;
-(id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2 ;
-(id)newCreateTableStatementForManyToMany:(id)arg1 ;
-(id)newCreateIndexStatementForCorrelationTable:(id)arg1 ;
-(id)newCreateIndexStatementForColumn:(id)arg1 ;
-(id)newCreateIndexStatementForColumns:(id)arg1 ;
-(void)registerConnection:(id)arg1 ;
-(void)unregisterConnection:(id)arg1 ;
-(id)generateDeleteStatementsForRequest:(id)arg1 resultObject:(id*)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2 ;
-(id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2 ;
-(void)dealloc;
-(id)url;
-(id)type;
-(id)connections;
@end

