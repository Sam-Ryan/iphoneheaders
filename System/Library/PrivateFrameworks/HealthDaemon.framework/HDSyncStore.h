/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncStore <NSObject>
@required
-(long long)syncProvenance;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncStoreIdentifier;
-(Class)receivingSyncEntityClassForIncomingClass:(Class)arg1;
-(id)orderedSyncEntities;
-(BOOL)enforceSyncEntityOrdering;

@end
