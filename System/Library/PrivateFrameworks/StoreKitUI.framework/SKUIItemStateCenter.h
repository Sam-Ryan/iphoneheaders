/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, SSSoftwareUpdatesStore, SSDownloadManager, NSMutableArray, NSDate, NSMutableDictionary, NSCountedSet, NSHashTable, SSAppPurchaseHistoryDatabase, SKUIStoreItemRelationshipCounsellor, NSString;

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _appInstallRestricted;
	SSSoftwareUpdatesStore* _appUpdatesStore;
	char _canAccessAppUpdates;
	char _canAccessPurchaseHistory;
	SSDownloadManager* _downloadManager;
	NSMutableArray* _finishLoadBlocks;
	long long _gratisState;
	NSDate* _gratisStateLastUpdate;
	long long _loadCount;
	NSMutableDictionary* _itemStates;
	NSObject*<OS_dispatch_queue> _mediaLibraryQueue;
	NSMutableArray* _mediaLibraries;
	NSCountedSet* _observedLibraryItems;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	long long _parentalControlsRank;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	SKUIStoreItemRelationshipCounsellor* _relationshipCouncellor;
	char _runningInStoreDemoMode;

}

@property (getter=isApplicationInstallRestricted,readonly) BOOL applicationInstallRestricted; 
@property (getter=isGratisEligible,nonatomic,readonly) BOOL gratisEligible; 
@property (readonly) long long parentalControlsRank; 
@property (getter=isRunningInStoreDemoMode,readonly) BOOL runningInStoreDemoMode; 
@property (readonly) SSSoftwareUpdatesStore * appUpdatesStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCenter;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(BOOL)isRunningInStoreDemoMode;
-(void)removeObserver:(id)arg1 ;
-(void)_reloadAppUpdatesStore;
-(void)_reloadDownloadManager;
-(void)_reloadPurchaseHistory;
-(void)_reloadSoftwareLibrary;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_storefrontDidChangeNotification:(id)arg1 ;
-(void)_fireFinishLoadBlocksIfNecessary;
-(BOOL)isApplicationInstallRestricted;
-(long long)parentalControlsRank;
-(id)stateForItemWithIdentifier:(long long)arg1 ;
-(id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)metricsActionTypeForItem:(id)arg1 ;
-(void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelDownloadForItemWithIdentifier:(long long)arg1 ;
-(id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2 ;
-(id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2 ;
-(void)_performPurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_newPurchasesWithItems:(id)arg1 ;
-(void)reloadFromServer;
-(BOOL)_gratisStateIsValid;
-(void)_setGratisIdentifiers:(id)arg1 error:(id)arg2 ;
-(void)_reloadStateForObservedMediaLibraryItems;
-(id)_addState:(unsigned long long)arg1 forItemIdentifier:(id)arg2 ;
-(void)_notifyObserversOfStateChange:(id)arg1 ;
-(id)_removeState:(unsigned long long)arg1 forItemIdentifier:(id)arg2 ;
-(id)_appUpdatesStore;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_reloadMediaLibraryStateForItems:(id)arg1 ;
-(SSSoftwareUpdatesStore *)appUpdatesStore;
-(void)_setAvailableUpdatesWithUpdates:(id)arg1 decrementLoadCount:(BOOL)arg2 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performActionForLibraryItem:(id)arg1 ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_notifyObserversOfStateChanges:(id)arg1 ;
-(id)_copyItemsStatesForLibraryItems:(id)arg1 ;
-(void)_notifyObserversOfMediaLibraryChange;
-(void)_notifyObserversOfRestrictionsChange;
-(void)_updatesStoreChangeNotification:(id)arg1 ;
-(void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2 ;
-(void)_notifyObserversOfPurchasesResponses:(id)arg1 ;
-(void)_removePurchasingItemsForPurchases:(id)arg1 ;
-(void)_setDownloads:(id)arg1 ;
-(id)_purchaseHistoryDatabase;
-(void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1 ;
-(void)_setFirstPartyRemovableItemsIdentifiers:(id)arg1 ;
-(void)_setPurchaseHistoryVPPItemsWithIdentifiers:(id)arg1 ;
-(void)_setInstalledItems:(id)arg1 ;
-(id)_setStateFlag:(unsigned long long)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(BOOL)arg3 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)addMediaLibrary:(id)arg1 ;
-(void)finishLoadingWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isGratisEligible;
-(BOOL)isItemRestrictedWithParentalControlsRank:(long long)arg1 ;
-(id)performActionForItem:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)purchaseItems:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2 ;
-(void)reloadMediaLibrary:(id)arg1 ;
-(void)removeMediaLibrary:(id)arg1 ;
-(id)stateForItemWithStoreIdentifier:(id)arg1 ;
-(void)addDownloads:(id)arg1 ;
-(void)addManifestDownloadWithURL:(id)arg1 placeholderMetadata:(id)arg2 ;
-(void)beginObservingLibraryItems:(id)arg1 ;
-(void)endObservingLibraryItems:(id)arg1 ;
-(void)findLibraryItemsForContentIdentifiers:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)gratisEligibleItemIdentifiers;
-(void)purchaseTone:(id)arg1 withProperties:(id)arg2 clientContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_setStateFlag:(unsigned long long)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(BOOL)arg3 ;
@end

