/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAPSecuritySessionDelegate.h>
#import <libobjc.A.dylib/HAPFragmentationStreamDelegate.h>
#import <libobjc.A.dylib/HAPTimerDelegate.h>
#import <libobjc.A.dylib/HAPStreamDelegate.h>

@class HAPRelayStream, NSMutableArray, NSMapTable, NSOperationQueue, HAPFragmentationStream, HAPSecuritySession, HAPExponentialBackoffTimer, NSString;

@interface HAPAccessoryServerRelay : HAPAccessoryServer <HAPSecuritySessionDelegate, HAPFragmentationStreamDelegate, HAPTimerDelegate, HAPStreamDelegate> {

	BOOL _securitySessionOpen;
	BOOL _securitySessionOpening;
	BOOL _discovered;
	BOOL _shouldDiscover;
	unsigned short _nextRequestTransactionIdentifier;
	HAPRelayStream* _stream;
	NSMutableArray* _pendingRequests;
	NSMapTable* _pendingResponses;
	NSOperationQueue* _requestOperationQueue;
	HAPFragmentationStream* _fragmentationStream;
	HAPSecuritySession* _securitySession;
	NSOperationQueue* _pairVerifyOperationQueue;
	HAPExponentialBackoffTimer* _reachabilityProbeTimer;
	unsigned long long _configurationNumber;

}

@property (nonatomic,readonly) HAPRelayStream * stream;                                                //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                       //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingResponses;                                          //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;                               //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,readonly) HAPFragmentationStream * fragmentationStream;                           //@synthesize fragmentationStream=_fragmentationStream - In the implementation block
@property (nonatomic,readonly) unsigned short nextRequestTransactionIdentifier;                        //@synthesize nextRequestTransactionIdentifier=_nextRequestTransactionIdentifier - In the implementation block
@property (nonatomic,retain) HAPSecuritySession * securitySession;                                     //@synthesize securitySession=_securitySession - In the implementation block
@property (assign,getter=isSecuritySessionOpen,nonatomic) BOOL securitySessionOpen;                    //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (assign,getter=isSecuritySessionOpening,nonatomic) BOOL securitySessionOpening;              //@synthesize securitySessionOpening=_securitySessionOpening - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * pairVerifyOperationQueue;                            //@synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue - In the implementation block
@property (nonatomic,retain) HAPExponentialBackoffTimer * reachabilityProbeTimer;                      //@synthesize reachabilityProbeTimer=_reachabilityProbeTimer - In the implementation block
@property (assign,nonatomic) unsigned long long configurationNumber;                                   //@synthesize configurationNumber=_configurationNumber - In the implementation block
@property (assign,getter=hasDiscovered,nonatomic) BOOL discovered;                                     //@synthesize discovered=_discovered - In the implementation block
@property (assign,nonatomic) BOOL shouldDiscover;                                                      //@synthesize shouldDiscover=_shouldDiscover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_enqueueRequest:(id)arg1 ;
-(long long)linkType;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)securitySessionIsOpening:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg1 ;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2 ;
-(HAPExponentialBackoffTimer *)reachabilityProbeTimer;
-(void)setReachabilityProbeTimer:(HAPExponentialBackoffTimer *)arg1 ;
-(HAPSecuritySession *)securitySession;
-(void)setSecuritySession:(HAPSecuritySession *)arg1 ;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(void)setSecuritySessionOpening:(BOOL)arg1 ;
-(BOOL)shouldDiscover;
-(void)_establishSecuritySession;
-(void)_parseAttributeDatabase:(id)arg1 configurationNumber:(id)arg2 ;
-(void)setShouldDiscover:(BOOL)arg1 ;
-(void)_sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDiscovered:(BOOL)arg1 ;
-(void)setConfigurationNumber:(unsigned long long)arg1 ;
-(void)_handleCharacteristicReadResponse:(id)arg1 characteristics:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_handleCharacteristicWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)configurationNumber;
-(id)_encryptData:(id)arg1 error:(id*)arg2 ;
-(void)_handleNotificationResponse:(id)arg1 ;
-(void)_cancelAllQueuedOperationsWithError:(id)arg1 ;
-(void)_resumeAllOperations;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(NSOperationQueue *)pairVerifyOperationQueue;
-(BOOL)isSecuritySessionOpen;
-(BOOL)isSecuritySessionOpening;
-(void)_suspendAllOperations;
-(void)_handleReceivedMessageData:(id)arg1 withIdentifier:(id)arg2 error:(id)arg3 ;
-(void)_startReachabilityProbe;
-(void)_endReachabilityProbe;
-(id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id*)arg2 ;
-(void)_handleSecuritySessionSetupExchangeData:(id)arg1 ;
-(void)_handleFragmentedResponse:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3 ;
-(void)_handleReachabilityProbeFire;
-(id)initWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 keyStore:(id)arg4 ;
-(BOOL)hasDiscovered;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPaired;
-(void)timerDidFire:(id)arg1 ;
-(NSMutableArray *)pendingRequests;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(NSMapTable *)pendingResponses;
-(BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSOperationQueue *)requestOperationQueue;
-(HAPFragmentationStream *)fragmentationStream;
-(unsigned short)_nextTransactionIdentifier;
-(void)fragmentationStream:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)fragmentationStream:(id)arg1 didReceiveData:(id)arg2 transactionIdentifier:(unsigned short)arg3 error:(id)arg4 ;
-(unsigned short)nextRequestTransactionIdentifier;
-(void)startPairing;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)hasPairings;
-(void)discoverAccessories;
-(void)stream:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)streamDidSuspend:(id)arg1 ;
-(void)streamDidResume:(id)arg1 ;
-(void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3 ;
-(HAPRelayStream *)stream;
@end

