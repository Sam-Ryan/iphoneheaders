/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSObject;

@interface IDSDMessageStore : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_source> _databaseCloseTimer;
	double _databaseLastUpdateTime;
	unsigned _dataProtectionClass;

}
+(void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2 ;
+(id)sharedInstanceForDataProtectionClass:(unsigned)arg1 ;
+(void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2 ;
+(id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1 ;
+(id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3 ;
+(void)deleteIncomingMessageWithGUID:(id)arg1 ;
+(void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 ;
+(id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 ;
+(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(BOOL)arg3 localDestinationDeviceID:(id)arg4 ;
+(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 ;
+(id)largestPayloadSizeAccountUUID;
+(id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2 ;
+(id)allExpiredOutgoingMessages:(long long)arg1 ;
+(id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1 ;
+(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3 ;
+(id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(BOOL)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
+(id)unsentUrgentAccountUUIDsWithDataProtectionClass:(unsigned)arg1 ;
+(void)deletePostponedMessages;
+(void)markOutgoingMessagesAsUnsentIncludingClassD:(BOOL)arg1 ;
+(BOOL)databaseSizeBiggerThanThreshold:(long long)arg1 ;
+(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 priority:(long long)arg3 hardLimit:(long long)arg4 ;
+(id)sharedInstance;
-(void)markAllMessageAsPendingDeleteForAccounts:(id)arg1 withDestinationDevice:(id)arg2 ;
-(int)internalMigrationVersionOnDatabase;
-(void)markLocalDestinationDeviceUUIDForAccounts:(id)arg1 deviceUUID:(id)arg2 ;
-(void)updateInternalMigrationVersionOnDatabaseWithValue:(int)arg1 ;
-(id)unsentNonUrgentAccountUUIDsRequiringDuetOverrides:(BOOL)arg1 priority:(long long)arg2 ;
-(id)unsentUrgentAccountUUIDs;
-(id)allOutgoingMessagesPendingDeleteWithLimit:(long long)arg1 ;
-(id)outgoingMessagesWithEnqueueDateOlderThan:(long long)arg1 notToDestinationDeviceID:(id)arg2 andLimit:(long long)arg3 ;
-(void)deletePostponedMessages:(id)arg1 ;
-(void)deleteIncomingMessageWithGUID:(id)arg1 ;
-(void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 ;
-(id)incomingMessagesUpToLimit:(unsigned long long)arg1 messageTransportType:(unsigned char)arg2 ;
-(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(BOOL)arg3 localDestinationDeviceID:(id)arg4 ;
-(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 ;
-(void)markAllOutgoingMessagesAsUnsent;
-(long long)databaseSizeInMB;
-(id)largestPayloadSizeAccountUUID;
-(id)allOutgoingMessagesOnAccountGUID:(id)arg1 localDestinationDeviceID:(id)arg2 ;
-(id)allExpiredOutgoingMessages:(long long)arg1 ;
-(id)uniqueAccountGUIDsForUnsentOutgoingMessages:(long long)arg1 ;
-(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 localDestinationDeviceID:(id)arg2 hardLimit:(long long)arg3 ;
-(id)allUnsentOutgoingMessagesForAccounts:(id)arg1 priority:(long long)arg2 localDestinationDeviceID:(id)arg3 hardLimit:(long long)arg4 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 isLocal:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_createOutgoingMessageRecordsFromSQLRecords:(CFArrayRef)arg1 includeMessagePayloads:(BOOL)arg2 ;
-(id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 byteLimit:(unsigned long long)arg2 priority:(long long)arg3 accountUUID:(id)arg4 wantsPayload:(BOOL)arg5 requireDuet:(BOOL)arg6 localDestinationDeviceID:(id)arg7 ;
-(void)_setDataProtectionClass:(unsigned)arg1 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 priority:(long long)arg2 byteLimit:(unsigned long long)arg3 upToLimit:(unsigned long long)arg4 localDestinationDeviceID:(id)arg5 ;
-(id)duetIdentifiersOverrideForAccountWithGUID:(id)arg1 priority:(long long)arg2 ;
-(void)storeOutgoingMessageWithSendParameters:(id)arg1 guid:(id)arg2 canSend:(BOOL)arg3 canBypassSimilarMessages:(BOOL)arg4 fromQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)markOutgoingMessageWithGUID:(id)arg1 asSent:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(unsigned)dataProtectionClass;
-(void)closeDatabase;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidLeaveMemoryPressure;
-(void)_performInitialHousekeeping;
-(void)_clearDatabaseCloseTimerOnIvarQueue;
-(void)__closeDatabaseOnIvarQueue;
-(void)_setDatabaseCloseTimerOnIvarQueue;
@end

