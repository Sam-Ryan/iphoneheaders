/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessRadioManagerd/WCM_AppController.h>

@interface WRM_WiFiCallingController : WCM_AppController {

	BOOL _rtpMetricsReportingStarted;
	unsigned long long _rxPktLoss;
	unsigned long long _rxSpeechPktLoss;
	unsigned long long _cumRxPktLoss;
	unsigned long long _avgRxPktLoss;
	double _movAvgRxPktLoss;
	unsigned long long _rxPktJitter;
	unsigned long long _cumRxPktJitter;
	unsigned long long _avgRxPktJitter;
	unsigned long long _txPktLoss;
	unsigned long long _txPktJitter;
	unsigned long long _rtt;
	unsigned long long _nominalJitterBufferDelay;
	unsigned long long _cumulativeNominalJitterBufferDelay;
	unsigned long long _averagedNominalJitterBufferDelay;
	unsigned long long _movAvgNominalJitterBufferDelay;
	unsigned long long _rxRtpMetricsSampleCount;
	unsigned long long _totalErasures;
	unsigned long long _totalPlayBacks;
	unsigned long long _totalPlayBacksInSpeech;
	unsigned long long _erasuresInSpeech;
	unsigned long long _erasuresInSilence;
	unsigned long long _totalPacketsReceived;
	unsigned long long _speechPacketsReceived;
	unsigned long long _sidPacketsReceived;
	unsigned long long _silencePlayed;
	unsigned long long _periodicRtt;
	unsigned long long _frameCountSinceRttReported;
	unsigned long long _txPacketsCount;
	unsigned long long _txPacketLoss;
	unsigned long long _frameCountCountSinceTxPacketLossReported;
	unsigned long long _rxJitter;
	unsigned long long _txJitter;
	unsigned long long _frameCountSinceTxJitterUpdated;
	unsigned long long _nominalJitterBufferQueueSize;
	unsigned long long _targetJitterBufferQueueSize;
	unsigned long long _timeStampRTPMetrics;
	unsigned long long _callIdPrimaryLatteCall;

}

