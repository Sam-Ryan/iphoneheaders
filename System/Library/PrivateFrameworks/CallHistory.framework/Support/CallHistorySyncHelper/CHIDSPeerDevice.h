/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:56:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSDevice, TransactionLog, NSString, NSArray, CHPairedSyncCoordinator;

@interface CHIDSPeerDevice : CHSynchronizedLoggable <IDSServiceDelegate> {

	int _status;
	int _configuration;
	IDSDevice* _device;
	TransactionLog* _txLog;
	NSString* _sendIdentifier;
	NSArray* _pendingTransactions;
	CHPairedSyncCoordinator* _coordinator;

}

@property (assign) int status;                                         //@synthesize status=_status - In the implementation block
@property (retain) IDSDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (retain) TransactionLog * txLog;                             //@synthesize txLog=_txLog - In the implementation block
@property (assign) int configuration;                                  //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSString * sendIdentifier;                          //@synthesize sendIdentifier=_sendIdentifier - In the implementation block
@property (retain) NSArray * pendingTransactions;                      //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (retain) CHPairedSyncCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TransactionLog *)txLog;
-(void)sendMessage:(id)arg1 withService:(id)arg2 ;
-(void)setSendIdentifier:(NSString *)arg1 ;
-(void)sendTransactions:(id)arg1 withService:(id)arg2 ;
-(NSString *)sendIdentifier;
-(void)flushTransactionsWithService:(id)arg1 ;
-(void)removeTemporaryBootstrapDataStore;
-(id)initWithDevice:(id)arg1 withPairedSyncCoordinator:(id)arg2 withConfiguration:(int)arg3 ;
-(void)sendBootstrapDataStoreWithService:(id)arg1 ;
-(void)setTxLog:(TransactionLog *)arg1 ;
-(void)setCoordinator:(CHPairedSyncCoordinator *)arg1 ;
-(void)setConfiguration:(int)arg1 ;
-(int)configuration;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(CHPairedSyncCoordinator *)coordinator;
-(void)setDevice:(IDSDevice *)arg1 ;
-(IDSDevice *)device;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(NSArray *)pendingTransactions;
-(void)setPendingTransactions:(NSArray *)arg1 ;
@end

