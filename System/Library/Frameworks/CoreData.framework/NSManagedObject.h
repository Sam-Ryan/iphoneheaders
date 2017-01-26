/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext, NSManagedObjectID, NSEntityDescription;

@interface NSManagedObject : NSObject {

	int _cd_rc;
	unsigned long long _cd_stateFlags;
	id _cd_rawData;
	id _cd_entity;
	NSManagedObjectContext* _cd_managedObjectContext;
	NSManagedObjectID* _cd_objectID;
	unsigned long long _cd_extraFlags;
	id _cd_observationInfo;
	id* _cd_snapshots;
	unsigned long long _cd_lockingInfo;
	id _cd_queueReference;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isInserted,nonatomic,readonly) BOOL inserted; 
@property (getter=isUpdated,nonatomic,readonly) BOOL updated; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) BOOL hasPersistentChangedValues; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
@property (nonatomic,readonly) unsigned long long faultingState; 
+(id)objectFromObjectID:(id)arg1 context:(id)arg2 ;
+(id)_retain_1;
+(void)_release_1;
+(id)allocWithEntity:(id)arg1 ;
+(void)_entityDeallocated;
+(BOOL)_isGeneratedClass;
+(Class)classForEntity:(id)arg1 ;
+(id)_PFPlaceHolderSingleton;
+(BOOL)_useFastValidationMethod;
+(BOOL)_isGeneratedClass_1;
+(SCD_Struct_NS8*)_PFMOClassFactoryData;
+(unsigned)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned)arg3 ;
+(void)_initializeAccessorStubs;
+(void)_initializePrimitiveAccessorStubs;
+(id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned)arg3 ;
+(BOOL)_hasOverriddenAwake;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)retain;
+(void)release;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)alloc_10_4;
+(id)allocWithZone_10_4:(NSZone*)arg1 ;
+(char*)_transientPropertiesChangesMask__;
+(id)_PFPlaceHolderSingleton_core;
+(BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)postNotificationOnMainThreadWithName:(id)arg1 ;
-(void)obtainPermanentObjectIDIfNecessary;
-(id)_obsoleteAttributes;
-(id)_removeObsoleteKeysFromDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2 ;
-(void)setValuesWithObject:(id)arg1 ;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4 ;
-(id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg1 ;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3 ;
-(id)_implicitObservationInfo;
-(id)_faultHandler__;
-(void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned long long)arg1 newValue:(id)arg2 ;
-(void)_setHasRetainedStoreResources__:(BOOL)arg1 ;
-(id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5 ;
-(BOOL)_isValidRelationshipDestination__;
-(void)_setSuppressingChangeNotifications__:(BOOL)arg1 ;
-(void)_clearRawPropertiesWithHint:(NSRange)arg1 ;
-(BOOL)_isUnprocessedDeletion__;
-(BOOL)_isPendingDeletion__;
-(BOOL)_hasRetainedStoreResources__;
-(void)_setSuppressingKVO__:(BOOL)arg1 ;
-(BOOL)_isPendingUpdate__;
-(BOOL)_isUnprocessedUpdate__;
-(BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2 ;
-(BOOL)_validateForSave:(id*)arg1 ;
-(id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4 ;
-(id)_allProperties__;
-(id)_originalSnapshot__;
-(id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
-(id)_persistentProperties__;
-(id)_reservedCurrentEventSnapshot;
-(id)_lastSnapshot__;
-(id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2 ;
-(id)_newPropertiesForRetainedTypes:(unsigned*)arg1 andCopiedTypes:(unsigned*)arg2 preserveFaults:(BOOL)arg3 ;
-(id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
-(id)_transientProperties__;
-(BOOL)_isKindOfEntity:(id)arg1 ;
-(void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3 ;
-(void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3 ;
-(void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4 ;
-(void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned long long)arg3 onSet:(id)arg4 ;
-(void)_propagateDelete:(unsigned)arg1 ;
-(id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2 ;
-(id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2 ;
-(BOOL)_validatePropertiesWithError:(id*)arg1 ;
-(void)diffOrderedSets:(id)arg1 :(id)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6 :(id*)arg7 ;
-(void)_genericUpdateFromSnapshot:(id)arg1 ;
-(id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2 ;
-(id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4 ;
-(BOOL)wasForgotten;
-(BOOL)_hasAnyObservers__;
-(BOOL)_hasPendingChanges;
-(void)_clearPendingChanges__;
-(BOOL)_hasUnprocessedChanges__;
-(void)_clearUnprocessedChanges__;
-(void)_clearAllChanges__;
-(BOOL)_isSuppressingChangeNotifications__;
-(BOOL)_isSuppressingKVO__;
-(void)_setPendingDeletion__:(BOOL)arg1 ;
-(BOOL)_isPendingInsertion__;
-(void)_setPendingInsertion__:(BOOL)arg1 ;
-(void)_setPendingUpdate__:(BOOL)arg1 ;
-(void)_setUnprocessedDeletion__:(BOOL)arg1 ;
-(BOOL)_isUnprocessedInsertion__;
-(void)_setUnprocessedInsertion__:(BOOL)arg1 ;
-(void)_setUnprocessedUpdate__:(BOOL)arg1 ;
-(unsigned)_stateFlags;
-(void)_setLastSnapshot__:(id)arg1 ;
-(void)_nilOutReservedCurrentEventSnapshot__;
-(id)_changedValuesForCurrentEvent;
-(unsigned)_versionReference__;
-(void)_setVersionReference__:(unsigned)arg1 ;
-(void)_setObjectID__:(id)arg1 ;
-(void)_setOriginalSnapshot__:(id)arg1 ;
-(id)_referenceQueue__;
-(id)_newChangedValuesForRefresh__;
-(id)_newNestedSaveChangedValuesForParent:(id)arg1 ;
-(id)_newSnapshotForUndo__;
-(id)_newAllPropertiesWithRelationshipFaultsIntact__;
-(id)_newCommittedSnapshotValues;
-(id)_changedTransientProperties__;
-(void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4 ;
-(void)_propagateDelete;
-(void)_prepropagateDeleteForMerge;
-(void)_updateFromSnapshot:(id)arg1 ;
-(void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(BOOL)arg2 ;
-(void)_updateFromUndoSnapshot:(id)arg1 ;
-(void)willFireFault;
-(void)didFireFault;
-(void)willRefresh:(BOOL)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(id)_descriptionValues;
-(int)_batch_release__;
-(BOOL)validateForDelete:(id*)arg1 ;
-(BOOL)hasPersistentChangedValues;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)_tryRetain;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void*)observationInfo;
-(NSManagedObjectContext *)managedObjectContext;
-(NSEntityDescription *)entity;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(BOOL)isInserted;
-(BOOL)isUpdated;
-(void)awakeFromInsert;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(void)prepareForDeletion;
-(void)willSave;
-(id)changedValues;
-(void)didSave;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(void)willAccessValueForKey:(id)arg1 ;
-(void)didAccessValueForKey:(id)arg1 ;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(id)objectIDsForRelationshipNamed:(id)arg1 ;
-(BOOL)hasFaultForRelationshipNamed:(id)arg1 ;
-(id)primitiveValueForKey:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)changedValuesForCurrentEvent;
-(id)committedValuesForKeys:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)hasChanges;
-(NSManagedObjectID *)objectID;
-(BOOL)isFault;
-(unsigned long long)faultingState;
-(BOOL)isDeleted;
-(void)setNilValueForKey:(id)arg1 ;
-(void)finalize;
@end

