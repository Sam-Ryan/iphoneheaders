/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLDiskSpaceManagement : NSObject
+(unsigned long long)_performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(BOOL)arg2 fromPhotoLibrary:(id)arg3 keepRecentlyViewedAssets:(BOOL)arg4 ;
+(unsigned long long)_scanFilesInReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(unsigned long long)arg2 ;
+(unsigned long long)_scanFilesInCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(unsigned long long)arg2 ;
+(long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(BOOL)arg2 ;
+(unsigned long long)_scanFilesInPhotoMetadataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(unsigned long long)arg2 skipAssets:(id)arg3 ;
+(unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)purgeCloudSharingAssetsIfNotRecentlyViewedFromPhotoLibrary:(id)arg1 ;
+(unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(BOOL)arg2 fromPhotoLibrary:(id)arg3 ;
+(unsigned long long)purgeExpiredOutboundSharingAssets;
@end

