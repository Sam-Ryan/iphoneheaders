/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSyncedClient;
@class NSUbiquitousKeyValueStore, NSMutableDictionary, NSArray, NSMutableArray, NSDictionary;

@interface MapsSyncManager : NSObject {

	BOOL _running;
	NSUbiquitousKeyValueStore* _kvStore;
	NSMutableDictionary* _items;
	BOOL _initialSetup;
	BOOL _updatingFromKVS;
	NSMutableDictionary* _debugDictionary;
	id<MapsSyncedClient> _client;

}

@property (nonatomic,readonly) id<MapsSyncedClient> client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * orderedItems; 
@property (nonatomic,readonly) NSArray * clientSyncedItems; 
@property (nonatomic,readonly) NSMutableArray * mutableClientSyncedItems; 
@property (readonly) BOOL invertedOrdering; 
@property (nonatomic,readonly) NSDictionary * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * debugDictionary;                    //@synthesize debugDictionary=_debugDictionary - In the implementation block
+(id)removeDupes:(id)arg1 ;
+(void)mergeOnNextSyncForStorageWithSyncIdentifier:(id)arg1 ;
+(id)_alreadySyncedKeyForSyncIdentifier:(id)arg1 ;
+(id)syncIdentifier;
-(void)simulateKVSNotification:(id)arg1 ;
-(id)_itemAtIndex:(unsigned long long)arg1 ;
-(void)_setupStore;
-(id)debugKeyForSyncedItem:(id)arg1 ;
-(void)checkConsistency;
-(BOOL)shouldSyncItemAtIndex:(unsigned long long)arg1 ;
-(void)didAddSyncedItemAtIndexes:(id)arg1 ;
-(void)didAddSyncedItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)invertedOrdering;
-(void)kvstoreDidChange:(id)arg1 ;
-(id)_cloudKeyForItemIdentifier:(id)arg1 ;
-(id)alreadySyncedKey;
-(void)mergeOnNextSync;
-(NSArray *)clientSyncedItems;
-(id)_itemIdentifierFromCloudKey:(id)arg1 ;
-(void)_clientAddObserversAtIndexes:(id)arg1 ;
-(void)_clientInsertItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)_clientRemoveObserversAtIndexes:(id)arg1 ;
-(id)_kvsDidAddItems:(id)arg1 ;
-(NSArray *)orderedItems;
-(id)_kvsDictionaryRepresentation;
-(void)_clientUpdateItemsAtIndexes:(id)arg1 ;
-(BOOL)useClientPositionForItem:(id)arg1 ;
-(void)_clientDidAddItems:(id)arg1 atIndexes:(id)arg2 ;
-(id)_kvsDictionaryForKey:(id)arg1 ;
-(void)_checkAndDistributeItemsAroundIndex:(unsigned long long)arg1 ;
-(void)_syncFromKVSAndMerge:(BOOL)arg1 changedKeys:(id)arg2 ;
-(void)_kvsDidRemoveItems:(id)arg1 ;
-(BOOL)_isConcernedByCloudKey:(id)arg1 ;
-(id)_itemFromClientItem:(id)arg1 ;
-(BOOL)_kvsDidModifyItem:(id)arg1 withCloudData:(id)arg2 ;
-(void)_clientRemoveItemsAtIndexes:(id)arg1 ;
-(id)_validClientIndexSetForIndexes:(id)arg1 ;
-(id)initWithClient:(id)arg1 debugDictionary:(id)arg2 ;
-(void)_clientDidRemoveItemsAtIndexes:(id)arg1 ;
-(void)_synchronizeItemForKey:(id)arg1 ;
-(NSMutableArray *)mutableClientSyncedItems;
-(void)didModifySyncedItem:(id)arg1 ;
-(void)didRemoveSyncedItemAtIndex:(unsigned long long)arg1 ;
-(void)_clientDidModifyItem:(id)arg1 ;
-(void)didRemoveSyncedItemsAtIndexes:(id)arg1 ;
-(void)reset;
-(void)stop;
-(NSDictionary *)items;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableDictionary *)debugDictionary;
-(void)setDebugDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(id<MapsSyncedClient>)client;
@end

