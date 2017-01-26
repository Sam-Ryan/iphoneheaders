/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/AirFair.syncBundle/AirFair
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATClient <NSObject>
@optional
-(id)disabledAssetTypes;
-(void)prioritizeAsset:(id)arg1;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 updatedProgress:(double)arg2;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3;
-(void)assetInstallSucceeded:(id)arg1;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2;
-(void)cancelSyncOperations;
-(void)syncEndedWithSuccess:(BOOL)arg1;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 grappaID:(unsigned)arg3 hostVersion:(id)arg4 error:(id*)arg5;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4;
-(void)metadataUpdate:(id)arg1 forAsset:(id)arg2 withNewAnchor:(id)arg3;
-(void)restoreEndedWithError:(id)arg1;
-(void)registerMessageHandlersWithLink:(id)arg1;
-(id)currentSyncAnchor;
-(BOOL)reconcileRestoreWithError:(id*)arg1;
-(BOOL)reconcileRestoreOfType:(int)arg1 withError:(id*)arg2;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1;
-(void)prepareForBackup;
-(void)backupEnded;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2;
-(id)appleIDsForAssets;
-(BOOL)shouldRestoreFile:(id)arg1 backupManager:(id)arg2;
-(BOOL)shouldBackgroundRestorePath:(id)arg1 backupManager:(id)arg2;
-(BOOL)shouldBackgroundRestoreFile:(id)arg1 backupManager:(id)arg2;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(id)installedAssets;

@required
-(id)supportedDataclasses;

@end

