/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBWorkspaceServerDelegate.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@protocol OS_dispatch_queue;
@class BSZeroingWeakReference, FBWorkspaceServer, NSMapTable, NSMutableSet, NSObject, FBSceneClientProviderInvalidationAction, FBProcess, BSAuditToken, NSString;

@interface FBWorkspace : NSObject <FBWorkspaceServerDelegate, FBSceneClientProvider> {

	BSZeroingWeakReference* _zeroingWeakDelegate;
	BSZeroingWeakReference* _zeroingWeakProcess;
	FBWorkspaceServer* _server;
	NSMapTable* _hostToClientMap;
	NSMutableSet* _invalidatingScenes;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	BOOL _willInvalidate;
	BOOL _invalidated;

}

@property (assign,nonatomic) id<FBWorkspaceDelegate> delegate; 
@property (nonatomic,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) BSAuditToken * auditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FBWorkspaceDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBWorkspaceDelegate>)delegate;
-(void)sendActions:(id)arg1 ;
-(id)_queue;
-(BSAuditToken *)auditToken;
-(void)beginTransaction;
-(FBProcess *)process;
-(id)_server;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(id)_newWorkspaceServer;
-(void)_queue_enumerateScenes:(/*^block*/id)arg1 ;
-(void)_queue_fireInvalidationAction;
-(Class)_sceneClassForIdentity:(id)arg1 ;
-(id)_createSceneClientWithIdentity:(id)arg1 ;
-(void)_invalidateSceneClientWithIdentity:(id)arg1 ;
-(void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3 ;
-(void)_queue_willInvalidateAllScenes;
-(void)_queue_invalidateAllScenes;
-(void)_queue_sceneDidInvalidate:(id)arg1 ;
-(void)endTransaction;
@end

