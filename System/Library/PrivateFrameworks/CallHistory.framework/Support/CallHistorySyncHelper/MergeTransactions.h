/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:56:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class ApplyLocalTransactions, CallHistoryDBClientHandle;

@interface MergeTransactions : CHLogger {

	ApplyLocalTransactions* _applyLocalTransactions;
	id _observerRemoteTransactions;
	unsigned long long _cloudTransactionCount;
	unsigned long long _localTransactionCount;
	CallHistoryDBClientHandle* _database;

}

@property (readonly) unsigned long long cloudTransactionCount;              //@synthesize cloudTransactionCount=_cloudTransactionCount - In the implementation block
@property (readonly) unsigned long long localTransactionCount;              //@synthesize localTransactionCount=_localTransactionCount - In the implementation block
@property (retain) CallHistoryDBClientHandle * database;                    //@synthesize database=_database - In the implementation block
-(void)parseMergeDictionary:(id)arg1 withSyncSource:(unsigned char)arg2 ;
-(void)handleRemoteTransactionsNotification:(id)arg1 withSource:(unsigned char)arg2 ;
-(void)handleRemoteTransactionsNotification:(id)arg1 withChangeToken:(id)arg2 withMoreComing:(id)arg3 withSource:(unsigned char)arg4 ;
-(id)merge:(id)arg1 withRemoteTransactions:(id)arg2 ;
-(id)filterRemoteTransactions:(id)arg1 withLocalTransactions:(id)arg2 ;
-(id)unarchiveCallObject:(id)arg1 ;
-(id)reconcileTransaction:(unsigned long long)arg1 withLocalCall:(id)arg2 withRemoteCall:(id)arg3 ;
-(unsigned long long)cloudTransactionCount;
-(unsigned long long)localTransactionCount;
-(void)dealloc;
-(CallHistoryDBClientHandle *)database;
-(void)registerForNotifications;
-(id)initWithDatabase:(id)arg1 ;
-(void)setDatabase:(CallHistoryDBClientHandle *)arg1 ;
@end

