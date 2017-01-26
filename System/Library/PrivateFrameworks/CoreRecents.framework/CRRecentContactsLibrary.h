/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreRecents/CoreRecents-Structs.h>
@class NSObject, NSXPCConnection;

@interface CRRecentContactsLibrary : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	NSXPCConnection* _connection;

}
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 ;
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(NSObject*)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 ;
+(NSObject*)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned long long)arg6 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 ;
+(NSObject*)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned long long)arg5 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4 ;
+(/*^block*/id)frecencyComparator;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned long long)arg7 ;
+(id)defaultInstance;
-(void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)_newConnection;
-(id)_searchRecentsUsingQuery:(id)arg1 ;
-(id)_remoteLibraryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_searchRecentsUsingQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_searchRecentsUsingQuery:(id)arg1 error:(id*)arg2 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(BOOL)arg5 ;
-(BOOL)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id*)arg4 ;
-(void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2 ;
-(id)_recentContactsWithQuery:(id)arg1 ;
-(void)performRecentsSearch:(id)arg1 operationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4 ;
-(id)copyRecentsForDomain:(id)arg1 ;
-(void)_removeAllRecentContactsWithCompletion:(/*^block*/id)arg1 ;
-(int)_daemonProcessID;
-(unsigned long long)maxDateEventsPerRecentContact;
-(void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(/*^block*/id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(BOOL)arg4 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 ;
-(BOOL)removeRecentContacts:(id)arg1 error:(out id*)arg2 ;
-(void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

