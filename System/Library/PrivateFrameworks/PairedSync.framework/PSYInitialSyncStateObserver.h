/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncStateObserverInterface.h>

@protocol OS_dispatch_queue, PSYInitialSyncStateObserverDelegate;
@class NSMutableDictionary, NSObject, NSXPCConnection, NSString;

@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface> {

	NSMutableDictionary* _syncStateCache;
	NSMutableDictionary* _initialSyncStateCache;
	NSMutableDictionary* _syncStateEntryCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	BOOL _init;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<PSYInitialSyncStateObserverDelegate> _delegate;

}

@property (__weak) id<PSYInitialSyncStateObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PSYInitialSyncStateObserverDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PSYInitialSyncStateObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_queue_initializeIfNotInitialized;
-(id)syncProviderWithErrorHandler:(/*^block*/id)arg1 ;
-(void)requestSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_updateSyncStates:(id)arg1 notifyDelegateOfChanges:(BOOL)arg2 ;
-(void)_handleConnectionInvalidated;
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
-(void)_querySyncState;
-(void)_notifyCanRetryFailedRequests;
-(void)requestInitialSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

