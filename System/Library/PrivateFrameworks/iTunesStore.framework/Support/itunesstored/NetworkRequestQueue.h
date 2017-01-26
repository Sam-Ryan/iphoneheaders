/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/RequestQueue.h>

@class ISOperationQueue;

@interface NetworkRequestQueue : RequestQueue {

	ISOperationQueue* _managedQueue;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)sharedNetworkRequestQueue;
+(void)authenticateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)claimAppsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getMatchStatusWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)keybagSyncWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)installManagedAppWithMessageAndDetailedResponse:(id)arg1 connection:(id)arg2 ;
+(void)loadURLBagWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)lookupItemsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)lookupWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)sdk_loadStoreFrontIdentifierWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)performMigrationWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)repairAppWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)requestURLWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)restoreDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)serverAuthenticateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)updateMediaContentTasteWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)wishlistAddItemsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)disableSubscriptionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)enableSubscriptionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getSubscriptionStatusWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)sdk_getSubscriptionStatusWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)refreshSubscriptionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)_addSubscriptionOperationWithType:(long long)arg1 message:(id)arg2 connection:(id)arg3 ;
+(void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2 provideDetailedResponse:(BOOL)arg3 ;
-(id)_newClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendUnentitledMessageToClient:(id)arg1 ;
-(void)_sendMessageWithError:(id)arg1 toClient:(id)arg2 ;
-(void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2 ;
-(id)_copyAuthenticationContextWithContext:(id)arg1 client:(id)arg2 ;
-(BOOL)_hasManagedOperationWithItemIdentifier:(id)arg1 ;
-(id)_managedQueue;
-(void)_enqueueOperationsForStoreServicesURL:(id)arg1 ;
-(id)init;
@end

