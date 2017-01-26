/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/MediaStreamPlugins/PhotoStreamsPlugin.mediastream/PhotoStreamsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoStreamsPlugin/MSPublisherPlugin.h>
#import <PhotoStreamsPlugin/MSSubscriberPlugin.h>
#import <PhotoStreamsPlugin/MSSharingPlugin.h>
#import <PhotoStreamsPlugin/MSDeleterPlugin.h>

@class NSString;

@interface PLPhotoStreamsPlugin : NSObject <MSPublisherPlugin, MSSubscriberPlugin, MSSharingPlugin, MSDeleterPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)publisherPluginForPersonID:(id)arg1 ;
+(id)subscriberPluginForPersonID:(id)arg1 ;
+(id)sharingPluginForPersonID:(id)arg1 ;
+(id)deleterPluginForPersonID:(id)arg1 ;
+(id)personIDsForPollingTriggeredByPushNotification;
+(BOOL)personIDIsAcceptingInvitations:(id)arg1 ;
-(void)publisher:(id)arg1 didEncounterTemporaryErrorWhilePublishingAssetCollections:(id)arg2 ;
-(void)sharingManager:(id)arg1 didSendInvitationForShare:(id)arg2 ;
-(void)publisherWillAssignPluginAsDelegateOfPublisher:(id)arg1 ;
-(void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id)arg1 ;
-(void)publisherWillDeassignPluginAsDelegateOfPublisher:(id)arg1 ;
-(void)subscriberWillDeassignPluginAsDelegateOfSubscriber:(id)arg1 ;
-(void)publisher:(id)arg1 didEncounterError:(id)arg2 publishingAssetCollections:(id)arg3 ;
-(void)publisher:(id)arg1 didRequestSubmissionOfAssetCollections:(id)arg2 ;
-(void)publisher:(id)arg1 willPublishAssetCollections:(id)arg2 ;
-(void)publisher:(id)arg1 didFinishPublishingAssetCollections:(id)arg2 ;
-(void)subscriber:(id)arg1 didResetSyncForStreamID:(id)arg2 ;
-(void)subscriber:(id)arg1 didReceiveDeleteForAssetCollections:(id)arg2 streamID:(id)arg3 ;
-(void)subscriber:(id)arg1 didRequestAssetRetrievalForAssetCollections:(id)arg2 streamID:(id)arg3 ;
-(void)subscriber:(id)arg1 didFindDisappearedSubscriptionforStreamID:(id)arg2 ;
-(void)subscriber:(id)arg1 didFailToRetriveSubscriptionUpdateWithError:(id)arg2 ;
-(void)subscriber:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3 ;
-(void)sharingManagerDidReceiveShareStateUpdate:(id)arg1 ;
-(void)deleter:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 error:(id)arg3 ;
@end

