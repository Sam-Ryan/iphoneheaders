/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:02 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface IDSDAccountSendMessageContext : NSObject {

	BOOL _serviceIsDSBased;
	BOOL _serviceWantsReflectedSend;
	BOOL _serviceAllowProxyDelivery;
	BOOL _serviceAllowLocalDelivery;
	BOOL _serviceAllowWiProxDelivery;
	BOOL _serviceUseiMessageCallerID;
	BOOL _silentlyFailMessagesOnSwitch;
	BOOL _shouldProtectTrafficUsingClassA;
	BOOL _isRegistrationActive;
	BOOL _shouldIncludeDefaultDevice;
	unsigned _serviceAdHocType;
	int _accountType;
	unsigned _dataProtectionClass;
	NSString* _serviceIdentifier;
	NSString* _servicePushTopic;
	NSArray* _serviceDuetIdentifiers;
	NSString* _primaryRegistrationDSHandle;
	NSArray* _primaryRegistrationURIs;
	NSArray* _dependentRegistrations;
	NSDictionary* _defaultPairedDependentRegistrations;
	NSArray* _appleIDPrimaryDependentRegistrations;
	NSArray* _aliasStrings;
	NSString* _accountDescription;
	NSString* _accountDisplayName;
	id _listenerID;
	NSDictionary* _entitlements;
	NSString* _subService;

}

