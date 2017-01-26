/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class MSASPConnectionGate, NSObject, NSString, NSURL;

@interface MSASProtocol : NSObject <NSURLConnectionDelegate> {

	BOOL _isShuttingDown;
	MSASPConnectionGate* _gate;
	NSObject*<OS_dispatch_queue> _pendingConnectionsQueue;
	NSObject*<OS_dispatch_group> _pendingConnectionsGroup;
	NSString* _personID;
	NSURL* _baseURL;
	NSString* _serverSideConfigVersion;
	NSString* _headerVersion;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;

}

@property (nonatomic,retain,readonly) NSString * personID;                                      //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSString * serverSideConfigVersion;                                //@synthesize serverSideConfigVersion=_serverSideConfigVersion - In the implementation block
@property (nonatomic,retain) MSASPConnectionGate * gate;                                        //@synthesize gate=_gate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pendingConnectionsQueue;              //@synthesize pendingConnectionsQueue=_pendingConnectionsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> pendingConnectionsGroup;              //@synthesize pendingConnectionsGroup=_pendingConnectionsGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                          //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                               //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) NSString * headerVersion;                                        //@synthesize headerVersion=_headerVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)personID;
-(id)initWithPersonID:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)acceptInvitationWithToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setServerSideConfigVersion:(NSString *)arg1 ;
-(void)stopCompletionBlock:(/*^block*/id)arg1 ;
-(void)getServerSideConfigCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)stopHandlerBlock;
-(void)getChangesRootCtag:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)subscribeToAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)unsubscribeFromAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)deleteAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)createAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbum:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(MSASPConnectionGate *)gate;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(id)shutDownError;
-(id)stoppingError;
-(void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)isShuttingDown;
-(void)setGate:(MSASPConnectionGate *)arg1 ;
-(id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(BOOL)arg3 error:(id)arg4 body:(id)arg5 ;
-(NSString *)serverSideConfigVersion;
-(id)HTTPErrorWithStatusCode:(long long)arg1 ;
-(id)_createAlbumURL;
-(BOOL)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id*)arg3 ;
-(void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_updateAlbumURLWithBaseURL:(id)arg1 ;
-(id)_putAssetsURLWithBaseURL:(id)arg1 ;
-(id)_getUploadTokensURLWithBaseURL:(id)arg1 ;
-(id)_getVideoURLWithBaseURL:(id)arg1 ;
-(id)_uploadCompleteURLWithBaseURL:(id)arg1 ;
-(id)_shareURL;
-(id)_unshareURL;
-(id)_addCommentURLWithBaseURL:(id)arg1 ;
-(id)_enablePublicAccessURLWithBaseURL:(id)arg1 ;
-(id)_enableMultipleContributorsURLWithBaseURL:(id)arg1 ;
-(id)_deleteURLWithBaseURL:(id)arg1 ;
-(id)_deleteAssetsURLWithBaseURL:(id)arg1 ;
-(id)_deleteCommentURLWithBaseURL:(id)arg1 ;
-(id)_getChangesURL;
-(id)_sharingInfoURLWithBaseURL:(id)arg1 ;
-(id)_albumSummaryURLWithBaseURL:(id)arg1 ;
-(id)_getAssetsURLWithBaseURL:(id)arg1 ;
-(id)_getTokensURLWithBaseURL:(id)arg1 ;
-(id)_couldNotReauthorizeError;
-(id)_subscribeURL;
-(id)_unsubscribeURL;
-(id)_getCommentsURLWithBaseURL:(id)arg1 ;
-(id)_albumStateURL;
-(id)_setAssetStateURL;
-(id)_setAlbumStateURL;
-(id)_serverSideConfigURL;
-(id)_getAlbumURL;
-(id)_setCommentPositionURL;
-(NSObject*<OS_dispatch_queue>)pendingConnectionsQueue;
-(void)setPendingConnectionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)pendingConnectionsGroup;
-(void)setPendingConnectionsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSString *)headerVersion;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

