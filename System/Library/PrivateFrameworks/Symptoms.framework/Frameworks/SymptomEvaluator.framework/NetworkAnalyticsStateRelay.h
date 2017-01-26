/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NetworkAnalyticsStateRelay : NSObject {

	BOOL _active;
	BOOL _primary;
	BOOL _knownGood;
	BOOL _rxSignalThresholded;
	BOOL _txThresholded;
	BOOL _arpOut;
	BOOL _dnsOut;
	BOOL _tcpExtraStatsPositive;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	unsigned char _radioTechnology;
	int _advisory;
	int _lastReportedRxSignalStrength;
	NSString* _interfaceName;
	long long _linkQuality;
	long long _interface;
	unsigned long long _cellSPIType;
	unsigned long long _lastReportedL2TxFrames;
	unsigned long long _lastReportedL2TxRetry;
	unsigned long long _lastReportedL2TxFail;

}

@property (readonly) long long interface;                                  //@synthesize interface=_interface - In the implementation block
@property (retain) NSString * interfaceName;                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (assign) BOOL primary;                                           //@synthesize primary=_primary - In the implementation block
@property (assign) BOOL knownGood;                                         //@synthesize knownGood=_knownGood - In the implementation block
@property (assign) BOOL rxSignalThresholded;                               //@synthesize rxSignalThresholded=_rxSignalThresholded - In the implementation block
@property (assign) BOOL txThresholded;                                     //@synthesize txThresholded=_txThresholded - In the implementation block
@property (assign) BOOL arpOut;                                            //@synthesize arpOut=_arpOut - In the implementation block
@property (assign) BOOL dnsOut;                                            //@synthesize dnsOut=_dnsOut - In the implementation block
@property (assign) BOOL tcpExtraStatsPositive;                             //@synthesize tcpExtraStatsPositive=_tcpExtraStatsPositive - In the implementation block
@property (assign) long long linkQuality;                                  //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign) int advisory;                                           //@synthesize advisory=_advisory - In the implementation block
@property (assign) BOOL supportsIPv4;                                      //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign) BOOL supportsIPv6;                                      //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (assign) unsigned char radioTechnology;                          //@synthesize radioTechnology=_radioTechnology - In the implementation block
@property (assign) unsigned long long cellSPIType;                         //@synthesize cellSPIType=_cellSPIType - In the implementation block
@property (assign) int lastReportedRxSignalStrength;                       //@synthesize lastReportedRxSignalStrength=_lastReportedRxSignalStrength - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFrames;              //@synthesize lastReportedL2TxFrames=_lastReportedL2TxFrames - In the implementation block
@property (assign) unsigned long long lastReportedL2TxRetry;               //@synthesize lastReportedL2TxRetry=_lastReportedL2TxRetry - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFail;                //@synthesize lastReportedL2TxFail=_lastReportedL2TxFail - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)description;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)interface;
-(void)setLinkQuality:(long long)arg1 ;
-(long long)linkQuality;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setRxSignalThresholded:(BOOL)arg1 ;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(void)setSupportsIPv6:(BOOL)arg1 ;
-(void)setLastReportedL2TxFrames:(unsigned long long)arg1 ;
-(void)setLastReportedL2TxFail:(unsigned long long)arg1 ;
-(BOOL)rxSignalThresholded;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(unsigned long long)lastReportedL2TxFrames;
-(unsigned long long)lastReportedL2TxFail;
-(BOOL)primary;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setPrimary:(BOOL)arg1 ;
-(int)advisory;
-(unsigned long long)cellSPIType;
-(void)setTcpExtraStatsPositive:(BOOL)arg1 ;
-(BOOL)knownGood;
-(BOOL)txThresholded;
-(BOOL)arpOut;
-(BOOL)dnsOut;
-(BOOL)tcpExtraStatsPositive;
-(void)setKnownGood:(BOOL)arg1 ;
-(void)setTxThresholded:(BOOL)arg1 ;
-(void)setArpOut:(BOOL)arg1 ;
-(void)setDnsOut:(BOOL)arg1 ;
-(void)setAdvisory:(int)arg1 ;
-(id)initForInternalType:(int)arg1 ;
-(unsigned char)radioTechnology;
-(void)setRadioTechnology:(unsigned char)arg1 ;
-(void)setCellSPIType:(unsigned long long)arg1 ;
-(int)lastReportedRxSignalStrength;
-(void)setLastReportedRxSignalStrength:(int)arg1 ;
-(unsigned long long)lastReportedL2TxRetry;
-(void)setLastReportedL2TxRetry:(unsigned long long)arg1 ;
@end

