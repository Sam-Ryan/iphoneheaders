/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressPublisher.h>

@class NSString, NSXPCConnection, NSMutableDictionary, NSLock, NSMutableSet, NSDictionary;

@interface NSProgress : NSObject <NSProgressPublisher> {

	NSProgress* _parent;
	long long _reserved4;
	id _values;
	/*^block*/id _resumingHandler;
	/*^block*/id _cancellationHandler;
	/*^block*/id _pausingHandler;
	/*^block*/id _prioritizationHandler;
	unsigned long long _flags;
	id _userInfoProxy;
	NSString* _publisherID;
	NSXPCConnection* _connection;
	long long _unpublishingBlockageCount;
	long long _disconnectingBlockageCount;
	long long _remoteObserverCount;
	NSMutableDictionary* _acknowledgementHandlersByBundleID;
	NSMutableDictionary* _lastNotificationTimesByKey;
	NSMutableDictionary* _userInfoLastNotificationTimesByKey;
	NSLock* _lock;
	NSMutableSet* _children;

}

@property (nonatomic,readonly) NSString * sf_publishingKey; 
@property (nonatomic,readonly) NSString * sf_bundleID; 
@property (nonatomic,readonly) NSString * sf_sessionID; 
@property (nonatomic,readonly) NSString * sf_personRealName; 
@property (nonatomic,readonly) NSString * sf_error; 
@property (assign,nonatomic) long long sf_transferState; 
@property (assign,nonatomic) unsigned long long installState; 
@property (assign,nonatomic) unsigned long long installPhase; 
@property (assign) BOOL _adoptChildUserInfo; 
@property (assign) long long totalUnitCount; 
@property (assign) long long completedUnitCount; 
@property (copy) NSString * localizedDescription; 
@property (copy) NSString * localizedAdditionalDescription; 
@property (getter=isCancellable) BOOL cancellable; 
@property (getter=isPausable) BOOL pausable; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (getter=isPaused,readonly) BOOL paused; 
@property (copy) id cancellationHandler; 
@property (copy) id pausingHandler; 
@property (copy) id resumingHandler; 
@property (getter=isIndeterminate,readonly) BOOL indeterminate; 
@property (readonly) double fractionCompleted; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy) NSString * kind; 
@property (getter=isOld,readonly) BOOL old; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2 ;
+(id)sf_transferStateAsString:(long long)arg1 ;
+(id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2 ;
+(id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2 ;
+(id)keyPathsForValuesAffectingInstallState;
+(id)keyPathsForValuesAffectingInstallPhase;
+(id)_registrarInterface;
+(id)_publisherInterface;
+(id)_subscriberInterface;
+(id)_addSubscriberForFileURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)discreteProgressWithTotalUnitCount:(long long)arg1 ;
+(id)keyPathsForValuesAffectingLocalizedDescription;
+(id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+(id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(/*^block*/id)arg2 ;
+(void)removeSubscriber:(id)arg1 ;
+(id)addSubscriberForFileURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(/*^block*/id)arg2 ;
+(void)_removeSubscriber:(id)arg1 ;
+(id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(/*^block*/id)arg2 ;
+(id)progressWithTotalUnitCount:(long long)arg1 ;
+(id)currentProgress;
+(id)progressWithTotalUnitCount:(long long)arg1 parent:(id)arg2 pendingUnitCount:(long long)arg3 ;
-(long long)sf_transferState;
-(NSString *)sf_error;
-(void)setSf_transferState:(long long)arg1 ;
-(NSString *)sf_bundleID;
-(NSString *)sf_sessionID;
-(id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3 ;
-(NSString *)sf_publishingKey;
-(NSString *)sf_personRealName;
-(id)sf_initWithFileURL:(id)arg1 ;
-(void)sf_failedWithError:(id)arg1 ;
-(id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3 ;
-(void)setInstallPhase:(unsigned long long)arg1 ;
-(void)_LSResume;
-(id)_LSDescription;
-(unsigned long long)installState;
-(unsigned long long)installPhase;
-(void)setInstallState:(unsigned long long)arg1 ;
-(void)_receiveProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2 ;
-(void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)acknowledge;
-(id)_initWithValues:(id)arg1 ;
-(void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(id)initWithParent:(id)arg1 userInfo:(id)arg2 ;
-(void)set_adoptChildUserInfo:(BOOL)arg1 ;
-(void)setPausingHandler:(id)arg1 ;
-(void)setResumingHandler:(id)arg1 ;
-(unsigned long long)ownedDictionaryCount;
-(id)ownedDictionaryKeyEnumerator;
-(id)ownedDictionaryObjectForKey:(id)arg1 ;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(void)_addImplicitChild:(id)arg1 ;
-(void)_updateChild:(id)arg1 fraction:(id)arg2 portion:(long long)arg3 ;
-(void)_setParent:(id)arg1 portion:(long long)arg2 ;
-(void)_addCompletedUnitCount:(long long)arg1 ;
-(void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2 ;
-(void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2 ;
-(id)_setValueForKeys:(/*^block*/id)arg1 settingBlock:(/*^block*/id)arg2 ;
-(void)_updateFractionCompleted:(id)arg1 ;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3 ;
-(void)_publish;
-(void)_unblockDisconnecting;
-(void)_unpublish;
-(void)_unblockUnpublishing;
-(void)_setAcknowledgementHandler:(/*^block*/id)arg1 forAppBundleIdentifier:(id)arg2 ;
-(/*^block*/id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1 ;
-(oneway void)prioritize;
-(oneway void)startProvidingValuesWithInitialAcceptor:(/*^block*/id)arg1 ;
-(oneway void)stopProvidingValues;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 inBlock:(/*^block*/id)arg2 ;
-(BOOL)_adoptChildUserInfo;
-(void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2 ;
-(void)setLocalizedAdditionalDescription:(NSString *)arg1 ;
-(NSString *)localizedAdditionalDescription;
-(void)setCancellable:(BOOL)arg1 ;
-(BOOL)isCancellable;
-(void)setPausable:(BOOL)arg1 ;
-(BOOL)isPausable;
-(id)pausingHandler;
-(id)resumingHandler;
-(void)publish;
-(void)unpublish;
-(void)setAcknowledgementHandler:(/*^block*/id)arg1 forAppBundleIdentifier:(id)arg2 ;
-(/*^block*/id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1 ;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(BOOL)isOld;
-(id)_publishingAppBundleIdentifier;
-(void)setPrioritizable:(BOOL)arg1 ;
-(BOOL)isPrioritizable;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)prioritizationHandler;
-(void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)_parent;
-(NSString *)localizedDescription;
-(NSDictionary *)userInfo;
-(BOOL)isCancelled;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)resume;
-(BOOL)isIndeterminate;
-(NSString *)kind;
-(double)fractionCompleted;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(void)pause;
-(BOOL)isFinished;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(BOOL)isPaused;
-(void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2 ;
@end

