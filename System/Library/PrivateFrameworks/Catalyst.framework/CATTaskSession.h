/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTransportDelegate.h>

@protocol OS_dispatch_group, CATTaskSessionDelegate;
@class CATStateMachine, CATTransport, NSMutableSet, NSMutableDictionary, NSMutableArray, NSHashTable, CATOperationQueue, NSDictionary, NSObject, NSUUID, NSString;

@interface CATTaskSession : NSObject <CATTransportDelegate> {

	CATStateMachine* mFSM;
	CATTransport* mTransport;
	NSMutableSet* mOperations;
	NSMutableDictionary* mOperationByRemoteUUID;
	NSMutableArray* mEnqueuedMessages;
	CATTaskSession* mStrongSelf;
	NSHashTable* mOrphanedTransports;
	CATOperationQueue* mOrphanedOperationQueue;
	NSDictionary* mPreviousSessionInfo;
	NSObject*<OS_dispatch_group> mSessionDidInvalidateGroup;
	NSUUID* _sessionUUID;
	id<CATTaskSessionDelegate> _delegate;
	NSDictionary* _userInfo;
	NSDictionary* _clientUserInfo;

}

@property (nonatomic,retain) NSUUID * sessionUUID;                                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) CATTransport * transport; 
@property (assign,nonatomic,__weak) id<CATTaskSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * clientUserInfo;                             //@synthesize clientUserInfo=_clientUserInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CATTaskSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<CATTaskSessionDelegate>)delegate;
-(void)invalidate;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)disconnect;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)enqueueOperation:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)clientUserInfo;
-(void)delegateDidInterruptWithError:(id)arg1 ;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3 ;
-(void)transport:(id)arg1 didSendMessage:(id)arg2 ;
-(void)delegateDidInvalidate;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)transportDidInvalidate:(id)arg1 ;
-(void)abandonTransport;
-(void)enqueueMessage:(id)arg1 ;
-(void)connectWithTransport:(id)arg1 ;
-(void)resumeTransport:(id)arg1 ;
-(void)connectWithTransportFromTaskSession:(id)arg1 ;
-(void)resumeCapturedTransportFromTaskSession:(id)arg1 ;
-(void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1 ;
-(void)clientDidResumeWithMessage:(id)arg1 ;
-(void)evaluateConnectionWithResumeMessage:(id)arg1 ;
-(void)acceptConnection;
-(void)sendResumedMessage;
-(void)rejectConnection;
-(void)delegateDidConnect;
-(void)sendMessageThroughTransport:(id)arg1 ;
-(void)processTaskMessage:(id)arg1 ;
-(void)processNotificationMessage:(id)arg1 ;
-(void)delegateDidDisconnect;
-(void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1 ;
-(void)sessionDidInvalidate;
-(void)delegateDidInvalidateAndFinalize;
-(void)localOperationDidFinish:(id)arg1 ;
-(void)delegateEnqueueOperation:(id)arg1 ;
-(void)savePreviousSessionInfo;
-(BOOL)delegateShouldAcceptConnection;
-(void)discardPreviousSessionInfo;
-(void)restorePreviousSessionInfo;
-(id)captureTransport;
-(void)delegateWillInvalidate;
-(void)processSessionMessage:(id)arg1 ;
-(void)processStartMessage:(id)arg1 ;
-(void)processCancelMessage:(id)arg1 ;
-(void)processFetchProgressMessage:(id)arg1 ;
-(id)delegateEnqueueOperationWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)operationDidIncrementProgress:(id)arg1 remoteUUID:(id)arg2 ;
-(void)operationDidFinish:(id)arg1 remoteUUID:(id)arg2 ;
-(void)delegatedidReceiveNotificationWithName:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(CATTransport *)transport;
-(void)invalidateWithError:(id)arg1 ;
@end