@property (assign,nonatomic) unsigned long long rxPktLoss;                                             //@synthesize rxPktLoss=_rxPktLoss - In the implementation block
@property (assign,nonatomic) unsigned long long rxSpeechPktLoss;                                       //@synthesize rxSpeechPktLoss=_rxSpeechPktLoss - In the implementation block
@property (assign,nonatomic) unsigned long long cumRxPktLoss;                                          //@synthesize cumRxPktLoss=_cumRxPktLoss - In the implementation block
@property (assign,nonatomic) unsigned long long avgRxPktLoss;                                          //@synthesize avgRxPktLoss=_avgRxPktLoss - In the implementation block
@property (assign,nonatomic) double movAvgRxPktLoss;                                                   //@synthesize movAvgRxPktLoss=_movAvgRxPktLoss - In the implementation block
@property (assign,nonatomic) unsigned long long rxPktJitter;                                           //@synthesize rxPktJitter=_rxPktJitter - In the implementation block
@property (assign,nonatomic) unsigned long long cumRxPktJitter;                                        //@synthesize cumRxPktJitter=_cumRxPktJitter - In the implementation block
@property (assign,nonatomic) unsigned long long avgRxPktJitter;                                        //@synthesize avgRxPktJitter=_avgRxPktJitter - In the implementation block
@property (assign,nonatomic) unsigned long long txPktLoss;                                             //@synthesize txPktLoss=_txPktLoss - In the implementation block
@property (assign,nonatomic) unsigned long long txPktJitter;                                           //@synthesize txPktJitter=_txPktJitter - In the implementation block
@property (assign,nonatomic) unsigned long long rtt;                                                   //@synthesize rtt=_rtt - In the implementation block
@property (assign,nonatomic) unsigned long long nominalJitterBufferDelay;                              //@synthesize nominalJitterBufferDelay=_nominalJitterBufferDelay - In the implementation block
@property (assign,nonatomic) unsigned long long cumulativeNominalJitterBufferDelay;                    //@synthesize cumulativeNominalJitterBufferDelay=_cumulativeNominalJitterBufferDelay - In the implementation block
@property (assign,nonatomic) unsigned long long averagedNominalJitterBufferDelay;                      //@synthesize averagedNominalJitterBufferDelay=_averagedNominalJitterBufferDelay - In the implementation block
@property (assign,nonatomic) unsigned long long movAvgNominalJitterBufferDelay;                        //@synthesize movAvgNominalJitterBufferDelay=_movAvgNominalJitterBufferDelay - In the implementation block
@property (assign,nonatomic) unsigned long long rxRtpMetricsSampleCount;                               //@synthesize rxRtpMetricsSampleCount=_rxRtpMetricsSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalErasures;                                         //@synthesize totalErasures=_totalErasures - In the implementation block
@property (assign,nonatomic) unsigned long long totalPlayBacks;                                        //@synthesize totalPlayBacks=_totalPlayBacks - In the implementation block
@property (assign,nonatomic) unsigned long long totalPlayBacksInSpeech;                                //@synthesize totalPlayBacksInSpeech=_totalPlayBacksInSpeech - In the implementation block
@property (assign,nonatomic) unsigned long long erasuresInSpeech;                                      //@synthesize erasuresInSpeech=_erasuresInSpeech - In the implementation block
@property (assign,nonatomic) unsigned long long erasuresInSilence;                                     //@synthesize erasuresInSilence=_erasuresInSilence - In the implementation block
@property (assign,nonatomic) unsigned long long totalPacketsReceived;                                  //@synthesize totalPacketsReceived=_totalPacketsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long speechPacketsReceived;                                 //@synthesize speechPacketsReceived=_speechPacketsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long sidPacketsReceived;                                    //@synthesize sidPacketsReceived=_sidPacketsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long silencePlayed;                                         //@synthesize silencePlayed=_silencePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long periodicRtt;                                           //@synthesize periodicRtt=_periodicRtt - In the implementation block
@property (assign,nonatomic) unsigned long long frameCountSinceRttReported;                            //@synthesize frameCountSinceRttReported=_frameCountSinceRttReported - In the implementation block
@property (assign,nonatomic) unsigned long long txPacketsCount;                                        //@synthesize txPacketsCount=_txPacketsCount - In the implementation block
@property (assign,nonatomic) unsigned long long txPacketLoss;                                          //@synthesize txPacketLoss=_txPacketLoss - In the implementation block
@property (assign,nonatomic) unsigned long long frameCountCountSinceTxPacketLossReported;              //@synthesize frameCountCountSinceTxPacketLossReported=_frameCountCountSinceTxPacketLossReported - In the implementation block
@property (assign,nonatomic) unsigned long long rxJitter;                                              //@synthesize rxJitter=_rxJitter - In the implementation block
@property (assign,nonatomic) unsigned long long txJitter;                                              //@synthesize txJitter=_txJitter - In the implementation block
@property (assign,nonatomic) unsigned long long frameCountSinceTxJitterUpdated;                        //@synthesize frameCountSinceTxJitterUpdated=_frameCountSinceTxJitterUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long nominalJitterBufferQueueSize;                          //@synthesize nominalJitterBufferQueueSize=_nominalJitterBufferQueueSize - In the implementation block
@property (assign,nonatomic) unsigned long long targetJitterBufferQueueSize;                           //@synthesize targetJitterBufferQueueSize=_targetJitterBufferQueueSize - In the implementation block
@property (assign,nonatomic) unsigned long long timeStampRTPMetrics;                                   //@synthesize timeStampRTPMetrics=_timeStampRTPMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long callIdPrimaryLatteCall;                                //@synthesize callIdPrimaryLatteCall=_callIdPrimaryLatteCall - In the implementation block
@property (assign,nonatomic) BOOL rtpMetricsReportingStarted;                                          //@synthesize rtpMetricsReportingStarted=_rtpMetricsReportingStarted - In the implementation block
-(void)handleRTPMetrics:(id)arg1 ;
-(void)handlePeriodicRTPMetrics:(id)arg1 ;
-(void)setTotalErasures:(unsigned long long)arg1 ;
-(void)setTotalPlayBacks:(unsigned long long)arg1 ;
-(void)setTotalPlayBacksInSpeech:(unsigned long long)arg1 ;
-(void)setErasuresInSpeech:(unsigned long long)arg1 ;
-(void)setErasuresInSilence:(unsigned long long)arg1 ;
-(void)setTotalPacketsReceived:(unsigned long long)arg1 ;
-(void)setSpeechPacketsReceived:(unsigned long long)arg1 ;
-(void)setSidPacketsReceived:(unsigned long long)arg1 ;
-(void)setSilencePlayed:(unsigned long long)arg1 ;
-(void)setPeriodicRtt:(unsigned long long)arg1 ;
-(void)setFrameCountSinceRttReported:(unsigned long long)arg1 ;
-(void)setTxPacketsCount:(unsigned long long)arg1 ;
-(void)setTxPacketLoss:(unsigned long long)arg1 ;
-(void)setFrameCountCountSinceTxPacketLossReported:(unsigned long long)arg1 ;
-(void)setRxJitter:(unsigned long long)arg1 ;
-(void)setTxJitter:(unsigned long long)arg1 ;
-(void)setFrameCountSinceTxJitterUpdated:(unsigned long long)arg1 ;
-(void)setNominalJitterBufferQueueSize:(unsigned long long)arg1 ;
-(void)setTargetJitterBufferQueueSize:(unsigned long long)arg1 ;
-(void)setTimeStampRTPMetrics:(unsigned long long)arg1 ;
-(void)setRxPktLoss:(unsigned long long)arg1 ;
-(void)setRxSpeechPktLoss:(unsigned long long)arg1 ;
-(void)setRxPktJitter:(unsigned long long)arg1 ;
-(void)setTxPktLoss:(unsigned long long)arg1 ;
-(void)setTxPktJitter:(unsigned long long)arg1 ;
-(void)setCumRxPktLoss:(unsigned long long)arg1 ;
-(void)setAvgRxPktLoss:(unsigned long long)arg1 ;
-(void)setMovAvgRxPktLoss:(double)arg1 ;
-(void)setMovAvgNominalJitterBufferDelay:(unsigned long long)arg1 ;
-(void)setCumRxPktJitter:(unsigned long long)arg1 ;
-(void)setAvgRxPktJitter:(unsigned long long)arg1 ;
-(void)setCumulativeNominalJitterBufferDelay:(unsigned long long)arg1 ;
-(void)setAveragedNominalJitterBufferDelay:(unsigned long long)arg1 ;
-(void)setRxRtpMetricsSampleCount:(unsigned long long)arg1 ;
-(void)setCallIdPrimaryLatteCall:(unsigned long long)arg1 ;
-(void)setRtpMetricsReportingStarted:(BOOL)arg1 ;
-(void)resetPeriodicRTPStats;
-(void)resetRTPMetrics;
-(void)resetCumulativeRTPMetrics;
-(void)configureRTPMetricsReporting;
-(unsigned long long)rxPktLoss;
-(unsigned long long)rxSpeechPktLoss;
-(unsigned long long)cumRxPktLoss;
-(unsigned long long)avgRxPktLoss;
-(double)movAvgRxPktLoss;
-(unsigned long long)rxPktJitter;
-(unsigned long long)cumRxPktJitter;
-(unsigned long long)avgRxPktJitter;
-(unsigned long long)txPktLoss;
-(unsigned long long)txPktJitter;
-(unsigned long long)nominalJitterBufferDelay;
-(void)setNominalJitterBufferDelay:(unsigned long long)arg1 ;
-(unsigned long long)cumulativeNominalJitterBufferDelay;
-(unsigned long long)averagedNominalJitterBufferDelay;
-(unsigned long long)movAvgNominalJitterBufferDelay;
-(unsigned long long)rxRtpMetricsSampleCount;
-(unsigned long long)totalErasures;
-(unsigned long long)totalPlayBacks;
-(unsigned long long)totalPlayBacksInSpeech;
-(unsigned long long)erasuresInSpeech;
-(unsigned long long)erasuresInSilence;
-(unsigned long long)totalPacketsReceived;
-(unsigned long long)speechPacketsReceived;
-(unsigned long long)sidPacketsReceived;
-(unsigned long long)silencePlayed;
-(unsigned long long)periodicRtt;
-(unsigned long long)frameCountSinceRttReported;
-(unsigned long long)txPacketsCount;
-(unsigned long long)txPacketLoss;
-(unsigned long long)frameCountCountSinceTxPacketLossReported;
-(unsigned long long)rxJitter;
-(unsigned long long)txJitter;
-(unsigned long long)frameCountSinceTxJitterUpdated;
-(unsigned long long)nominalJitterBufferQueueSize;
-(unsigned long long)targetJitterBufferQueueSize;
-(unsigned long long)timeStampRTPMetrics;
-(unsigned long long)callIdPrimaryLatteCall;
-(BOOL)rtpMetricsReportingStarted;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setRtt:(unsigned long long)arg1 ;
-(unsigned long long)rtt;
@end

