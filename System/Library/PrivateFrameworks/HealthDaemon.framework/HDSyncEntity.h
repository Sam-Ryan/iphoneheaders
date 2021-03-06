/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncEntity <NSObject>
@required
+(long long)syncEntityType;
+(id)syncObjectsWithStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 limit:(unsigned long long)arg5 healthDaemon:(id)arg6 error:(id*)arg7;
+(long long)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+(id)decodeSyncObjectWithData:(id)arg1;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+(id)syncEntityDependencies;

@end

