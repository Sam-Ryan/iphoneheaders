/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBKSyncTransactionProcessing <NSObject>
@optional
-(id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToUpdate:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToDelete:(id)arg2;
-(long long)transaction:(id)arg1 conflictDetectionTypeForTransactionDetectionType:(long long)arg2;
-(id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;

@required
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;

@end
