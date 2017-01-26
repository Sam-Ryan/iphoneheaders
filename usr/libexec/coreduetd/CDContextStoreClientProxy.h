/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class CDContextStoreDaemon, NSMutableSet, NSObject;

@interface CDContextStoreClientProxy : NSProxy {

	CDContextStoreDaemon* _daemon;
	NSMutableSet* _registeredPredicateIds;
	NSObject*<OS_dispatch_queue> _registeredPredicateIDsQueue;

}

@property (retain) CDContextStoreDaemon * daemon;                                         //@synthesize daemon=_daemon - In the implementation block
@property (retain) NSMutableSet * registeredPredicateIds;                                 //@synthesize registeredPredicateIds=_registeredPredicateIds - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> registeredPredicateIDsQueue;              //@synthesize registeredPredicateIDsQueue=_registeredPredicateIDsQueue - In the implementation block
-(void)setRegisteredPredicateIds:(NSMutableSet *)arg1 ;
-(void)setRegisteredPredicateIDsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)registeredPredicatesCopy;
-(NSObject*<OS_dispatch_queue>)registeredPredicateIDsQueue;
-(NSMutableSet *)registeredPredicateIds;
-(void)addRegisteredPredicateWithID:(long long)arg1 ;
-(void)removeRegisteredPredicateWithID:(long long)arg1 ;
-(id)initWithContextStoreDaemon:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)registerHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deregisterPredicateString:(id)arg1 ;
-(void)deregisterPredicateString:(id)arg1 withClientId:(id)arg2 ;
-(void)deregisterHandlerForPredicateId:(long long)arg1 ;
-(CDContextStoreDaemon *)daemon;
-(void)setDaemon:(CDContextStoreDaemon *)arg1 ;
@end
