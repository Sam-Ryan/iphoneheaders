/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary;

@interface PLCloudFeedEntriesManager : NSObject {

	PLPhotoLibrary* __library;

}

@property (nonatomic,retain,readonly) PLPhotoLibrary * _library;              //@synthesize _library=__library - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(PLPhotoLibrary *)_library;
-(void)processAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)rebuildAllEntries:(/*^block*/id)arg1 ;
-(id)_firstEntryRelativeToDate:(id)arg1 ascending:(BOOL)arg2 includeSameDate:(BOOL)arg3 ;
-(id)_singleEntryOfType:(long long)arg1 forSharedAlbum:(id)arg2 ;
-(id)_singleEntryOfType:(long long)arg1 forInvitationRecord:(id)arg2 ;
-(void)_noteDidUpdateSharedAlbum:(id)arg1 ;
-(void)_noteDidReceiveSharedAsset:(id)arg1 ;
-(void)_noteDidReceiveSharedComments:(id)arg1 ;
-(void)_noteDidUpdateInvitationRecord:(id)arg1 ;
-(void)_noteContentDeletionAffectingAssetsEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingCommentsEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingInvitationEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg1 ;
-(id)_invitationReceivedEntryForSharedAlbum:(id)arg1 ;
-(id)_subscriptionEntryForSharedAlbum:(id)arg1 ;
-(id)_subscriptionDateForSharedAlbum:(id)arg1 ;
-(id)_albumCreatedEntryForSharedAlbum:(id)arg1 ;
-(id)_dateForAsset:(id)arg1 ;
-(BOOL)_shouldIgnoreAsset:(id)arg1 ;
-(BOOL)_wasAssetPublishedBeforeSubscription:(id)arg1 ;
-(void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg1 ;
-(id)_firstEntryOnOrBeforeDate:(id)arg1 ;
-(id)_firstEntryAfterDate:(id)arg1 ;
-(BOOL)_shouldMergeAsset:(id)arg1 intoEntry:(id)arg2 ;
-(void)_addAsset:(id)arg1 toEntry:(id)arg2 ;
-(void)_mergeOlderEntry:(id)arg1 intoMoreRecentEntry:(id)arg2 ;
-(void)_splitEntriesAtDate:(id)arg1 ;
-(void)_noteDidReceiveSharedComment:(id)arg1 ;
-(BOOL)_shouldIgnoreComment:(id)arg1 ;
-(BOOL)_wasCommentPublishedBeforeSubscription:(id)arg1 ;
-(void)_getEarliestDate:(id*)arg1 latestDate:(id*)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3 ;
-(/*^block*/id)_commentSortingComparator;
-(BOOL)_tryMergingComment:(id)arg1 withEntry:(id)arg2 ;
-(BOOL)_shouldIgnoreInvitationRecord:(id)arg1 ;
-(id)_invitationAcceptedEntryForInvitationRecord:(id)arg1 ;
-(void)_mergeEntriesAroundDate:(id)arg1 ;
-(BOOL)_commentIsBatchCaption:(id)arg1 ;
-(/*^block*/id)_assetSortingComparator;
-(id)_firstEntryOnOrAfterDate:(id)arg1 ;
-(id)_invitationDeclinedEntryForInvitationRecord:(id)arg1 ;
@end

