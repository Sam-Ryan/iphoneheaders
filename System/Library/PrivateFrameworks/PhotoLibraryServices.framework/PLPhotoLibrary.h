/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLGenericAlbum, NSCalendar, NSMutableDictionary, NSSet, PLManagedAlbum, PLFetchingAlbum, PLInFlightAssetsAlbum, PLManagedAlbumList, PLManagedFolder, NSString, PLManagedObjectContext, NSArray;

@interface PLPhotoLibrary : NSObject {

	BOOL _listeningForITunesSyncing;
	BOOL _isTransient;
	unsigned long long _pendingTransactions;
	CFDictionaryRef _allPhotos;
	int _databaseMigrationKind;
	NSMutableArray* _transactionCompletionHandlers;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSCalendar* _exifConversionCalendar;
	NSMutableDictionary* _photoStreamAlbumsByStreamID;
	NSMutableArray* _photoStreamAlbums;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	unsigned long long _lastFetchedGPSCount;
	unsigned long long _insertedCountSinceLastFetchedGPSCount;
	unsigned long long _deletedCountSinceLastFetchedGPSCount;
	unsigned long long _newlyCompleteWithGPS;
	PLManagedAlbum* _cameraRollAlbum;
	PLFetchingAlbum* _userLibraryAlbum;
	PLFetchingAlbum* _cameraSessionAlbum;
	PLInFlightAssetsAlbum* _inFlightAssetsAlbum;
	PLManagedAlbumList* _rootAlbumList;
	PLManagedFolder* _rootFolder;
	NSString* _cachedName;
	PLManagedObjectContext* managedObjectContext;

}

