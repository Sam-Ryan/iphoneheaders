/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;

@interface SYOutgoingDeltaTransactionSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	unsigned long long _activity;
	long long _state;
	NSObject*<OS_dispatch_queue> _changeFetcherQueue;
	_SYCountedSemaphore* _changeConcurrencySemaphore;
	_SYMessageTimerTable* _timers;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _cancelled;

}
-(void)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(unsigned long long)protocolVersion;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_fetchNextBatch;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_notifySessionComplete;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_waitForMessageWindow;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_setupChangeConcurrency;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)wasCancelled;
-(id)initWithService:(id)arg1 ;
@end

