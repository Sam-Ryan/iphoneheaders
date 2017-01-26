/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/networkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <networkd/networkd-Structs.h>
@class NSString, NSMutableArray, NSObject, NWInterface;

@interface NETInterfaceManager : NSObject {

	BOOL _hasCellularAgents;
	BOOL _dumpingState;
	int _nwiToken;
	int _dnsToken;
	int _configToken;
	int _ioctl_socket;
	unsigned _coalescedUpdatePending;
	unsigned _persistentInterfaceIndex;
	long long _persistentInterfaceGuidanceState;
	NSString* _primaryInterfaceName;
	NSString* _fallbackInterfaceName;
	NSMutableArray* _interfaces;
	NSMutableArray* _unscopedDNSResolvers;
	NSMutableArray* _changeHandlers;
	ifaddrs* _interfaceAddrs;
	SCD_Struct_NE5* _dnsConfig;
	NSObject* _changeHandlersLock;
	NSObject* _interfacesLock;

}

@property (readonly) NWInterface * primaryInterface; 
@property (readonly) NWInterface * fallbackInterface; 
@property (assign) long long persistentInterfaceGuidanceState;                                                         //@synthesize persistentInterfaceGuidanceState=_persistentInterfaceGuidanceState - In the implementation block
@property (getter=isRadioActive,readonly) BOOL radioActive; 
@property (getter=isAnyInterfaceEligibleForCrazyIvan46,readonly) BOOL anyInterfaceEligibleForCrazyIvan46; 
@property (retain) NSString * primaryInterfaceName;                                                                    //@synthesize primaryInterfaceName=_primaryInterfaceName - In the implementation block
@property (retain) NSString * fallbackInterfaceName;                                                                   //@synthesize fallbackInterfaceName=_fallbackInterfaceName - In the implementation block
@property (retain) NSMutableArray * interfaces;                                                                        //@synthesize interfaces=_interfaces - In the implementation block
@property (retain) NSMutableArray * unscopedDNSResolvers;                                                              //@synthesize unscopedDNSResolvers=_unscopedDNSResolvers - In the implementation block
@property (retain) NSMutableArray * changeHandlers;                                                                    //@synthesize changeHandlers=_changeHandlers - In the implementation block
@property (assign) int nwiToken;                                                                                       //@synthesize nwiToken=_nwiToken - In the implementation block
@property (assign) int dnsToken;                                                                                       //@synthesize dnsToken=_dnsToken - In the implementation block
@property (assign) int configToken;                                                                                    //@synthesize configToken=_configToken - In the implementation block
@property (assign) int ioctl_socket;                                                                                   //@synthesize ioctl_socket=_ioctl_socket - In the implementation block
@property (assign) ifaddrs* interfaceAddrs;                                                                            //@synthesize interfaceAddrs=_interfaceAddrs - In the implementation block
@property (assign) SCD_Struct_NE5* dnsConfig;                                                                          //@synthesize dnsConfig=_dnsConfig - In the implementation block
@property (assign) unsigned coalescedUpdatePending;                                                                    //@synthesize coalescedUpdatePending=_coalescedUpdatePending - In the implementation block
@property (assign) unsigned persistentInterfaceIndex;                                                                  //@synthesize persistentInterfaceIndex=_persistentInterfaceIndex - In the implementation block
@property (assign) BOOL hasCellularAgents;                                                                             //@synthesize hasCellularAgents=_hasCellularAgents - In the implementation block
@property (retain) NSObject * changeHandlersLock;                                                                      //@synthesize changeHandlersLock=_changeHandlersLock - In the implementation block
@property (retain) NSObject * interfacesLock;                                                                          //@synthesize interfacesLock=_interfacesLock - In the implementation block
@property (assign) BOOL dumpingState;                                                                                  //@synthesize dumpingState=_dumpingState - In the implementation block
+(id)sharedInterfaceManager;
+(BOOL)interface:(id)arg1 matchesInterfaceType:(long long)arg2 required:(BOOL)arg3 ;
+(BOOL)interface:(id)arg1 matchesParameters:(id)arg2 ;
-(void)registerChangeHandler:(id)arg1 ;
-(void)unregisterChangeHandler:(id)arg1 ;
-(id)deriveParameters:(id)arg1 ;
-(BOOL)isRadioActive;
-(NSMutableArray *)changeHandlers;
-(void)setChangeHandlers:(NSMutableArray *)arg1 ;
-(void)notifyNetAgentsChanged;
-(NWInterface *)primaryInterface;
-(void)setPersistentInterface:(unsigned)arg1 ;
-(long long)persistentInterfaceGuidanceState;
-(unsigned)persistentInterfaceIndex;
-(id)getNetworkInterfaceFromIndex:(unsigned long long)arg1 ;
-(NSObject *)interfacesLock;
-(id)persistentInterfaceDescription;
-(id)getNetworkInterfaceFromName:(id)arg1 ;
-(void)setPersistentInterfaceGuidanceState:(long long)arg1 ;
-(void)setPersistentInterfaceIndex:(unsigned)arg1 ;
-(void)coalescedUpdateInterfaces;
-(void)addDNSToInterface:(id)arg1 ;
-(id)createOrderedInterfaceListFromNWIState:(nwi_stateRef)arg1 interfaces:(id)arg2 ;
-(void)checkInterfaceSettings:(id)arg1 ;
-(void)updateUnscopedDNSAndSetChanges:(id)arg1 ;
-(void)updateNAT64InterfaceState;
-(NSObject *)changeHandlersLock;
-(id)findRequiredInterfaceForParameters:(id)arg1 ;
-(void)updateInterfaces;
-(void)notifyNetworkChangeWithCoalescing:(BOOL)arg1 ;
-(void)notifyDNSChange;
-(BOOL)dumpingState;
-(void)setDumpingState:(BOOL)arg1 ;
-(void)setUnscopedDNSResolvers:(NSMutableArray *)arg1 ;
-(void)setChangeHandlersLock:(NSObject *)arg1 ;
-(void)setInterfacesLock:(NSObject *)arg1 ;
-(BOOL)setupNetworkInformationNotification;
-(BOOL)setupDNSInformationNotification;
-(BOOL)setupNetworkConfigNotification;
-(void)setDNSServersInPath:(id)arg1 ;
-(id)getNetworkInterfaceCFromIndex:(unsigned)arg1 ;
-(id)getNetworkInterfaceCFromName:(const char*)arg1 ;
-(void)overridePersistentInterface;
-(BOOL)isAnyInterfaceEligibleForCrazyIvan46;
-(void)setPrimaryInterfaceName:(NSString *)arg1 ;
-(NSString *)fallbackInterfaceName;
-(void)setFallbackInterfaceName:(NSString *)arg1 ;
-(NSMutableArray *)unscopedDNSResolvers;
-(int)nwiToken;
-(void)setNwiToken:(int)arg1 ;
-(int)dnsToken;
-(void)setDnsToken:(int)arg1 ;
-(int)configToken;
-(void)setConfigToken:(int)arg1 ;
-(int)ioctl_socket;
-(void)setIoctl_socket:(int)arg1 ;
-(ifaddrs*)interfaceAddrs;
-(void)setInterfaceAddrs:(ifaddrs*)arg1 ;
-(SCD_Struct_NE5*)dnsConfig;
-(void)setDnsConfig:(SCD_Struct_NE5*)arg1 ;
-(unsigned)coalescedUpdatePending;
-(void)setCoalescedUpdatePending:(unsigned)arg1 ;
-(BOOL)hasCellularAgents;
-(void)setHasCellularAgents:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)primaryInterfaceName;
-(id)privateDescription;
-(NWInterface *)fallbackInterface;
-(void)setInterfaces:(NSMutableArray *)arg1 ;
-(NSMutableArray *)interfaces;
@end

