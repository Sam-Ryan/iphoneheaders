/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(id)createNonUniqueIndicesForColumns;
+(id)joinClausesForProperty:(id)arg1 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(id)_insertAssociationEntryWithAssociation:(id)arg1 object:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)tableAliases;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)deleteStatementForAssociationWithDatabase:(id)arg1 ;
+(id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1 ;
+(BOOL)_enumerateAssociationsWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 healthDatabase:(id)arg5 error:(id*)arg6 block:(/*^block*/id)arg7 ;
@end

