/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, WBSEncryptedCloudKeyValueStore, NSXPCConnection;

@interface WBSAutomaticReadingListWebFeedSource : WBSAutomaticReadingListSocialSource {

	NSObject*<OS_dispatch_queue> _webFeedSourceDataSynchronizationQueue;
	NSMutableSet* _subscribedFeeds;
	NSMutableSet* _potentialFeedSubscriptions;
	NSMutableSet* _subscribedFeedsAddedWhenSyncWasOff;
	NSMutableDictionary* _posts;
	NSMutableSet* _feedURLs;
	WBSEncryptedCloudKeyValueStore* _subscriptionsKeyValueStore;
	BOOL _canFetchFeeds;
	BOOL _hasStartedFetchingFeeds;
	BOOL _cloudSyncEnabled;
	NSXPCConnection* _webFeedParserConnection;

}

@property (assign,nonatomic) BOOL cloudSyncEnabled;                                  //@synthesize cloudSyncEnabled=_cloudSyncEnabled - In the implementation block
@property (nonatomic,retain) NSXPCConnection * webFeedParserConnection;              //@synthesize webFeedParserConnection=_webFeedParserConnection - In the implementation block
+(id)sharedSource;
-(id)serviceName;
-(id)init;
-(BOOL)isActive;
-(id)_items;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(void)requestMoreItemsWithAge:(int)arg1 ;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(id)serviceImage;
-(id)recordsInfo;
-(id)_findAccounts;
-(void)_loadFeedSourcesFromDiskOnSynchronizationQueue;
-(id)_webFeedSourceListLocation;
-(void)_addFeedURL:(id)arg1 ;
-(void)_subscribedFeedsDidChangeExternallyOnSynchronizationQueue;
-(void)_removeFeedURL:(id)arg1 ;
-(void)_webFeedSourcesDidChangeOnSynchronizationQueue;
-(void)_subscribedFeedsDidChangeOnSynchronizationQueue;
-(void)_parseFeedURL:(id)arg1 ;
-(void)_beginFetchingFeedsIfNecessary;
-(id)_findSubscribedFeedsOnSynchronizationQueueWithFeedURL:(id)arg1 ;
-(void)_removeSubscribedFeedsOnSynchronizationQueueWithFeedURL:(id)arg1 ;
-(void)blockFeedWithFeedURL:(id)arg1 ;
-(void)_persistBlockedFeedURL:(id)arg1 ;
-(void)_beginParsingFeedURL:(id)arg1 ;
-(NSXPCConnection *)webFeedParserConnection;
-(void)_parsingFinishedForFeedURL:(id)arg1 metadata:(id)arg2 entries:(id)arg3 ;
-(void)setWebFeedParserConnection:(NSXPCConnection *)arg1 ;
-(id)_subscriptionsToSync;
-(void)_persistSubscribedFeedURL:(id)arg1 fromSourceURL:(id)arg2 siteIconURLs:(id)arg3 ;
-(void)loadFeedSourcesIfNecessary;
-(void)_startListeningForCloudSubscriptionsChangesIfNecessary;
-(void)_setTitle:(id)arg1 forFeedURL:(id)arg2 ;
-(void)debugClearWebFeedSubscriptionsKeyValueStore;
-(void)blockFeedWithItem:(id)arg1 ;
-(void)subscribeToFeedURL:(id)arg1 fromSourceURL:(id)arg2 siteIconURLs:(id)arg3 ;
-(void)addPairingFromSourceURL:(id)arg1 toFeedURL:(id)arg2 title:(id)arg3 iconURLs:(id)arg4 ;
-(void)getFeedSourcesWithState:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fetchPotentialSubscriptionFeedSources:(/*^block*/id)arg1 ;
-(void)getSourceURLsForFeedURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getSiteIconURLsForFeedURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCloudSyncEnabled:(BOOL)arg1 ;
-(BOOL)cloudSyncEnabled;
@end

