/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCNSClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class XPCNSClientConnection, NSMutableDictionary, NSObject, NSString;

@interface MSASConnection : NSObject <XPCNSClientConnectionDelegate> {

	XPCNSClientConnection* _connection;
	XPCNSClientConnection* _noWakeConnection;
	NSMutableDictionary* _foregroundPingTimerContextByPersonID;
	NSMutableDictionary* _focusAlbumTimerByPersonID;
	NSMutableDictionary* _focusAlbumGUIDByPersonID;
	NSMutableDictionary* _serverSideConfigurationDictionaryByPersonID;
	NSObject*<OS_dispatch_queue> _memberQueue;

}

@property (nonatomic,retain) XPCNSClientConnection * connection;                                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) XPCNSClientConnection * noWakeConnection;                                       //@synthesize noWakeConnection=_noWakeConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * foregroundPingTimerContextByPersonID;                     //@synthesize foregroundPingTimerContextByPersonID=_foregroundPingTimerContextByPersonID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * focusAlbumTimerByPersonID;                                //@synthesize focusAlbumTimerByPersonID=_focusAlbumTimerByPersonID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * focusAlbumGUIDByPersonID;                                 //@synthesize focusAlbumGUIDByPersonID=_focusAlbumGUIDByPersonID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serverSideConfigurationDictionaryByPersonID;              //@synthesize serverSideConfigurationDictionaryByPersonID=_serverSideConfigurationDictionaryByPersonID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(XPCNSClientConnection *)connection;
-(void)setConnection:(XPCNSClientConnection *)arg1 ;
-(void)refreshResetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
-(void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)cancelActivitiesForPersonID:(id)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 ;
-(void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)_sendMessageReliably:(id)arg1 data:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)_sendMessageReliably:(id)arg1 ;
-(XPCNSClientConnection *)noWakeConnection;
-(void)setNoWakeConnection:(XPCNSClientConnection *)arg1 ;
-(void)timerPingQueueSendSetUIForeground:(BOOL)arg1 personID:(id)arg2 ;
-(void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg1 personID:(id)arg2 ;
-(NSMutableDictionary *)foregroundPingTimerContextByPersonID;
-(NSMutableDictionary *)serverSideConfigurationDictionaryByPersonID;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(id)_communicationFailureError;
-(void)XPCNSClientConnection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(NSMutableDictionary *)focusAlbumTimerByPersonID;
-(NSMutableDictionary *)focusAlbumGUIDByPersonID;
-(id)_cloneArray:(id)arg1 ;
-(void)nextActivityDateHandler:(/*^block*/id)arg1 ;
-(void)isInRetryStateHandler:(/*^block*/id)arg1 ;
-(void)handlePushNotificationForPersonID:(id)arg1 ;
-(void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pingForeground;
-(void)albumGUIDsForPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)albumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)accessControlGUIDsForAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)accessControlWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)invitationGUIDsForPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)invitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)videoURLForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)isAssetCollectionWithGUID:(id)arg1 markedAsUnviewedPersonID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setForegroundPingTimerContextByPersonID:(NSMutableDictionary *)arg1 ;
-(void)setFocusAlbumTimerByPersonID:(NSMutableDictionary *)arg1 ;
-(void)setFocusAlbumGUIDByPersonID:(NSMutableDictionary *)arg1 ;
-(void)setServerSideConfigurationDictionaryByPersonID:(NSMutableDictionary *)arg1 ;
-(void)refreshResetSync:(BOOL)arg1 personID:(id)arg2 ;
-(void)retryOutstandingActivitiesForPersonID:(id)arg1 ;
-(void)retryOutstandingActivities;
-(void)setIsUIForeground:(BOOL)arg1 forPersonID:(id)arg2 ;
-(void)forgetEverythingAboutPersonID:(id)arg1 ;
-(void)serverSideConfigurationDictionaryForPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAlbum:(id)arg1 personID:(id)arg2 ;
-(void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2 ;
-(void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned long long)arg2 personID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 ;
-(void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(BOOL)arg3 info:(id)arg4 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 ;
-(void)commentWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)commentGUIDsForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)assetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setFocusAlbum:(id)arg1 forPersonID:(id)arg2 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3 ;
-(void)isBusyCompletionBlock:(/*^block*/id)arg1 ;
-(void)assetsInDownloadQueueCountForPersonID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 ;
@end

