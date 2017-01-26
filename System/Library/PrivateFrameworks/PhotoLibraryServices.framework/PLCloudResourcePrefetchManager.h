/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, NSMutableSet, NSDate, NSObject;

@interface PLCloudResourcePrefetchManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	NSMutableSet* _inflightResources;
	long long _defaultPrefetchMode;
	NSDate* _lastPrefetchDate;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _finishedInitialDownload;
	BOOL _enqueuedAutomaticPrefetch;

}
+(id)_originalResourceTypes;
+(id)_orderedPrefetchConditionStringsOnAssets;
-(void)dealloc;
-(id)init;
-(id)initWithCPLManager:(id)arg1 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_reloadDownloadOriginalsSetting;
-(void)startAutomaticPrefetch;
-(void)_startPrefetchNextBatch;
-(long long)diskSpaceBudgetForPrefetch;
-(BOOL)_canPrefetchWithBudget:(long long)arg1 ;
-(void)_prefetchResources:(id)arg1 ;
-(void)_resourcesToPrefetchWithBudget:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_writeDownloadFinishedMarkerIfNeeded;
-(void)_incrementPrefetchCountForPLCloudResources:(id)arg1 ;
-(id)_identifierForResourceDownload:(id)arg1 ;
-(void)_handlePrefetchError:(id)arg1 forPLCloudResource:(id)arg2 ;
-(id)_resourcePredicateForCPLResourceType:(unsigned long long)arg1 additionalResourcePredicates:(id)arg2 ;
-(id)_missingThumbnailConditionString;
-(id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(id)_missingLocalOriginalConditionString;
-(id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1 ;
-(id)_predicatesForPrefetch;
-(void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prefetchResource:(unsigned long long)arg1 forAssetsWithObjectIDs:(id)arg2 ;
-(id)prefetchStatusForDebug:(BOOL)arg1 ;
-(void)_reloadDefaultDownload;
-(void)_forceAutomaticPrefetchDueToSettingsChange;
@end

