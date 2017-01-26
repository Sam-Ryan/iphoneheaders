/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WirelessRadioManagerd/WirelessRadioManagerd-Structs.h>
@class NSObject, WCM_WiFiController, WRM_MetricsService, NSDate, NSMutableArray;

@interface WRM_BWEvalManager : NSObject {

	NSObject*<OS_dispatch_queue> mQueue;
	WCM_WiFiController* mWiFi;
	unsigned long long mAchievedMaxWiFiBW;
	unsigned long long mAchievedMovAvgWiFiBW;
	unsigned long long mEvalMovAvgWiFiBW;
	unsigned long long mPrevEstMaxWiFiBW;
	BOOL mStreamingSessionActive;
	unsigned long long mAchievedPrefWiFiBW;
	float mScallingFactor;
	float mDeviation;
	float mMovingAvgDeviation;
	WRM_MetricsService* mMetrics;
	WRMMetricsiRATStreaming* mWrmiRATStreaming;
	NSDate* mCMStatusUpdateEvaluationTimer;
	double mTimeSinceCMStatusEvaluationStarted;
	NSMutableArray* miRATClientContexts;

}
+(id)WRM_BWEvalManagerSingleton;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)evaluateWiFiLink;
-(void)handleLinkPrefSubscribe:(id)arg1 ;
-(void)handleSubscribeStatusUpdate:(id)arg1 :(BOOL)arg2 ;
-(void)handleWiFiStateChaneEvents:(id)arg1 ;
-(void)handleInternalMessage:(id)arg1 ;
-(int)evaluateLink:(unsigned long long)arg1 :(int)arg2 :(int)arg3 ;
-(void)evaluateWiFiBandwidth:(SCD_Struct_WR1*)arg1 ;
-(void)evaluateCellularBandwidth:(SCD_Struct_WR1*)arg1 ;
-(void)calcAdjustedBandwith:(SCD_Struct_WR1*)arg1 :(float)arg2 ;
-(void)existingContexts;
-(void)removeiRatClient:(id)arg1 ;
-(void)handleIMGVideoClientRegisterd;
-(void)handleWiFiRegistered;
-(void)handleSessionNotification:(id)arg1 ;
-(void)addiRatClient:(id)arg1 ;
-(void)deleteiRATClient:(int)arg1 ;
-(void)handleControllerAvailability:(unsigned long long)arg1 ;
-(id)getiRATClientFromList:(int)arg1 ;
-(BOOL)doesIRATClientSubscriptionContextExist;
-(BOOL)toggleWiFiLQMIfNeeded;
-(void)feedAWDStreamingStats:(SCD_Struct_WR1*)arg1 ;
-(BOOL)enableiRATManager;
-(id)getQueue;
-(BOOL)needWiFiLQM;
-(void)updateControllerSession:(id)arg1 ofId:(unsigned long long)arg2 ;
-(void)updateControllerState:(id)arg1 ;
-(void)sendMessage:(unsigned long long)arg1 withMsg:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
