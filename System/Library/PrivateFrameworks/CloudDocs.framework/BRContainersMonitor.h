/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BRContainersMonitor : NSObject {

	NSMutableDictionary* _observersByContainerID;
	NSMutableDictionary* _notifyTokenByContainerID;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)containerIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerID:(id)arg1 ;
+(id)bundleIDFromPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
+(BOOL)isContainerIDForeground:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forContainerID:(id)arg2 ;
-(void)finalize;
@end

