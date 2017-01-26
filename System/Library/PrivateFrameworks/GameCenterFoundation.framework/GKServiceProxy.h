/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:44:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, GKThreadsafeDictionary, GKDaemonProxy, GKPlayerInternal;

@interface GKServiceProxy : NSObject {

	NSDictionary* _serviceLookup;
	GKThreadsafeDictionary* _pendingRequests;
	unsigned _serviceGeneration;
	GKDaemonProxy* _baseProxy;
	GKPlayerInternal* _localPlayer;

}

@property (retain) GKDaemonProxy * baseProxy;                             //@synthesize baseProxy=_baseProxy - In the implementation block
@property (retain) GKPlayerInternal * localPlayer;                        //@synthesize localPlayer=_localPlayer - In the implementation block
@property (retain) GKThreadsafeDictionary * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (retain) NSDictionary * serviceLookup;                          //@synthesize serviceLookup=_serviceLookup - In the implementation block
@property (assign) unsigned serviceGeneration;                            //@synthesize serviceGeneration=_serviceGeneration - In the implementation block
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)gameServicePrivate;
-(id)gameStatService;
-(id)accountService;
-(id)profileServicePrivate;
-(id)friendService;
-(id)friendServicePrivate;
-(id)analyticsService;
-(id)multiplayerService;
-(id)profileService;
-(id)turnBasedService;
-(id)turnBasedServicePrivate;
-(GKDaemonProxy *)baseProxy;
-(void)setLocalPlayer:(GKPlayerInternal *)arg1 ;
-(void)setBaseProxy:(GKDaemonProxy *)arg1 ;
-(unsigned)serviceGeneration;
-(void)setServiceGeneration:(unsigned)arg1 ;
-(void)setServiceLookup:(NSDictionary *)arg1 ;
-(void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3 ;
-(id)requestIdentifierForInvocation:(id)arg1 ;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)buildServiceLookupIfNeccessary;
-(NSDictionary *)serviceLookup;
-(void)buildServiceLookup;
-(void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(id)gameService;
-(id)gameStatServicePrivate;
-(id)challengeService;
-(id)challengeServicePrivate;
-(id)multiplayerServicePrivate;
-(id)bulletinService;
-(id)bulletinServicePrivate;
-(id)linkedAccountsService;
-(id)analyticsServicePrivate;
-(id)initWithPlayer:(id)arg1 ;
-(GKPlayerInternal *)localPlayer;
-(id)linkedAccountsServicePrivate;
-(id)accountServicePrivate;
-(id)utilityService;
-(id)utilityServicePrivate;
-(GKThreadsafeDictionary *)pendingRequests;
-(void)setPendingRequests:(GKThreadsafeDictionary *)arg1 ;
@end