@property (nonatomic,retain) NSString * serviceIdentifier;                                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * servicePushTopic;                                     //@synthesize servicePushTopic=_servicePushTopic - In the implementation block
@property (nonatomic,retain) NSArray * serviceDuetIdentifiers;                                //@synthesize serviceDuetIdentifiers=_serviceDuetIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned serviceAdHocType;                                       //@synthesize serviceAdHocType=_serviceAdHocType - In the implementation block
@property (assign,nonatomic) BOOL serviceIsDSBased;                                           //@synthesize serviceIsDSBased=_serviceIsDSBased - In the implementation block
@property (assign,nonatomic) BOOL serviceWantsReflectedSend;                                  //@synthesize serviceWantsReflectedSend=_serviceWantsReflectedSend - In the implementation block
@property (assign,nonatomic) BOOL serviceAllowProxyDelivery;                                  //@synthesize serviceAllowProxyDelivery=_serviceAllowProxyDelivery - In the implementation block
@property (assign,nonatomic) BOOL serviceAllowLocalDelivery;                                  //@synthesize serviceAllowLocalDelivery=_serviceAllowLocalDelivery - In the implementation block
@property (assign,nonatomic) BOOL serviceAllowWiProxDelivery;                                 //@synthesize serviceAllowWiProxDelivery=_serviceAllowWiProxDelivery - In the implementation block
@property (assign,nonatomic) BOOL serviceUseiMessageCallerID;                                 //@synthesize serviceUseiMessageCallerID=_serviceUseiMessageCallerID - In the implementation block
@property (assign,nonatomic) BOOL silentlyFailMessagesOnSwitch;                               //@synthesize silentlyFailMessagesOnSwitch=_silentlyFailMessagesOnSwitch - In the implementation block
@property (assign,nonatomic) BOOL shouldProtectTrafficUsingClassA;                            //@synthesize shouldProtectTrafficUsingClassA=_shouldProtectTrafficUsingClassA - In the implementation block
@property (assign,nonatomic) int accountType;                                                 //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) NSString * primaryRegistrationDSHandle;                          //@synthesize primaryRegistrationDSHandle=_primaryRegistrationDSHandle - In the implementation block
@property (nonatomic,retain) NSArray * primaryRegistrationURIs;                               //@synthesize primaryRegistrationURIs=_primaryRegistrationURIs - In the implementation block
@property (assign,nonatomic) BOOL isRegistrationActive;                                       //@synthesize isRegistrationActive=_isRegistrationActive - In the implementation block
@property (nonatomic,retain) NSArray * dependentRegistrations;                                //@synthesize dependentRegistrations=_dependentRegistrations - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultPairedDependentRegistrations;              //@synthesize defaultPairedDependentRegistrations=_defaultPairedDependentRegistrations - In the implementation block
@property (nonatomic,retain) NSArray * appleIDPrimaryDependentRegistrations;                  //@synthesize appleIDPrimaryDependentRegistrations=_appleIDPrimaryDependentRegistrations - In the implementation block
@property (nonatomic,retain) NSArray * aliasStrings;                                          //@synthesize aliasStrings=_aliasStrings - In the implementation block
@property (nonatomic,retain) NSString * accountDescription;                                   //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain) NSString * accountDisplayName;                                   //@synthesize accountDisplayName=_accountDisplayName - In the implementation block
@property (nonatomic,retain) id listenerID;                                                   //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                                     //@synthesize entitlements=_entitlements - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeDefaultDevice;                                 //@synthesize shouldIncludeDefaultDevice=_shouldIncludeDefaultDevice - In the implementation block
@property (assign,nonatomic) unsigned dataProtectionClass;                                    //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,retain) NSString * subService;                                           //@synthesize subService=_subService - In the implementation block
-(NSArray *)dependentRegistrations;
-(BOOL)isRegistrationActive;
-(NSString *)servicePushTopic;
-(void)setServicePushTopic:(NSString *)arg1 ;
-(NSArray *)serviceDuetIdentifiers;
-(void)setServiceDuetIdentifiers:(NSArray *)arg1 ;
-(unsigned)serviceAdHocType;
-(void)setServiceAdHocType:(unsigned)arg1 ;
-(BOOL)serviceIsDSBased;
-(void)setServiceIsDSBased:(BOOL)arg1 ;
-(BOOL)serviceWantsReflectedSend;
-(void)setServiceWantsReflectedSend:(BOOL)arg1 ;
-(BOOL)serviceAllowProxyDelivery;
-(void)setServiceAllowProxyDelivery:(BOOL)arg1 ;
-(BOOL)serviceAllowLocalDelivery;
-(void)setServiceAllowLocalDelivery:(BOOL)arg1 ;
-(BOOL)serviceAllowWiProxDelivery;
-(void)setServiceAllowWiProxDelivery:(BOOL)arg1 ;
-(BOOL)serviceUseiMessageCallerID;
-(void)setServiceUseiMessageCallerID:(BOOL)arg1 ;
-(BOOL)silentlyFailMessagesOnSwitch;
-(void)setSilentlyFailMessagesOnSwitch:(BOOL)arg1 ;
-(BOOL)shouldProtectTrafficUsingClassA;
-(void)setShouldProtectTrafficUsingClassA:(BOOL)arg1 ;
-(NSString *)primaryRegistrationDSHandle;
-(void)setPrimaryRegistrationDSHandle:(NSString *)arg1 ;
-(NSArray *)primaryRegistrationURIs;
-(void)setPrimaryRegistrationURIs:(NSArray *)arg1 ;
-(void)setIsRegistrationActive:(BOOL)arg1 ;
-(void)setDependentRegistrations:(NSArray *)arg1 ;
-(NSDictionary *)defaultPairedDependentRegistrations;
-(void)setDefaultPairedDependentRegistrations:(NSDictionary *)arg1 ;
-(NSArray *)appleIDPrimaryDependentRegistrations;
-(void)setAppleIDPrimaryDependentRegistrations:(NSArray *)arg1 ;
-(void)setAliasStrings:(NSArray *)arg1 ;
-(NSString *)accountDisplayName;
-(void)setAccountDisplayName:(NSString *)arg1 ;
-(BOOL)shouldIncludeDefaultDevice;
-(void)setShouldIncludeDefaultDevice:(BOOL)arg1 ;
-(unsigned)dataProtectionClass;
-(NSString *)subService;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(void)setSubService:(NSString *)arg1 ;
-(NSArray *)aliasStrings;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(void)setListenerID:(id)arg1 ;
-(id)listenerID;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAccountType:(int)arg1 ;
-(NSString *)accountDescription;
-(int)accountType;
-(NSDictionary *)entitlements;
-(NSString *)serviceIdentifier;
@end

