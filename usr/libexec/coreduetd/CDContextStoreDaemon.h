/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CDContextStoreProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, _DKKnowledgeStore, NSString;

@interface CDContextStoreDaemon : NSXPCListener <NSXPCListenerDelegate, CDContextStoreProtocol> {

	NSObject*<OS_dispatch_queue> _dataQueue;
	NSMutableDictionary* _keyInfoDict;
	NSMutableDictionary* _contextDict;
	NSMutableDictionary* _ruleDict;
	_DKKnowledgeStore* _persistenceStore;

}

@property (retain) _DKKnowledgeStore * persistenceStore;              //@synthesize persistenceStore=_persistenceStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)predicateIdFromPredicate:(id)arg1 clientId:(id)arg2 ;
+(id)sharedInstance;
-(void)abandonHandlerForPredicateIds:(id)arg1 ;
-(long long)predicateIdFromPredicate:(id)arg1 clientId:(id)arg2 ;
-(id)persistenceStream;
-(void)fetchPersistentRulesAsEventsForPredicateId:(unsigned long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(long long)unsafeRegisterHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 ;
-(void)loadPersistentRulesFromEvents:(id)arg1 ;
-(void)fetchPersistentRulesAsEventsOnQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)evalPredicate:(id)arg1 readingKeys:(id)arg2 ;
-(id)stateAsDictForKeys:(id)arg1 ;
-(void)unsafeEvaluateRule:(id)arg1 forChangedKeys:(id)arg2 ;
-(BOOL)evalRule:(id)arg1 ;
-(BOOL)unsafeFireRuleEntry:(id)arg1 ;
-(void)cleanupRule:(id)arg1 ;
-(id)fleshOutMetaData:(id)arg1 ;
-(void)unsafeEvaluateRulesForChangedKeys:(id)arg1 ;
-(unsigned long long)predicateIdFromRule:(id)arg1 ;
-(void)deletePersistentRulesForPredicateId:(unsigned long long)arg1 ;
-(void)setupRule:(id)arg1 ;
-(void)persistTheRule:(id)arg1 ;
-(void)cleanupRuleForPredicateId:(unsigned long long)arg1 ;
-(void)unsafeAbandonHandlerForPredicateId:(long long)arg1 ;
-(void)abandonHandlerForPredicateId:(long long)arg1 ;
-(_DKKnowledgeStore *)persistenceStore;
-(void)setPersistenceStore:(_DKKnowledgeStore *)arg1 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stateForKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enablePredicateId:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerKey:(id)arg1 withSettings:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)settingsForKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 withMetaData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setStringValue:(id)arg1 forKey:(id)arg2 withMetaData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setIntegerValue:(long long)arg1 forKey:(id)arg2 withMetaData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)stringValueForKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)integerValueForKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deregisterPredicateString:(id)arg1 ;
-(void)deregisterPredicateString:(id)arg1 withClientId:(id)arg2 ;
-(void)deregisterHandlerForPredicateId:(long long)arg1 ;
@end

