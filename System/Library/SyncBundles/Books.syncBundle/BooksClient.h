/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/Books-Structs.h>
#import <libobjc.A.dylib/ATClient.h>

@protocol OS_dispatch_queue;
@class BCLockout, NSMutableDictionary, BCAssetDatabase, NSObject, NSMutableSet, NSArray, NSFileCoordinator, NSString;

@interface BooksClient : NSObject <ATClient> {

	BCLockout* _lockout;
	NSMutableDictionary* _plistsByPath;
	BOOL _restoreSession;
	BCAssetDatabase* _database;
	NSObject*<OS_dispatch_queue> _plist_queue;
	NSMutableSet* _appleIDs;
	NSArray* _relativePathsToBackup;
	NSFileCoordinator* _fileCoord;

}

@property (assign,getter=isRestoreSession,nonatomic) BOOL restoreSession;              //@synthesize restoreSession=_restoreSession - In the implementation block
@property (nonatomic,retain) BCAssetDatabase * database;                               //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bookExtensions;
-(id)persistentIDsFromBookRecords:(id)arg1 ;
-(BOOL)reconcileWithProgressCallback:(/*^block*/id)arg1 ;
-(BOOL)commitOutstandingAssets:(id)arg1 ;
-(id)knownBooksInPlist:(id)arg1 ;
-(void)assetDownloadCompleted:(id)arg1 ;
-(void)removePromisedAssetsByPath:(id)arg1 ;
-(id)forwardSyncPersistentIDs;
-(BOOL)bumpModificationDate:(id)arg1 ;
-(BOOL)addItems:(id)arg1 toPlist:(id)arg2 ;
-(id)forwardSyncAssets;
-(void)handleError:(id)arg1 forAsset:(id)arg2 ;
-(void)generateDirectories;
-(void)assetUploadCompleted:(id)arg1 ;
-(void)removeAssetByPersistentID:(id)arg1 ;
-(id)filteredDownloads:(id)arg1 ;
-(id)storeInfoForItem:(id)arg1 ;
-(id)bookTitleForPlistEntry:(id)arg1 ;
-(void)processDeletesFiles;
-(void)setRestoreSession:(BOOL)arg1 ;
-(id)reverseSyncPersistentIDs;
-(void)removeKnownItems:(id)arg1 ;
-(void)removePromisedAssets;
-(BOOL)isRestoreSession;
-(void)addKnownAppleID:(id)arg1 ;
-(void)deleteOrphanedFiles;
-(id)persistentIDsMerged:(BOOL)arg1 ;
-(id)sortedBooksFromPlist:(id)arg1 ;
-(void)deleteArtworkExcludingFileNames:(id)arg1 ;
-(void)removeItemByPersistentID:(id)arg1 fromPlist:(id)arg2 ;
-(id)filesInPath:(id)arg1 ;
-(id)booksFromPlist:(id)arg1 ;
-(void)removeItemAtPath:(id)arg1 ;
-(void)installedAssetMetrics:(SCD_Struct_Bo0*)arg1 forPlistPath:(id)arg2 ;
-(id)appleIDForAssetAtPath:(id)arg1 ;
-(id)plistByPath:(id)arg1 ;
-(id)booksInPath:(id)arg1 ;
-(id)assetsRequestedByPersistentIDs:(id)arg1 fromPlist:(id)arg2 ;
-(void)appendIconUrlForPersistentID:(id)arg1 toAsset:(id)arg2 ;
-(void)appendPlistEntries:(id)arg1 toAssetArray:(id)arg2 withRestoreFlag:(BOOL)arg3 ;
-(void)deleteOrphanedFilesInPath:(id)arg1 knownToPlist:(id)arg2 ;
-(id)alternatePathForPlist:(id)arg1 withNamePrefix:(id)arg2 ;
-(id)reverseSyncAssets;
-(void)updateAssets:(id)arg1 withSSDownloads:(id)arg2 andDownloadCompletePathMap:(id)arg3 ;
-(void)removeDatabase;
-(BOOL)reconcileWithError:(id*)arg1 progressCallback:(/*^block*/id)arg2 ;
-(void)removeItemsByPersistentID:(id)arg1 fromPlist:(id)arg2 ;
-(void)nonAssetDiskSpaceMetrics:(SCD_Struct_Bo0*)arg1 directory:(id)arg2 recursive:(BOOL)arg3 ;
-(void)iteratePathsForPlist:(id)arg1 processingBlock:(/*^block*/id)arg2 ;
-(void)trimOutstandingAssetList;
-(void)regeneratePersistentIDsForPlist:(id)arg1 ;
-(void)lowerLockout;
-(BOOL)raiseLockout;
-(void)dealloc;
-(id)init;
-(id)supportedDataclasses;
-(BCAssetDatabase *)database;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1 ;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)assetInstallSucceeded:(id)arg1 ;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2 ;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)currentSyncAnchor;
-(BOOL)reconcileRestoreWithError:(id*)arg1 ;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(void)prepareForBackup;
-(void)backupEnded;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2 ;
-(id)appleIDsForAssets;
-(BOOL)shouldBackgroundRestorePath:(id)arg1 backupManager:(id)arg2 ;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(void)setDatabase:(BCAssetDatabase *)arg1 ;
@end

