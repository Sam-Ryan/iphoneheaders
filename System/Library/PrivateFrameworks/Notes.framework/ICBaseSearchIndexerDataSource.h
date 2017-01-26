/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSearchIndexerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSHashTable, NSString;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {

	BOOL _observingChanges;
	BOOL _needsReindexing;
	BOOL _reindexing;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableSet* _objectIDsToProcess;
	NSMutableSet* _objectIDsBeingProcessed;
	NSMutableDictionary* _objectIDsByIdentifier;
	NSMutableDictionary* _identifiersByObjectID;
	NSHashTable* _contextsToObserve;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToProcess;                            //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsBeingProcessed;                       //@synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectIDsByIdentifier;                  //@synthesize objectIDsByIdentifier=_objectIDsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifiersByObjectID;                  //@synthesize identifiersByObjectID=_identifiersByObjectID - In the implementation block
@property (nonatomic,retain) NSHashTable * contextsToObserve;                              //@synthesize contextsToObserve=_contextsToObserve - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (assign) BOOL needsReindexing;                                                   //@synthesize needsReindexing=_needsReindexing - In the implementation block
@property (getter=isReindexing) BOOL reindexing;                                           //@synthesize reindexing=_reindexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setObjectIDsToProcess:(NSMutableSet *)arg1 ;
-(void)setObjectIDsBeingProcessed:(NSMutableSet *)arg1 ;
-(void)setObjectIDsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setIdentifiersByObjectID:(NSMutableDictionary *)arg1 ;
-(void)setContextsToObserve:(NSHashTable *)arg1 ;
-(void)setReindexing:(BOOL)arg1 ;
-(id)searchableItemForObject:(id)arg1 ;
-(NSHashTable *)contextsToObserve;
-(void)resetContextObservers;
-(NSMutableSet *)objectIDsToProcess;
-(NSMutableDictionary *)objectIDsByIdentifier;
-(NSMutableDictionary *)identifiersByObjectID;
-(id)objectIDsFromSearchableItems:(id)arg1 ;
-(NSMutableSet *)objectIDsBeingProcessed;
-(BOOL)isReindexing;
-(id)stateDefaultsKey;
-(void)loadState;
-(id)persistentStoreCoordinator;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)dataSourceIdentifier;
-(void)saveState;
-(void)removeContextToObserve:(id)arg1 ;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(void)addContextToObserve:(id)arg1 ;
-(BOOL)needsReindexing;
-(id)searchableItemsWithIdentifiers:(id)arg1 ;
-(id)searchableItemsNeedingIndexing;
-(id)searchableItemIdentifiersToBeDeleted;
-(id)allSearchableItems;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2 ;
-(void)searchIndexerWillIndexSearchableItems:(id)arg1 ;
-(void)searchIndexerDidFinishIndexingItems:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillBeginReindexing;
-(void)searchIndexerDidFinishReindexingWithError:(id)arg1 ;
-(void)stopObservingChanges;
-(id)searchableItemsForObjects:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
-(void)setNeedsReindexing:(BOOL)arg1 ;
-(void)setObservingChanges:(BOOL)arg1 ;
@end