@property (nonatomic,retain) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> savedPhotosAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> userLibraryAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> inFlightAssetsAlbum; 
@property (nonatomic,retain,readonly) PLManagedAlbumList * rootAlbumList; 
@property (nonatomic,retain,readonly) PLManagedFolder * rootFolder; 
@property (nonatomic,copy,readonly) NSArray * albums; 
@property (nonatomic,copy,readonly) NSArray * userAlbums; 
@property (nonatomic,copy,readonly) NSArray * imagePickerAlbums; 
@property (nonatomic,copy,readonly) NSArray * wallpaperAlbums; 
@property (nonatomic,copy,readonly) NSArray * importAlbums; 
@property (nonatomic,copy,readonly) NSArray * eventAlbums; 
@property (nonatomic,copy,readonly) NSArray * faceAlbums; 
@property (nonatomic,copy,readonly) NSArray * placeAlbums; 
@property (nonatomic,copy,readonly) NSObject*<PLAlbumProtocol> favoritesAlbum; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbumsForPreferences; 
+(void)performTransactionAndWaitOnTransientLibraryWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
+(id)_operationQueueForPriority:(long long)arg1 ;
+(id)_statusDescriptionForQueue:(id)arg1 ;
+(id)queueStatusDescription;
+(void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char*)arg2 block:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)_assetsdQueueingMode;
+(void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(/*^block*/id)arg3 ;
+(void)_activateStatusTimer;
+(void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char*)arg2 block:(/*^block*/id)arg3 ;
+(void)performAndWaitOnTransientLibraryWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)isRunningInStoreDemoMode;
+(unsigned long long)sharedStreamsSize;
+(id)lightweightReimportPhotoCloudSharingDataDirectory;
+(id)photoCloudSharingCacheDataDirectory;
+(id)photoMetadataDirectoryURL;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2 ;
+(void)setSqliteErrorAndExitIfNecessary;
+(id)crashRecoveryIndicatorFilePaths:(BOOL)arg1 ;
+(void)_enqeueRecoveryJob:(id)arg1 ;
+(id)opportunisticTaskIsolationQueue;
+(BOOL)photoLibraryIsObtainable;
+(id)photoDataDirectory;
+(void)setApplicationIsWildcat:(BOOL)arg1 ;
+(void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2 ;
+(id)photoCloudSharingDataDirectory;
+(id)photoDataCachesDirectory;
+(id)dcimDirectoryURL;
+(void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)takingVideoIndicatorFilePath;
+(id)takingPhotoIndicatorFilePath;
+(id)imageWriterIndicatorFilePath;
+(BOOL)libraryAvailableIndicatorState;
+(id)pathToAssetsToAlbumsMapping;
+(id)iTunesSyncedAssetsDirectory;
+(id)mediaFilesDirectoryURL;
+(id)persistedAlbumDataDirectoryURL;
+(void)setLibraryAvailableIndicatorState:(BOOL)arg1 ;
+(void)postGlobalPhotoLibraryAvailableNotification;
+(void)repairSingletonObjects;
+(id)migrationIndicatorFilePath;
+(id)momentAnalysisNeededFilePath;
+(id)forceSoftResetSyncPath;
+(id)disableICloudPhotosFilePath;
+(id)enableICloudPhotosFilePath;
+(void)updateICloudPhotosMarkerForEnable:(BOOL)arg1 ;
+(void)setCameraRollCountedInQuota:(BOOL)arg1 ;
+(BOOL)isICloudPhotosPaused;
+(void)setPauseMarker:(BOOL)arg1 ;
+(BOOL)isEnableICloudPhotos;
+(BOOL)isDisableICloudPhotos;
+(BOOL)isForceSoftResetSync;
+(id)cplEnableMarkerFilePath;
+(id)cplDownloadFinishedMarkerFilePath;
+(id)pauseICloudPhotosFilePath;
+(id)dupeAnalysisNeededFilePath;
+(id)libraryAvailableIndicatorFilePath;
+(id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+(id)_dataProtectionIndicatorFilePath;
+(id)_dataMigratorFinishedFilePath;
+(id)photoDataDirectoryURL;
+(id)photoDataCPLDirectory;
+(BOOL)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2 ;
+(BOOL)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2 ;
+(id)sqliteErrorIndicatorFilePath;
+(BOOL)createSqliteErrorIndicatorFile;
+(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+(id)iTunesSyncedFaceDataDirectory;
+(id)iTunesPhotosDirectory;
+(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+(id)iTunesSyncedAssetSmallThumbnailsDirectory;
+(void)resetSyncedAssetsDCIMDirectory;
+(id)photoMetadataDirectoryURLForMediaInMainDirectory:(id)arg1 ;
+(id)photoMutationsDirectory;
+(id)photoStreamsDataDirectory;
+(BOOL)isDupeAnalysisNeeded;
+(BOOL)isDataMigratorFinished;
+(void)setDataMigratorFinished:(BOOL)arg1 ;
+(id)syncInfoPath;
+(void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3 ;
+(BOOL)isApplicationWildcat;
+(void)handlePossibleCoreDataError:(id)arg1 ;
+(void)recoverFromCrashIfNeeded;
+(void)disableOpportunisticTasks:(BOOL)arg1 ;
+(BOOL)areOpportunisticTasksDisabled;
+(BOOL)isSafeToRecoverAfterCrash;
+(void)setPhotoStreamEnabled:(BOOL)arg1 ;
+(void)setCloudAlbumSharingEnabled:(BOOL)arg1 ;
+(id)photoCloudSharingMetadataDirectory;
+(id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2 ;
+(id)assetsDataDirectory;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)setMigratorIsBusy:(BOOL)arg1 ;
+(void)setImageWriterIsBusy:(BOOL)arg1 ;
+(void)setVideoCaptureIsBusy:(BOOL)arg1 ;
+(void)setTakingPhotoIsBusy:(BOOL)arg1 ;
+(void)setMomentAnalysisNeeded:(BOOL)arg1 ;
+(BOOL)isMomentAnalysisNeeded;
+(void)forceSoftResetSync;
+(void)setDisableICloudPhotos:(BOOL)arg1 ;
+(void)setEnableICloudPhotos:(BOOL)arg1 ;
+(void)setICloudPhotosEnabled:(BOOL)arg1 ;
+(id)pauseTime;
+(void)setDupeAnalysisNeeded:(BOOL)arg1 ;
+(void)setDataProtectionComplete:(BOOL)arg1 ;
+(BOOL)isDataProtectionComplete;
+(id)videosPath;
+(id)photoDataCPLDerivativeDirectory;
+(id)photoDataCPLLibraryIdentifier;
+(id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1 ;
+(id)cplAssetsDirectoryURL;
+(id)dcimDirectory;
+(id)simpleDCIMDirectory;
+(BOOL)processCanReadSandboxForPath:(id)arg1 ;
+(BOOL)processCanWriteSandboxForPath:(id)arg1 ;
+(void)initializeGraphicsServices;
+(BOOL)canSaveVideoToCameraRoll:(id)arg1 ;
+(BOOL)isAlbumSynced:(id)arg1 ;
+(void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1 ;
+(void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2 ;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(unsigned long long)CloudPhotoLibrarySize;
+(id)sharedPhotoLibrary;
+(id)photoDataMiscDirectory;
+(NSObject*)savedPhotosAlbum;
+(id)photoOutboundSharingTmpDirectoryURL;
+(BOOL)isStreamsLibraryUpdatingExpired;
+(void)setStreamsLibraryUpdatingExpired:(BOOL)arg1 ;
+(id)syncedAlbumSubtitleStringFormat;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(BOOL)arg5 performTransaction:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)performTransaction:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)name;
-(id)_init;
-(id)initWithName:(const char*)arg1 ;
-(BOOL)isTransient;
-(PLManagedObjectContext *)managedObjectContext;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(void)loadDatabase:(const char*)arg1 ;
-(unsigned long long)concurrencyType;
-(void)setManagedObjectContext:(PLManagedObjectContext *)arg1 ;
-(BOOL)_hasAtLeastOneItem:(BOOL)arg1 ;
-(void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3 ;
-(void)removeInflightAssets:(id)arg1 ;
-(PLManagedAlbumList *)rootAlbumList;
-(NSObject*)allPhotoStreamPhotosAlbum;
-(NSArray *)photoStreamAlbumsForPreferences;
-(void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4 ;
-(void)_userDeleteAlbums:(id)arg1 ;
-(void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2 ;
-(NSArray *)photoStreamAlbums;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4 ;
-(void)_userDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2 ;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)_safeSave:(id)arg1 ;
-(void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1 ;
-(id)_allAssetsForDeletion:(id)arg1 ;
-(void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1 ;
-(id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2 ;
-(void)_linkAsideAlbumMetadataForOTARestore;
-(void)prepareDatabaseForOTAAssetsPhase;
-(void)deleteITunesSyncedContentWithReason:(id)arg1 ;
-(id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(NSObject*)allPhotosAlbum;
-(NSObject*)iPadAllPhotosAlbum;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 ;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
-(void)addSidecarFileInfo:(id)arg1 toAsset:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2 ;
-(id)allImportedPhotosAlbum;
-(int)priorityForFileExtension:(id)arg1 ;
-(void)_loadFileExtensionInformation;
-(BOOL)isNonRawImageFileExtension:(id)arg1 ;
-(BOOL)isRawImageFileExtension:(id)arg1 ;
-(BOOL)isVideoFileExtension:(id)arg1 ;
-(BOOL)isAudioFileExtension:(id)arg1 ;
-(void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1 ;
-(NSObject*)syncProgressAlbum;
-(NSObject*)eventAlbumContainingPhoto:(id)arg1 ;
-(NSArray *)imagePickerAlbums;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5 ;
-(NSObject*)otaRestoreProgressAlbum;
-(NSObject*)filesystemImportProgressAlbum;
-(BOOL)_hasIncompleteAsset;
-(BOOL)hasCompletedRestorePostProcessing;
-(BOOL)_hasPendingAssetsIgnoreiTunes:(BOOL)arg1 ;
-(BOOL)isReadyForCloudPhotoLibrary;
-(id)incompleteRestoreProcesses;
-(BOOL)hasCompletedMomentAnalysis;
-(BOOL)_checkMomentAnalysisCompletion;
-(void)testForRecoveryInBackground;
-(void)flushDCIMAlbums;
-(void)flushPhotoStreamAlbums;
-(void)flushAlbums;
-(void)clientApplicationWillEnterForeground;
-(void)photoLibraryCorruptNotification;
-(BOOL)hasAtLeastOnePhoto;
-(void)deleteFailedInMemoryCameraAsset:(id)arg1 ;
-(void)deleteAllImages;
-(NSObject*<PLAlbumProtocol>)userLibraryAlbum;
-(NSObject*)inFlightAssetsAlbumIfAvailable;
-(void)addInflightAsset:(id)arg1 ;
-(NSObject*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(PLManagedFolder *)rootFolder;
-(NSArray *)userAlbums;
-(NSArray *)wallpaperAlbums;
-(NSArray *)importAlbums;
-(NSArray *)eventAlbums;
-(NSArray *)faceAlbums;
-(NSArray *)placeAlbums;
-(void)userTrashAlbums:(id)arg1 ;
-(void)userUntrashAlbums:(id)arg1 ;
-(void)userExpungeAlbums:(id)arg1 ;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(NSObject*<PLAlbumProtocol>)favoritesAlbum;
-(unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2 ;
-(id)objectWithObjectID:(id)arg1 ;
-(void)userTrashAssets:(id)arg1 ;
-(void)addToKnownPhotoStreamAlbums:(id)arg1 ;
-(void)removeFromKnownPhotoStreamAlbums:(id)arg1 ;
-(id)lastImportSessionUUID;
-(void)setLastImportSessionUUID:(id)arg1 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)assetURLForManagedPhoto:(id)arg1 ;
-(NSObject*)albumFromGroupURL:(id)arg1 ;
-(void)cleanupAfterImportAllDCIMAssets;
-(void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(void)cleanupForStoreDemoMode;
-(id)managedObjectWithObjectID:(id)arg1 ;
-(id)managedObjectContextStoreUUID;
-(BOOL)needsMigration;
-(void)recreateAlbumsFromMetadata;
-(id)lastImportedPhotosAlbum;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(BOOL)hasAtLeastOnePhotoWithGPS;
-(void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(id)syncedAlbums;
-(unsigned long long)editableAlbumCount;
-(NSObject*)allPhotosAlbumIfExists;
-(NSObject*)iPadAllPhotosAlbumIfExists;
-(id)imageForFormat:(int)arg1 forAsset:(id)arg2 ;
-(id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(NSObject*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(CFDictionaryRef)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(BOOL)arg15 isPlaceholder:(BOOL)arg16 ;
-(id)masterURLFromSidecarURLs:(id)arg1 ;
-(id)masterFilenameFromSidecarFileInfo:(id)arg1 ;
-(BOOL)isImageFileExtension:(id)arg1 ;
-(BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 ;
-(void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2 ;
-(BOOL)isPhotoInSavedPhotosAlbum:(id)arg1 ;
-(id)albumsForContentMode:(int)arg1 ;
-(id)librarySizes;
-(void)deleteExpiredTrashBinObjects;
-(unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2 ;
-(unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1 ;
-(unsigned long long)numberOfPushedAssets;
-(BOOL)hasAtLeastOneItem;
-(id)albumListForContentMode:(int)arg1 ;
-(BOOL)hasITunesSyncedContent;
-(id)iTunesSyncedContentInfo;
-(NSObject*<PLAlbumProtocol>)inFlightAssetsAlbum;
-(id)photoFromAssetURL:(id)arg1 ;
-(void)copyAssetToCameraRoll:(id)arg1 ;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 ;
-(NSObject*<PLAlbumProtocol>)savedPhotosAlbum;
-(NSArray *)albums;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(void)userUntrashAssets:(id)arg1 ;
-(void)userExpungeAssets:(id)arg1 ;
-(id)initWithTransientContext:(BOOL)arg1 name:(const char*)arg2 ;
-(BOOL)deleteAllDiagnosticFiles:(id*)arg1 ;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/id)arg1 ;
-(id)assetWithUUID:(id)arg1 ;
-(NSObject*)albumWithUuid:(id)arg1 ;
-(id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1 ;
@end

