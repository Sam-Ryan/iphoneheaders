/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoSharingHelper : NSObject
+(void)deleteCloudSharedAlbumFromServer:(id)arg1 ;
+(void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2 ;
+(void)clearCachedAccountState;
+(void)accountSettingsChanged;
+(void)photosPreferencesChanged;
+(id)sharingPersonID;
+(void)forgetSharingPersonID:(id)arg1 ;
+(BOOL)removeCloudSharingDirectories:(id*)arg1 ;
+(id)_transactionWithName:(const char*)arg1 ;
+(void)publishCloudSharedAlbumToServer:(id)arg1 ;
+(void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2 ;
+(void)publishCloudSharedCommentToServer:(id)arg1 ;
+(void)retryOutstandingActivities;
+(void)updateSharedAlbumsCachedServerConfigurationLimits;
+(id)_pathToServerConfigurationCache;
+(id)serverSideConfigurationDictionary;
+(long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2 ;
+(long long)maxOwnedStreams;
+(long long)maxSubscribedStreams;
+(BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1 ;
+(BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1 ;
+(id)_localizationKeyForAssets:(id)arg1 ;
+(void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(BOOL)arg3 ;
+(BOOL)debugAutoAcceptInvitation;
+(void)resetAllLocalState;
+(void)trackUploadBatchSize:(unsigned long long)arg1 ;
+(void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3 ;
+(void)unsubscribeFromAlbum:(id)arg1 ;
+(id)_phoneInvitationFailureFile;
+(id)_processPhoneFailuresQueue;
+(id)temporaryVideoPathForCollectionGUID:(id)arg1 ;
+(id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1 ;
+(CGSize)videoPosterFrameDimension;
+(id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1 ;
+(id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1 ;
+(double)derivedAssetSmallDimensionLimitForType:(int)arg1 ;
+(double)intervalBetweenAlbumPolls;
+(BOOL)_derivativeExistsForAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 ;
+(id)downloadNotificationForAssetwithUUID:(id)arg1 cloudPlaceholderKind:(short)arg2 ;
+(BOOL)_recentlyRequestedDownloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 ;
+(id)_downloadRequestQueue;
+(double)intervalBetweenPolls;
+(BOOL)isBreadcrumbDebugEnabled;
+(id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2 ;
+(id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2 ;
+(id)prefixForBreadcrumbState:(int)arg1 ;
+(BOOL)accountMatchesEmail:(id)arg1 ;
+(void)pollForAlbumListUpdates;
+(void)initializeMSPlatform;
+(id)streamdVideoCache;
+(long long)maxNumDerivativesToDownloadPerPush;
+(void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2 ;
+(void)updateCloudSharedAlbumMetadataOnServer:(id)arg1 ;
+(void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1 ;
+(void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1 ;
+(BOOL)isCellularConnection;
+(void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(unsigned)registerIdleStateChangeObserverWithToken:(int*)arg1 handler:(/*^block*/id)arg2 ;
+(unsigned)unregisterIdleStateChangeObserverWithToken:(int)arg1 ;
+(void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1 ;
+(void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2 ;
+(void)refreshSubscriberListForAlbumGUID:(id)arg1 ;
+(BOOL)hasPhoneInvitationForAlbum:(id)arg1 ;
+(void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2 ;
+(void)handlePhoneInvitationFailuresWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)deleteCommentWithGUIDFromServer:(id)arg1 ;
+(id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2 ;
+(id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2 ;
+(id)temporaryDerivativePathForCollectionGUID:(id)arg1 ;
+(id)temporaryThumbnailPathForCollectionGUID:(id)arg1 ;
+(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4 ;
+(void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(BOOL)arg2 ;
+(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 ;
+(void)checkServerModelForAlbum:(id)arg1 ;
+(void)prioritizeDownloadsForAlbumGUID:(id)arg1 ;
+(void)downloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 ;
+(void)applicationIsInForeground:(BOOL)arg1 ;
+(void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(/*^block*/id)arg1 ;
+(unsigned long long)purgeableSpace;
+(unsigned long long)purgeSpace:(unsigned long long)arg1 ;
+(void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5 ;
+(void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1 ;
+(BOOL)debugAlwaysStreamSharedVideos;
+(BOOL)debugDownloadThumbnailsOnly;
+(BOOL)debugDownloadMetadataOnly;
+(BOOL)debugDownloadAllDerivatives;
+(long long)maxVideoLengthForPublishing;
+(long long)maxCharactersPerComment;
+(long long)maxSubscribersPerStream;
+(BOOL)sharedStreamsExplictlyDisabled;
+(long long)maxAssetsPerStream;
+(long long)maxCommentsPerAsset;
+(BOOL)sharedStreamsUIEnabled;
+(BOOL)sharedStreamsEnabled;
+(id)sharingEmail;
+(BOOL)canSetUserCloudSharedLiked:(BOOL)arg1 forAssets:(id)arg2 error:(id*)arg3 ;
+(BOOL)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id*)arg2 ;
+(void)acceptPendingInvitationForAlbum:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)declinePendingInvitationForAlbum:(id)arg1 ;
+(void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1 ;
+(BOOL)canCreateStreamInPhotoLibrary:(id)arg1 error:(id*)arg2 ;
@end

