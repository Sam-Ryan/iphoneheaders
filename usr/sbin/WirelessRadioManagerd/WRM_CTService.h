/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WirelessRadioManagerd/WirelessRadioManagerd-Structs.h>
@class NSObject;

@interface WRM_CTService : NSObject {

	CTServerConnectionRef mCoreTelephonyConnection;
	NSObject*<OS_dispatch_queue> mQueue;
	long long mServingCellId;
	BOOL mCellularActive;
	BOOL mVoLTESupported;
	BOOL mDataAttached;
	BOOL mRegistered;
	BOOL mRoaming;
	BOOL mQMIClientActive;
	BOOL mSrvccHandoverStarted;
	BOOL mValidRssiMeasurement;
	BOOL mValidRsrpMeasurement;
	BOOL mValidRsrqMeasurement;
	BOOL mValidSnrMeasurement;
	BOOL mValidRscpMeasurement;
	BOOL mValidEcioMeasurement;
	BOOL mValidLqm;
	BOOL mValidLTEVoIPLqm;
	BOOL mValidFilteredMeasurement;
	BOOL mRegisterOverCellularRadio;
	BOOL mDataEnabled;
	long long mRawFilteredMeasurements;
	long long mCurrentSignalBars;
	double mRssi;
	double mRsrp;
	double mSnr;
	double mRsrq;
	int mLqm;
	int mLTEVoiceLQM;
	int mReasongCode;
	double mRssiDelta;
	double mRsrpDelta;
	double mSnrDelta;
	double mRsrqDelta;
	double mRscp;
	double mEcio;
	double mRscpDelta;
	double mEcioDelta;
	int m_servCellRadioTechnologyType;
	int m_callStatus;
	BOOL m_CallInConference;
	BOOL m_CallOnHold;

}
-(int)getServingCellType;
-(long long)getCurrentSignalBars;
-(BOOL)isVoLTESupported;
-(BOOL)isVoiceLQMValid;
-(int)getLteVoiceLQM;
-(BOOL)isSrvccHandoverInProgress;
-(int)getCallState;
-(void)setQMIClientStatus:(BOOL)arg1 ;
-(void)setServingCellRSSI:(double)arg1 ;
-(void)setServingCellRSRP:(double)arg1 ;
-(void)setServingCellRSRQ:(double)arg1 ;
-(void)setServingCellSNR:(double)arg1 ;
-(double)getServingCellRSSI;
-(double)getServingCellSNR;
-(double)getServingCellRSRQ;
-(double)getServingCellRSRP;
-(void)setServingCellECIO:(double)arg1 ;
-(void)setServingCellRSCP:(double)arg1 ;
-(double)getServingCellECIO;
-(double)getServingCellRSCP;
-(BOOL)qmiClientRunning;
-(void)setSrvccHandoverState:(BOOL)arg1 ;
-(void)setCallInConference:(BOOL)arg1 ;
-(void)setCallOnHold:(BOOL)arg1 ;
-(BOOL)isCallOnHold;
-(BOOL)isCallInConference;
-(void)configureCTNotificationCallBacks;
-(double)getServingCellFilteredMeasurements;
-(BOOL)dataAttachedWithCellularNetwork;
-(BOOL)registeredWithCellularNetwork;
-(void)setLteVoiceLQM:(int)arg1 ;
-(void)setVoiceLQMReasonCode:(int)arg1 ;
-(void)updateVoLTEEnableStatus:(BOOL)arg1 ;
-(BOOL)cellularLinkActive;
-(long long)getCellularLQM;
-(double)getServingCellRSSIDelta;
-(double)getServingCellRSRPDelta;
-(double)getServingCellRSRQDelta;
-(double)getServingCellSNRDelta;
-(double)getServingCellRSCPDelta;
-(double)getServingCellECIODelta;
-(CTServerConnectionRef)getCTConnectionReference;
-(long long)getServingCellID;
-(void)setCellularLQM:(int)arg1 ;
-(void)resetLteVoiceLQM;
-(void)updateDataEnableStatus:(BOOL)arg1 ;
-(void)updatePSAttachStatus:(BOOL)arg1 ;
-(void)updateRegistrationStatus:(BOOL)arg1 :(BOOL)arg2 ;
-(BOOL)deviceInRoaming;
-(void)setServingCellType:(int)arg1 ;
-(void)setServingCellFilteredMeasurements:(long long)arg1 ;
-(void)setCurrentSignalBars:(long long)arg1 ;
-(void)setCallState:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)cellularDataEnabled;
@end

