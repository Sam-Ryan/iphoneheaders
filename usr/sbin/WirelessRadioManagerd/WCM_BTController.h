/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessRadioManagerd/WCM_RadioController.h>

@protocol OS_xpc_object;
@class NSMutableArray, NSObject;

@interface WCM_BTController : WCM_RadioController {

	unsigned char mConnectionsCount;
	NSMutableArray* mBTConnection;
	NSObject*<OS_xpc_object> mAudioConfig;
	unsigned char mScanState;
	int mBTWake;
	unsigned char currentRole;
	unsigned char requestedRole;
	unsigned char currentAFHMap[10];
	unsigned char currentMWSEnable;
	NSObject*<OS_xpc_object> btMWSFrameConfig;
	BOOL _btWCI2State;
	BOOL _btPowerState;
	BOOL _antennaUpdates;
	BOOL _rssiOffsetConfigured;
	int _currentAntennaConfig;
	int _defaultAntenna;
	double _btMWSUlCenterFreq;
	double _btMWSDlCenterFreq;
	double _btMWSUlBandwidth;
	double _btMWSDlBandwidth;
	/*^block*/id _apiReply;
	/*^block*/id _apiAntennaUpdateReply;

}

@property (assign) BOOL btWCI2State;                       //@synthesize btWCI2State=_btWCI2State - In the implementation block
@property (assign) BOOL btPowerState;                      //@synthesize btPowerState=_btPowerState - In the implementation block
@property (assign) int currentAntennaConfig;               //@synthesize currentAntennaConfig=_currentAntennaConfig - In the implementation block
@property (assign) int defaultAntenna;                     //@synthesize defaultAntenna=_defaultAntenna - In the implementation block
@property (assign) double btMWSUlCenterFreq;               //@synthesize btMWSUlCenterFreq=_btMWSUlCenterFreq - In the implementation block
@property (assign) double btMWSDlCenterFreq;               //@synthesize btMWSDlCenterFreq=_btMWSDlCenterFreq - In the implementation block
@property (assign) double btMWSUlBandwidth;                //@synthesize btMWSUlBandwidth=_btMWSUlBandwidth - In the implementation block
@property (assign) double btMWSDlBandwidth;                //@synthesize btMWSDlBandwidth=_btMWSDlBandwidth - In the implementation block
@property (assign) BOOL antennaUpdates;                    //@synthesize antennaUpdates=_antennaUpdates - In the implementation block
@property (assign) BOOL rssiOffsetConfigured;              //@synthesize rssiOffsetConfigured=_rssiOffsetConfigured - In the implementation block
@property (copy) id apiReply;                              //@synthesize apiReply=_apiReply - In the implementation block
@property (copy) id apiAntennaUpdateReply;                 //@synthesize apiAntennaUpdateReply=_apiAntennaUpdateReply - In the implementation block
-(void)sendMessage:(unsigned long long)arg1 withArgs:(id)arg2 ;
-(int)getBTState;
-(void)initWithConnection:(id)arg1 processId:(long long)arg2 ;
-(void)printAFHMap:(char*)arg1 ;
-(void)setBTChannelMap:(char*)arg1 ;
-(BOOL)isBTRoleSwitchRequired:(unsigned char)arg1 ;
-(void)requestRoleSwitch:(unsigned char)arg1 ;
-(BOOL)btPowerState;
-(void)handleConnectionConfig:(id)arg1 ;
-(void)handleAudioConfig:(id)arg1 ;
-(void)handleScanStart:(id)arg1 ;
-(void)handleScanStop:(id)arg1 ;
-(void)handleLinkQaulity:(id)arg1 ;
-(void)handleLTELinkQuality:(id)arg1 ;
-(void)handleLocalDeviceState:(id)arg1 ;
-(void)handelAFHMap:(id)arg1 ;
-(void)handleRawRSSI:(id)arg1 ;
-(void)handleAntennaPreferenceBResponse:(id)arg1 ;
-(void)handleAntennaSwitchNotification:(id)arg1 ;
-(void)addBTConnection:(id)arg1 ;
-(void)removeBTConnection:(id)arg1 ;
-(void)setBtPowerState:(BOOL)arg1 ;
-(void)handleBTPowerOff;
-(void)setDefaultAntenna:(int)arg1 ;
-(void)setCurrentAntennaConfig:(int)arg1 ;
-(void)setAntennaUpdates:(BOOL)arg1 ;
-(id)apiReply;
-(void)setApiReply:(id)arg1 ;
-(id)apiAntennaUpdateReply;
-(BOOL)btWCI2State;
-(void)setBtWCI2State:(BOOL)arg1 ;
-(void)setBtMWSDlBandwidth:(double)arg1 ;
-(void)setBtMWSUlBandwidth:(double)arg1 ;
-(void)setBtMWSUlCenterFreq:(double)arg1 ;
-(double)btMWSUlCenterFreq;
-(double)btMWSUlBandwidth;
-(double)btMWSDlCenterFreq;
-(double)btMWSDlBandwidth;
-(void)setBtMWSDlCenterFreq:(double)arg1 ;
-(id)createChannelParameters:(id)arg1 ;
-(id)createBTHCIExternalFrameConfigParams:(id)arg1 ;
-(int)getBTRole;
-(void)getCurrentBTAntennaSetting;
-(void)setApiAntennaUpdateReply:(id)arg1 ;
-(void)configureBTAntennaUpdates:(BOOL)arg1 ;
-(int)currentAntennaConfig;
-(int)defaultAntenna;
-(BOOL)rssiOffsetConfigured;
-(void)setRssiOffsetConfigured:(BOOL)arg1 ;
-(BOOL)antennaUpdates;
-(void)printBTConnInfo;
-(void)updatePreferredAFHMap:(id)arg1 ;
-(void)updatePreferredRole:(unsigned char)arg1 ;
-(unsigned char)getAudioConnectionType;
-(unsigned long long)getBTConnectionCount;
-(void)configureWCI2:(BOOL)arg1 ;
-(void)setLocalDeviceState:(BOOL)arg1 ;
-(void)updateMWSChannelParameters:(id)arg1 ;
-(void)configureWCI2Nudging:(id)arg1 ;
-(void)configureMWSSignaling;
-(void)keepBTAwake:(BOOL)arg1 ;
-(void)getCurrentBTAntennaSettingWithReply:(/*^block*/id)arg1 ;
-(void)configureBTAntennaUpdates:(BOOL)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setBTAntennaSelectionPolicy:(int)arg1 param1:(int)arg2 param2:(int)arg3 ;
-(void)setDefaultBTAntenna:(int)arg1 ;
-(void)setAntennaRSSIOffset;
-(void)setMWSScanFrequencyTable:(id)arg1 ;
-(id)getBTConnectionWithID:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

