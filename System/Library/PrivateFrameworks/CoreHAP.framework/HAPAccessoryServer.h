/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPAccessoryServerDelegate, HAPAccessoryServerForBridgeDelegate, OS_dispatch_queue, HAPKeyStore;
@class NSString, NSNumber, HAPAccessory, NSArray, NSObject, NSHashTable;

@interface HAPAccessoryServer : NSObject {

	NSString* _name;
	NSString* _identifier;
	BOOL _hasPairings;
	BOOL _reachable;
	BOOL _incompatibleUpdate;
	NSNumber* _category;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	NSArray* _associatedAccessories;
	NSArray* _discoveredAccessories;
	NSString* _pairSetupPassword;
	NSString* _homeName;
	id<HAPAccessoryServerDelegate> _delegate;
	id<HAPAccessoryServerForBridgeDelegate> _bridgeDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	id<HAPKeyStore> _keyStore;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;

}

@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * category;                                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy) NSArray * associatedAccessories;                                     //@synthesize associatedAccessories=_associatedAccessories - In the implementation block
@property (nonatomic,copy) NSArray * discoveredAccessories;                                     //@synthesize discoveredAccessories=_discoveredAccessories - In the implementation block
@property (nonatomic,readonly) long long linkType; 
@property (assign,nonatomic) BOOL hasPairings;                                                  //@synthesize hasPairings=_hasPairings - In the implementation block
@property (nonatomic,copy) NSString * pairSetupPassword;                                        //@synthesize pairSetupPassword=_pairSetupPassword - In the implementation block
@property (nonatomic,copy) NSString * homeName;                                                 //@synthesize homeName=_homeName - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<HAPAccessoryServerForBridgeDelegate> bridgeDelegate;                      //@synthesize bridgeDelegate=_bridgeDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,getter=isIncompatibleUpdate,nonatomic) BOOL incompatibleUpdate;               //@synthesize incompatibleUpdate=_incompatibleUpdate - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPKeyStore> keyStore;                                 //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
+(BOOL)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2 ;
-(id)init;
-(id<HAPAccessoryServerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSNumber *)arg1 ;
-(NSNumber *)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)linkType;
-(BOOL)isReachable;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithKeystore:(id)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(id<HAPAccessoryServerForBridgeDelegate>)bridgeDelegate;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setHasPairings:(BOOL)arg1 ;
-(void)setDiscoveredAccessories:(NSArray *)arg1 ;
-(void)setAssociatedAccessories:(NSArray *)arg1 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(BOOL)isIncompatibleUpdate;
-(void)addInternalDelegate:(id)arg1 ;
-(void)notifyDelegateUpdatedHasPairings:(BOOL)arg1 ;
-(void)notifyDelegateUpdatedName:(id)arg1 ;
-(void)notifyDelegateUpdatedCategory:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(NSHashTable *)internalDelegates;
-(void)removeInternalDelegate:(id)arg1 ;
-(void)setBridgeDelegate:(id<HAPAccessoryServerForBridgeDelegate>)arg1 ;
-(void)setIncompatibleUpdate:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSArray *)accessories;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)homeName;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPaired;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)discoveredAccessories;
-(NSArray *)associatedAccessories;
-(void)setTheBridgeDelegate:(id)arg1 ;
-(BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HAPAccessory *)primaryAccessory;
-(void)setPairSetupPassword:(NSString *)arg1 ;
-(void)setHomeName:(NSString *)arg1 ;
-(void)startPairing;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)hasPairings;
-(NSString *)pairSetupPassword;
-(void)discoverAccessories;
@end

