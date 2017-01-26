/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAPHTTPClientDelegate.h>
#import <libobjc.A.dylib/HAPHTTPClientDebugDelegate.h>

@class NSString, NSDictionary, HAPAccessoryServerBrowserIP, NSArray, NSMutableArray, HAPAccessory, HAPHTTPClient;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate> {

	MFiSAPRef _mfiSAP;
	PairingSessionPrivateRef _pairingSession;
	unsigned long long _featureFlags;
	BOOL _establishingSecureConnection;
	BOOL _hasTunnelService;
	NSString* _model;
	NSString* _protocolVersion;
	NSString* _sourceVersion;
	unsigned long long _configNumber;
	unsigned long long _statusFlags;
	NSDictionary* _bonjourDeviceInfo;
	HAPAccessoryServerBrowserIP* _browser;
	NSArray* _ipServices;
	NSMutableArray* _queuedOperations;
	HAPAccessory* _primaryAccessoryForServer;
	HAPHTTPClient* _httpClient;
	/*^block*/id _pairVerifyCompletionBlock;
	NSString* _controllerUsername;
	/*^block*/id _netServiceResolveCompletionBlock;

}

@property (nonatomic,copy) NSString * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * protocolVersion;                                  //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                                    //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                           //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                            //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSDictionary * bonjourDeviceInfo;                          //@synthesize bonjourDeviceInfo=_bonjourDeviceInfo - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessoryServerBrowserIP * browser;              //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSArray * ipServices;                                      //@synthesize ipServices=_ipServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedOperations;                         //@synthesize queuedOperations=_queuedOperations - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessoryForServer;                  //@synthesize primaryAccessoryForServer=_primaryAccessoryForServer - In the implementation block
@property (nonatomic,retain) HAPHTTPClient * httpClient;                                //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletionBlock;                                //@synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock - In the implementation block
@property (nonatomic,retain) NSString * controllerUsername;                             //@synthesize controllerUsername=_controllerUsername - In the implementation block
@property (nonatomic,copy) id netServiceResolveCompletionBlock;                         //@synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock - In the implementation block
@property (assign) BOOL establishingSecureConnection;                                   //@synthesize establishingSecureConnection=_establishingSecureConnection - In the implementation block
@property (assign,nonatomic) BOOL hasTunnelService;                                     //@synthesize hasTunnelService=_hasTunnelService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)_reset;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(id)services;
-(long long)linkType;
-(void)setQueuedOperations:(NSMutableArray *)arg1 ;
-(void)setEstablishingSecureConnection:(BOOL)arg1 ;
-(void)setHasTunnelService:(BOOL)arg1 ;
-(BOOL)_parseAndValidateTXTRecord;
-(void)_tearDownSession;
-(HAPHTTPClient *)httpClient;
-(void)setHttpClient:(HAPHTTPClient *)arg1 ;
-(unsigned long long)configNumber;
-(unsigned long long)statusFlags;
-(void)_updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)setBonjourDeviceInfo:(NSDictionary *)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(BOOL)_isSessionEstablished;
-(void)_getAttributeDatabase;
-(void)_establishSecureConnectionAndFetchAttributeDatabase;
-(NSArray *)ipServices;
-(BOOL)establishingSecureConnection;
-(void)setPairVerifyCompletionBlock:(id)arg1 ;
-(void)_establishSecureSession;
-(int)_pairSetupStart;
-(int)_continuePairingAfterAuthPrompt;
-(int)_pairSetupTryPassword:(id)arg1 ;
-(void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)queuedOperations;
-(void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_queueReadCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_handleHTTPClientErrors;
-(void)_queueWriteCharacteristicValues:(id)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_handleUpdatesForCharacteristics:(id)arg1 ;
-(void)_queueEnableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(BOOL)arg6 completion:(/*^block*/id)arg7 queue:(id)arg8 ;
-(BOOL)_bridgeDelegateRespondsToSelector:(SEL)arg1 ;
-(BOOL)_processEvent:(id)arg1 matchedCharacteristic:(id*)arg2 ;
-(NSDictionary *)bonjourDeviceInfo;
-(BOOL)_parseTXTRecordDictionary:(id)arg1 ;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(void)_fetchEntireAttributeDatabase;
-(void)_fetchDiscoveredAccessoriesAttributeDatabase;
-(void)_getDiscoveredAccessoriesAttributeDatabase;
-(void)_processQueuedOperationsWithError:(id)arg1 ;
-(void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2 ;
-(void)_parseDiscoveredAttributeDatabase:(id)arg1 transaction:(id)arg2 ;
-(id)_parseAccessories:(id)arg1 andDiscoveredAccessories:(id)arg2 ;
-(void)__registerForInternalCharacteristicNotifications;
-(id)_parseDiscoveredAccessories:(id)arg1 withError:(id)arg2 ;
-(void)setPrimaryAccessoryForServer:(HAPAccessory *)arg1 ;
-(id)_parseSerializedAccessories:(id)arg1 andInstanceIDs:(id)arg2 withError:(id)arg3 ;
-(BOOL)_updateAccessories:(id)arg1 ;
-(BOOL)_updatewithNewAccessories:(id)arg1 associated:(BOOL)arg2 ;
-(id)_parseSerializedDiscoveredAccessories:(id)arg1 andInstanceIDs:(id)arg2 withError:(id)arg3 ;
-(BOOL)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2 ;
-(BOOL)_mergeExistingService:(id)arg1 withNewService:(id)arg2 ;
-(int)_pairVerifyStart;
-(int)_ensureHTTPClientSetUp;
-(id)pairVerifyCompletionBlock;
-(HAPAccessoryServerBrowserIP *)browser;
-(NSString *)controllerUsername;
-(void)_isAccessoryPublicKeyPresent:(BOOL*)arg1 registeredWithHomeKit:(BOOL*)arg2 ;
-(int)_handlePairSetupCompletionWithData:(id)arg1 ;
-(int)_ensurePairingSessionIsInitializedWithType:(unsigned)arg1 ;
-(int)_handlePairVerifyCompletionWithData:(id)arg1 ;
-(void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(BOOL)arg5 completionQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)httpClient:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)httpClientDidCloseConnectionDueToServer:(id)arg1 ;
-(void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3 ;
-(void)updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 ;
-(void)fetchEntireAttributeDatabase;
-(id)_parsewithAssociated:(id)arg1 withError:(id)arg2 ;
-(BOOL)isSessionEstablised;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBrowser:(HAPAccessoryServerBrowserIP *)arg1 ;
-(void)setIpServices:(NSArray *)arg1 ;
-(HAPAccessory *)primaryAccessoryForServer;
-(void)setControllerUsername:(NSString *)arg1 ;
-(id)netServiceResolveCompletionBlock;
-(void)setNetServiceResolveCompletionBlock:(id)arg1 ;
-(BOOL)hasTunnelService;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDiscoveredAccessoriesAttributeDatabase;
-(BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)primaryAccessory;
-(void)startPairing;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(void)discoverAccessories;
@end

