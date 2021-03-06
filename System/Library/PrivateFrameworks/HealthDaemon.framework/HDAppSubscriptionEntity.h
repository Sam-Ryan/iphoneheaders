/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)uniquedColumns;
+(id)tableAliases;
+(id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)allSubscriptionsForType:(long long)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)allSubscriptionsForBundleID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(BOOL)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(long long)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(id)_predicateForBundleID:(id)arg1 dataCode:(long long)arg2 ;
+(id)_predicateForDataCode:(long long)arg1 ;
+(BOOL)_getSubscriptionsWithArray:(id)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)_predicateForBundleIdentifier:(id)arg1 ;
@end

