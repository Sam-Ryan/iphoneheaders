/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying> {

	unsigned long long _appDataStallTimerMsecs;
	unsigned long long _appReportingDataStallCount;
	unsigned long long _bestRTTMsecs;
	unsigned long long _betterRouteEventCount;
	unsigned long long _bytesDuplicate;
	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _bytesOutOfOrder;
	unsigned long long _bytesRetransmitted;
	unsigned long long _connectionEstablishmentTimeMsecs;
	unsigned long long _connectionReuseCount;
	unsigned long long _currentRTTMsecs;
	unsigned long long _dNSResolvedTimeMsecs;
	unsigned long long _flowDurationMsecs;
	unsigned long long _iPAddressAttemptCount;
	unsigned long long _packetsDuplicate;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _packetsOutOfOrder;
	unsigned long long _packetsRetransmitted;
	unsigned long long _rTTvariance;
	unsigned long long _smoothedRTTMsecs;
	unsigned long long _synRetransmissionCount;
	unsigned long long _timeToConnectionEstablishmentMsecs;
	unsigned long long _timeToConnectionStartMsecs;
	unsigned long long _timeToDNSResolvedMsecs;
	unsigned long long _timeToDNSStartMsecs;
	unsigned long long _trafficClass;
	int _connectedInterfaceType;
	int _interfaceType;
	BOOL _cellularFallback;
	BOOL _cellularRRCConnected;
	BOOL _connected;
	BOOL _dNSAnswersCached;
	BOOL _kernelReportedStalls;
	BOOL _kernelReportingConnectionStalled;
	BOOL _kernelReportingReadStalled;
	BOOL _kernelReportingWriteStalled;
	BOOL _tcpFastOpen;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimeToDNSResolvedMsecs; 
@property (assign,nonatomic) unsigned long long timeToDNSResolvedMsecs;                          //@synthesize timeToDNSResolvedMsecs=_timeToDNSResolvedMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasDNSAnswersCached; 
@property (assign,nonatomic) BOOL dNSAnswersCached;                                              //@synthesize dNSAnswersCached=_dNSAnswersCached - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToConnectionEstablishmentMsecs; 
@property (assign,nonatomic) unsigned long long timeToConnectionEstablishmentMsecs;              //@synthesize timeToConnectionEstablishmentMsecs=_timeToConnectionEstablishmentMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasIPAddressAttemptCount; 
@property (assign,nonatomic) unsigned long long iPAddressAttemptCount;                           //@synthesize iPAddressAttemptCount=_iPAddressAttemptCount - In the implementation block
@property (assign,nonatomic) BOOL hasFlowDurationMsecs; 
@property (assign,nonatomic) unsigned long long flowDurationMsecs;                               //@synthesize flowDurationMsecs=_flowDurationMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedInterfaceType; 
@property (assign,nonatomic) int connectedInterfaceType;                                         //@synthesize connectedInterfaceType=_connectedInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportedStalls; 
@property (assign,nonatomic) BOOL kernelReportedStalls;                                          //@synthesize kernelReportedStalls=_kernelReportedStalls - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportingConnectionStalled; 
@property (assign,nonatomic) BOOL kernelReportingConnectionStalled;                              //@synthesize kernelReportingConnectionStalled=_kernelReportingConnectionStalled - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportingReadStalled; 
@property (assign,nonatomic) BOOL kernelReportingReadStalled;                                    //@synthesize kernelReportingReadStalled=_kernelReportingReadStalled - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportingWriteStalled; 
@property (assign,nonatomic) BOOL kernelReportingWriteStalled;                                   //@synthesize kernelReportingWriteStalled=_kernelReportingWriteStalled - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                                         //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                                        //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesDuplicate; 
@property (assign,nonatomic) unsigned long long bytesDuplicate;                                  //@synthesize bytesDuplicate=_bytesDuplicate - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutOfOrder; 
@property (assign,nonatomic) unsigned long long bytesOutOfOrder;                                 //@synthesize bytesOutOfOrder=_bytesOutOfOrder - In the implementation block
@property (assign,nonatomic) BOOL hasBytesRetransmitted; 
@property (assign,nonatomic) unsigned long long bytesRetransmitted;                              //@synthesize bytesRetransmitted=_bytesRetransmitted - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                                       //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                                      //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsDuplicate; 
@property (assign,nonatomic) unsigned long long packetsDuplicate;                                //@synthesize packetsDuplicate=_packetsDuplicate - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOutOfOrder; 
@property (assign,nonatomic) unsigned long long packetsOutOfOrder;                               //@synthesize packetsOutOfOrder=_packetsOutOfOrder - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsRetransmitted; 
@property (assign,nonatomic) unsigned long long packetsRetransmitted;                            //@synthesize packetsRetransmitted=_packetsRetransmitted - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRTTMsecs; 
@property (assign,nonatomic) unsigned long long currentRTTMsecs;                                 //@synthesize currentRTTMsecs=_currentRTTMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRTTMsecs; 
@property (assign,nonatomic) unsigned long long smoothedRTTMsecs;                                //@synthesize smoothedRTTMsecs=_smoothedRTTMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasBestRTTMsecs; 
@property (assign,nonatomic) unsigned long long bestRTTMsecs;                                    //@synthesize bestRTTMsecs=_bestRTTMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasRTTvariance; 
@property (assign,nonatomic) unsigned long long rTTvariance;                                     //@synthesize rTTvariance=_rTTvariance - In the implementation block
@property (assign,nonatomic) BOOL hasSynRetransmissionCount; 
@property (assign,nonatomic) unsigned long long synRetransmissionCount;                          //@synthesize synRetransmissionCount=_synRetransmissionCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionReuseCount; 
@property (assign,nonatomic) unsigned long long connectionReuseCount;                            //@synthesize connectionReuseCount=_connectionReuseCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppReportingDataStallCount; 
@property (assign,nonatomic) unsigned long long appReportingDataStallCount;                      //@synthesize appReportingDataStallCount=_appReportingDataStallCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppDataStallTimerMsecs; 
@property (assign,nonatomic) unsigned long long appDataStallTimerMsecs;                          //@synthesize appDataStallTimerMsecs=_appDataStallTimerMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficClass; 
@property (assign,nonatomic) unsigned long long trafficClass;                                    //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasTcpFastOpen; 
@property (assign,nonatomic) BOOL tcpFastOpen;                                                   //@synthesize tcpFastOpen=_tcpFastOpen - In the implementation block
@property (assign,nonatomic) BOOL hasCellularFallback; 
@property (assign,nonatomic) BOOL cellularFallback;                                              //@synthesize cellularFallback=_cellularFallback - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRRCConnected; 
@property (assign,nonatomic) BOOL cellularRRCConnected;                                          //@synthesize cellularRRCConnected=_cellularRRCConnected - In the implementation block
@property (assign,nonatomic) BOOL hasConnected; 
@property (assign,nonatomic) BOOL connected;                                                     //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                                                  //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToDNSStartMsecs; 
@property (assign,nonatomic) unsigned long long timeToDNSStartMsecs;                             //@synthesize timeToDNSStartMsecs=_timeToDNSStartMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasDNSResolvedTimeMsecs; 
@property (assign,nonatomic) unsigned long long dNSResolvedTimeMsecs;                            //@synthesize dNSResolvedTimeMsecs=_dNSResolvedTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToConnectionStartMsecs; 
@property (assign,nonatomic) unsigned long long timeToConnectionStartMsecs;                      //@synthesize timeToConnectionStartMsecs=_timeToConnectionStartMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionEstablishmentTimeMsecs; 
@property (assign,nonatomic) unsigned long long connectionEstablishmentTimeMsecs;                //@synthesize connectionEstablishmentTimeMsecs=_connectionEstablishmentTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasBetterRouteEventCount; 
@property (assign,nonatomic) unsigned long long betterRouteEventCount;                           //@synthesize betterRouteEventCount=_betterRouteEventCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesOut;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(void)setTimeToDNSResolvedMsecs:(unsigned long long)arg1 ;
-(void)setHasTimeToDNSResolvedMsecs:(BOOL)arg1 ;
-(BOOL)hasTimeToDNSResolvedMsecs;
-(void)setDNSAnswersCached:(BOOL)arg1 ;
-(void)setHasDNSAnswersCached:(BOOL)arg1 ;
-(BOOL)hasDNSAnswersCached;
-(void)setTimeToConnectionEstablishmentMsecs:(unsigned long long)arg1 ;
-(void)setHasTimeToConnectionEstablishmentMsecs:(BOOL)arg1 ;
-(BOOL)hasTimeToConnectionEstablishmentMsecs;
-(void)setIPAddressAttemptCount:(unsigned long long)arg1 ;
-(void)setHasIPAddressAttemptCount:(BOOL)arg1 ;
-(BOOL)hasIPAddressAttemptCount;
-(void)setFlowDurationMsecs:(unsigned long long)arg1 ;
-(void)setHasFlowDurationMsecs:(BOOL)arg1 ;
-(BOOL)hasFlowDurationMsecs;
-(int)connectedInterfaceType;
-(void)setConnectedInterfaceType:(int)arg1 ;
-(void)setHasConnectedInterfaceType:(BOOL)arg1 ;
-(BOOL)hasConnectedInterfaceType;
-(id)connectedInterfaceTypeAsString:(int)arg1 ;
-(int)StringAsConnectedInterfaceType:(id)arg1 ;
-(void)setKernelReportedStalls:(BOOL)arg1 ;
-(void)setHasKernelReportedStalls:(BOOL)arg1 ;
-(BOOL)hasKernelReportedStalls;
-(void)setKernelReportingConnectionStalled:(BOOL)arg1 ;
-(void)setHasKernelReportingConnectionStalled:(BOOL)arg1 ;
-(BOOL)hasKernelReportingConnectionStalled;
-(void)setKernelReportingReadStalled:(BOOL)arg1 ;
-(void)setHasKernelReportingReadStalled:(BOOL)arg1 ;
-(BOOL)hasKernelReportingReadStalled;
-(void)setKernelReportingWriteStalled:(BOOL)arg1 ;
-(void)setHasKernelReportingWriteStalled:(BOOL)arg1 ;
-(BOOL)hasKernelReportingWriteStalled;
-(void)setBytesDuplicate:(unsigned long long)arg1 ;
-(void)setHasBytesDuplicate:(BOOL)arg1 ;
-(BOOL)hasBytesDuplicate;
-(void)setBytesOutOfOrder:(unsigned long long)arg1 ;
-(void)setHasBytesOutOfOrder:(BOOL)arg1 ;
-(BOOL)hasBytesOutOfOrder;
-(void)setBytesRetransmitted:(unsigned long long)arg1 ;
-(void)setHasBytesRetransmitted:(BOOL)arg1 ;
-(BOOL)hasBytesRetransmitted;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(void)setPacketsDuplicate:(unsigned long long)arg1 ;
-(void)setHasPacketsDuplicate:(BOOL)arg1 ;
-(BOOL)hasPacketsDuplicate;
-(void)setPacketsOutOfOrder:(unsigned long long)arg1 ;
-(void)setHasPacketsOutOfOrder:(BOOL)arg1 ;
-(BOOL)hasPacketsOutOfOrder;
-(void)setPacketsRetransmitted:(unsigned long long)arg1 ;
-(void)setHasPacketsRetransmitted:(BOOL)arg1 ;
-(BOOL)hasPacketsRetransmitted;
-(void)setCurrentRTTMsecs:(unsigned long long)arg1 ;
-(void)setHasCurrentRTTMsecs:(BOOL)arg1 ;
-(BOOL)hasCurrentRTTMsecs;
-(void)setSmoothedRTTMsecs:(unsigned long long)arg1 ;
-(void)setHasSmoothedRTTMsecs:(BOOL)arg1 ;
-(BOOL)hasSmoothedRTTMsecs;
-(void)setBestRTTMsecs:(unsigned long long)arg1 ;
-(void)setHasBestRTTMsecs:(BOOL)arg1 ;
-(BOOL)hasBestRTTMsecs;
-(void)setRTTvariance:(unsigned long long)arg1 ;
-(void)setHasRTTvariance:(BOOL)arg1 ;
-(BOOL)hasRTTvariance;
-(void)setSynRetransmissionCount:(unsigned long long)arg1 ;
-(void)setHasSynRetransmissionCount:(BOOL)arg1 ;
-(BOOL)hasSynRetransmissionCount;
-(void)setConnectionReuseCount:(unsigned long long)arg1 ;
-(void)setHasConnectionReuseCount:(BOOL)arg1 ;
-(BOOL)hasConnectionReuseCount;
-(void)setAppReportingDataStallCount:(unsigned long long)arg1 ;
-(void)setHasAppReportingDataStallCount:(BOOL)arg1 ;
-(BOOL)hasAppReportingDataStallCount;
-(void)setAppDataStallTimerMsecs:(unsigned long long)arg1 ;
-(void)setHasAppDataStallTimerMsecs:(BOOL)arg1 ;
-(BOOL)hasAppDataStallTimerMsecs;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)setHasTrafficClass:(BOOL)arg1 ;
-(BOOL)hasTrafficClass;
-(void)setTcpFastOpen:(BOOL)arg1 ;
-(void)setHasTcpFastOpen:(BOOL)arg1 ;
-(BOOL)hasTcpFastOpen;
-(void)setCellularFallback:(BOOL)arg1 ;
-(void)setHasCellularFallback:(BOOL)arg1 ;
-(BOOL)hasCellularFallback;
-(void)setCellularRRCConnected:(BOOL)arg1 ;
-(void)setHasCellularRRCConnected:(BOOL)arg1 ;
-(BOOL)hasCellularRRCConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)hasConnected;
-(int)interfaceType;
-(void)setInterfaceType:(int)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(id)interfaceTypeAsString:(int)arg1 ;
-(int)StringAsInterfaceType:(id)arg1 ;
-(void)setTimeToDNSStartMsecs:(unsigned long long)arg1 ;
-(void)setHasTimeToDNSStartMsecs:(BOOL)arg1 ;
-(BOOL)hasTimeToDNSStartMsecs;
-(void)setDNSResolvedTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasDNSResolvedTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasDNSResolvedTimeMsecs;
-(void)setTimeToConnectionStartMsecs:(unsigned long long)arg1 ;
-(void)setHasTimeToConnectionStartMsecs:(BOOL)arg1 ;
-(BOOL)hasTimeToConnectionStartMsecs;
-(void)setConnectionEstablishmentTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasConnectionEstablishmentTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasConnectionEstablishmentTimeMsecs;
-(void)setBetterRouteEventCount:(unsigned long long)arg1 ;
-(void)setHasBetterRouteEventCount:(BOOL)arg1 ;
-(BOOL)hasBetterRouteEventCount;
-(unsigned long long)timeToDNSResolvedMsecs;
-(BOOL)dNSAnswersCached;
-(unsigned long long)timeToConnectionEstablishmentMsecs;
-(unsigned long long)iPAddressAttemptCount;
-(unsigned long long)flowDurationMsecs;
-(BOOL)kernelReportedStalls;
-(BOOL)kernelReportingConnectionStalled;
-(BOOL)kernelReportingReadStalled;
-(BOOL)kernelReportingWriteStalled;
-(unsigned long long)bytesDuplicate;
-(unsigned long long)bytesOutOfOrder;
-(unsigned long long)bytesRetransmitted;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(unsigned long long)packetsDuplicate;
-(unsigned long long)packetsOutOfOrder;
-(unsigned long long)packetsRetransmitted;
-(unsigned long long)currentRTTMsecs;
-(unsigned long long)smoothedRTTMsecs;
-(unsigned long long)bestRTTMsecs;
-(unsigned long long)rTTvariance;
-(unsigned long long)synRetransmissionCount;
-(unsigned long long)connectionReuseCount;
-(unsigned long long)appReportingDataStallCount;
-(unsigned long long)appDataStallTimerMsecs;
-(unsigned long long)trafficClass;
-(BOOL)tcpFastOpen;
-(BOOL)cellularFallback;
-(BOOL)cellularRRCConnected;
-(BOOL)connected;
-(unsigned long long)timeToDNSStartMsecs;
-(unsigned long long)dNSResolvedTimeMsecs;
-(unsigned long long)timeToConnectionStartMsecs;
-(unsigned long long)connectionEstablishmentTimeMsecs;
-(unsigned long long)betterRouteEventCount;
@end

