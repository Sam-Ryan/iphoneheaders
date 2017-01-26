/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol FBSceneClientProvider, FBSynchronizedTransactionDelegate;
@class FBSceneManager, NSString, FBSDisplay, FBSSceneSettings, FBSSceneTransitionContext, FBSSceneClientSettings, FBProcess, FBWaitForSceneDestructionTransaction, FBScene;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction> {

	FBSceneManager* _sceneManager;
	NSString* _sceneID;
	FBSDisplay* _display;
	FBSSceneSettings* _newSceneSettings;
	FBSSceneTransitionContext* _transitionContext;
	FBSSceneClientSettings* _clientSettings;
	id<FBSceneClientProvider> _clientProvider;
	FBProcess* _process;
	/*^block*/id _clientProviderProvider;
	/*^block*/id _clientSettingsProvider;
	FBWaitForSceneDestructionTransaction* _destuctionTransaction;
	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;
	unsigned long long _transactionID;
	BOOL _waitsForSceneCommit;
	BOOL _readyToCommit;
	BOOL _didCommit;
	BOOL _destroyed;
	id _context;

}

@property (nonatomic,retain,readonly) FBScene * scene; 
@property (nonatomic,retain,readonly) FBSDisplay * display; 
@property (nonatomic,retain,readonly) NSString * sceneIdentifier; 
@property (nonatomic,retain,readonly) FBSSceneSettings * newSettings; 
@property (nonatomic,retain,readonly) FBSSceneTransitionContext * transitionContext; 
@property (nonatomic,readonly) BOOL destroyed; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic) BOOL waitsForSceneCommit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)dealloc;
-(FBSSceneTransitionContext *)transitionContext;
-(void)addObserver:(id)arg1 ;
-(FBSDisplay *)display;
-(void)removeObserver:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setWaitsForSceneCommit:(BOOL)arg1 ;
-(id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 display:(id)arg3 newSettings:(id)arg4 transitionContext:(id)arg5 clientProviderProvider:(/*^block*/id)arg6 initialClientSettingsProvider:(/*^block*/id)arg7 ;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(BOOL)arg4 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(NSString *)sceneIdentifier;
-(void)_begin;
-(id)_initWithSceneIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProvider:(id)arg5 initialClientSettings:(id)arg6 ;
-(void)_commitSceneUpdate:(/*^block*/id)arg1 ;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(void)_createScene;
-(void)_updateScene;
-(void)_commitSceneOrWait;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_enumerateUpdateSceneObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isReadyForSynchronizedCommit;
-(void)_performCommit;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithSceneToCreate:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProvider:(id)arg5 initialClientSettings:(id)arg6 ;
-(FBSSceneSettings *)newSettings;
-(BOOL)destroyed;
-(BOOL)waitsForSceneCommit;
-(FBScene *)scene;
@end

