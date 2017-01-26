/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/TIUserDictionaryServer.h>

@protocol TIUserDictionaryServer <NSObject>
@required
-(void)requestPersistentStoreURLWithCompletionHandler:(/*^block*/id)arg1;
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

#import <libobjc.A.dylib/NSManagedObjectContextFaultingDelegate.h>
#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSPersistentStoreCoordinator, NSManagedObjectContext, NSObject, NSArray, NSMutableArray, NSDate, NSPersistentStore, NSString;

@interface TIUserDictionaryServer : NSObject <NSXPCListenerDelegate, TIUserDictionaryServer, NSManagedObjectContextFaultingDelegate, TIKeyboardActivityObserving> {

	NSXPCListener* _listener;
	BOOL _suspendedForAccountChange;
	BOOL _forceMaintenance;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _cachedPhraseShortcutPairs;
	NSMutableArray* _observers;
	long long _recentClientCount;
	NSDate* _lastMaintenanceDate;
	long long _importedSinceMaintenance;
	unsigned long long _keyboardActivityState;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;                    //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                                //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * persistentStore; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                                   //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,getter=isSuspendedForAccountChange,nonatomic) BOOL suspendedForAccountChange;              //@synthesize suspendedForAccountChange=_suspendedForAccountChange - In the implementation block
@property (nonatomic,retain) NSArray * cachedPhraseShortcutPairs;                                            //@synthesize cachedPhraseShortcutPairs=_cachedPhraseShortcutPairs - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                                                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) long long recentClientCount;                                                    //@synthesize recentClientCount=_recentClientCount - In the implementation block
@property (assign,nonatomic) BOOL forceMaintenance;                                                          //@synthesize forceMaintenance=_forceMaintenance - In the implementation block
@property (nonatomic,retain) NSDate * lastMaintenanceDate;                                                   //@synthesize lastMaintenanceDate=_lastMaintenanceDate - In the implementation block
@property (assign,nonatomic) long long importedSinceMaintenance;                                             //@synthesize importedSinceMaintenance=_importedSinceMaintenance - In the implementation block
@property (nonatomic,readonly) unsigned long long keyboardActivityState;                                     //@synthesize keyboardActivityState=_keyboardActivityState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)legacyImportFilePaths;
+(double)decrementClientDelay;
+(id)legacyStorePath;
+(id)legacyImportWordKeyPairsFromFiles:(id)arg1 ;
+(id)basePersistentStoreURL;
-(NSPersistentStore *)persistentStore;
-(id)entityDescription;
-(void)dealloc;
-(id)init;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableArray *)observers;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(void)requestPersistentStoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)entriesMatchingPredicate:(id)arg1 ;
-(void)buddySetupDidFinish;
-(id)entriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(BOOL)isSuspendedForAccountChange;
-(void)persistentStoreDidImportUbiquitousContentChanges:(id)arg1 ;
-(void)loadMaintenancePreferencesIfNecessary;
-(BOOL)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg1 firstDelete:(BOOL)arg2 ;
-(void)didMaintenance;
-(void)setRecentClientCount:(long long)arg1 ;
-(void)setCachedPhraseShortcutPairs:(NSArray *)arg1 ;
-(void)didImportSampleShortcuts;
-(BOOL)forceMaintenance;
-(void)decrementRecentClientCountAfterDelay;
-(void)importSampleShortcutsIfNecessary;
-(BOOL)detectAndCleanDuplicatesWithContext:(id)arg1 ;
-(unsigned long long)keyboardActivityState;
-(NSArray *)cachedPhraseShortcutPairs;
-(void)didMergeEntriesForOtherLocalPeers:(id)arg1 ;
-(id)entriesForValidationOfTransaction:(id)arg1 ;
-(BOOL)migrateEntriesFromStoreAtURL:(id)arg1 ;
-(BOOL)needsSampleShortcutsPreference;
-(void)managedKeyboardSettingsDidChange:(id)arg1 ;
-(NSDate *)lastMaintenanceDate;
-(long long)recentClientCount;
-(void)migrateSundanceData;
-(id)entriesUsingSortDescriptors:(id)arg1 ;
-(BOOL)retirePersistentStoreAtURL:(id)arg1 ;
-(id)insertEntryWithPhrase:(id)arg1 shortcut:(id)arg2 ;
-(id)insertEntryWithValue:(id)arg1 initializedFromObject:(id)arg2 ;
-(BOOL)mergeShortcutsFromContext:(id)arg1 ;
-(BOOL)needsMaintenance;
-(id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg1 toToken:(id)arg2 withLastKnownToken:(id)arg3 shouldDeleteFirst:(BOOL*)arg4 ;
-(void)handleIdleTimeout;
-(BOOL)shouldMergeShortcut:(id)arg1 phrase:(id)arg2 intoContext:(id)arg3 ;
-(void)migrateTellurideData;
-(id)fetchPhraseShortcutPairs;
-(void)unloadPersistentStore;
-(BOOL)keyboardShortcutsAllowed;
-(void)deleteAllEntries;
-(void)closeLibrarianConnection;
-(void)importSampleShortcuts;
-(void)persistentStoreCoordinatorStoresDidChange:(id)arg1 ;
-(BOOL)mergeShortcut:(id)arg1 phrase:(id)arg2 fromContext:(id)arg3 ;
-(void)assertCoreDataQueue;
-(void)incrementRecentClientCount;
-(void)initializePersistentStoreIfNecessary;
-(long long)importedSinceMaintenance;
-(void)setForceMaintenance:(BOOL)arg1 ;
-(void)importLegacyEntries;
-(void)notifyObservers;
-(BOOL)mergeEntriesForOtherLocalPeersIfNecessary:(id)arg1 ;
-(void)performMaintenanceIfNecessary;
-(id)entriesToDeleteForTransaction:(id)arg1 ;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)loadPersistentStoreIfNecessary;
-(void)setImportedSinceMaintenance:(long long)arg1 ;
-(id)appleLanguagesPreference;
-(long long)compareEntry:(id)arg1 toEntry:(id)arg2 withSortDescriptors:(id)arg3 ;
-(void)deleteDuplicatesOfShortcut:(id)arg1 phrase:(id)arg2 count:(long long)arg3 withContext:(id)arg4 ;
-(BOOL)mergeEntriesForUbiquityIdentityChangeIfNecessary;
-(void)keyboardActivityDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)setLastMaintenanceDate:(NSDate *)arg1 ;
-(void)persistentStoreCoordinatorStoresWillChange:(id)arg1 ;
-(void)didMergeEntriesForNewUbiquityIdentity:(id)arg1 ;
-(void)setSuspendedForAccountChange:(BOOL)arg1 ;
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)save;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

