/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSString, NSArray, NSNumber, NSMutableArray, NSMutableDictionary;

@interface PLBBMavHwRfLTELogMsg : PLBBMsgRoot {

	unsigned char _inited;
	NSString* _error;
	NSArray* _dlC0TBSzCnt;
	NSArray* _dlC1TBSzCnt;
	NSNumber* _logDuration;
	NSNumber* _dupMode;
	NSArray* _caFreqInfo;
	NSArray* _txPwrCnt;
	NSArray* _caSCCCnt;
	NSArray* _actRxTxCnt;
	NSArray* _sleepStateCnt;
	NSArray* _caPriCCCnt;
	NSArray* _caSecCCCnt;
	NSArray* _caPriSecCCCnt;
	NSArray* _actRxTxPriCCCnt;
	NSArray* _actRxTxSecCCCnt;
	NSArray* _actRxTxPriSecCCCnt;
	NSArray* _sleepStateIdleCnt;
	NSArray* _sleepStateConnCnt;
	NSArray* _rsrpIdleCnt;
	NSArray* _rsrpConnCnt;
	NSArray* _sinrIdleCnt;
	NSArray* _sinrConnCnt;
	NSArray* _arxStateCnt;
	NSArray* _nlicStateCnt;
	NSArray* _bpeStats;
	NSString* _groupEntryKey;
	NSString* _groupID;
	NSMutableArray* _groupArrEntries;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSString * error;                                        //@synthesize error=_error - In the implementation block
@property (retain) NSArray * dlC0TBSzCnt;                                   //@synthesize dlC0TBSzCnt=_dlC0TBSzCnt - In the implementation block
@property (retain) NSArray * dlC1TBSzCnt;                                   //@synthesize dlC1TBSzCnt=_dlC1TBSzCnt - In the implementation block
@property (retain) NSNumber * logDuration;                                  //@synthesize logDuration=_logDuration - In the implementation block
@property (retain) NSNumber * dupMode;                                      //@synthesize dupMode=_dupMode - In the implementation block
@property (retain) NSArray * caFreqInfo;                                    //@synthesize caFreqInfo=_caFreqInfo - In the implementation block
@property (retain) NSArray * txPwrCnt;                                      //@synthesize txPwrCnt=_txPwrCnt - In the implementation block
@property (retain) NSArray * caSCCCnt;                                      //@synthesize caSCCCnt=_caSCCCnt - In the implementation block
@property (retain) NSArray * actRxTxCnt;                                    //@synthesize actRxTxCnt=_actRxTxCnt - In the implementation block
@property (retain) NSArray * sleepStateCnt;                                 //@synthesize sleepStateCnt=_sleepStateCnt - In the implementation block
@property (retain) NSArray * caPriCCCnt;                                    //@synthesize caPriCCCnt=_caPriCCCnt - In the implementation block
@property (retain) NSArray * caSecCCCnt;                                    //@synthesize caSecCCCnt=_caSecCCCnt - In the implementation block
@property (retain) NSArray * caPriSecCCCnt;                                 //@synthesize caPriSecCCCnt=_caPriSecCCCnt - In the implementation block
@property (retain) NSArray * actRxTxPriCCCnt;                               //@synthesize actRxTxPriCCCnt=_actRxTxPriCCCnt - In the implementation block
@property (retain) NSArray * actRxTxSecCCCnt;                               //@synthesize actRxTxSecCCCnt=_actRxTxSecCCCnt - In the implementation block
@property (retain) NSArray * actRxTxPriSecCCCnt;                            //@synthesize actRxTxPriSecCCCnt=_actRxTxPriSecCCCnt - In the implementation block
@property (retain) NSArray * sleepStateIdleCnt;                             //@synthesize sleepStateIdleCnt=_sleepStateIdleCnt - In the implementation block
@property (retain) NSArray * sleepStateConnCnt;                             //@synthesize sleepStateConnCnt=_sleepStateConnCnt - In the implementation block
@property (retain) NSArray * rsrpIdleCnt;                                   //@synthesize rsrpIdleCnt=_rsrpIdleCnt - In the implementation block
@property (retain) NSArray * rsrpConnCnt;                                   //@synthesize rsrpConnCnt=_rsrpConnCnt - In the implementation block
@property (retain) NSArray * sinrIdleCnt;                                   //@synthesize sinrIdleCnt=_sinrIdleCnt - In the implementation block
@property (retain) NSArray * sinrConnCnt;                                   //@synthesize sinrConnCnt=_sinrConnCnt - In the implementation block
@property (retain) NSArray * arxStateCnt;                                   //@synthesize arxStateCnt=_arxStateCnt - In the implementation block
@property (retain) NSArray * nlicStateCnt;                                  //@synthesize nlicStateCnt=_nlicStateCnt - In the implementation block
@property (retain) NSArray * bpeStats;                                      //@synthesize bpeStats=_bpeStats - In the implementation block
@property (retain) NSString * groupEntryKey;                                //@synthesize groupEntryKey=_groupEntryKey - In the implementation block
@property (retain) NSString * groupID;                                      //@synthesize groupID=_groupID - In the implementation block
@property (retain) NSMutableArray * groupArrEntries;                        //@synthesize groupArrEntries=_groupArrEntries - In the implementation block
@property (assign,nonatomic) unsigned char inited;                          //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)entryEventBackwardDefinitionBBMav13HwRfLTE;
+(id)entryEventBackwardDefinitionBBMav10HwRfLTE;
-(id)init;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setLogDuration:(NSNumber *)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(NSNumber *)logDuration;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)addPairWithKey:(id)arg1 andWithVal:(id)arg2 ;
-(void)populateEntry:(id)arg1 ;
-(unsigned char)inited;
-(void)setInited:(unsigned char)arg1 ;
-(void)setDupMode:(NSNumber *)arg1 ;
-(void)setCaFreqInfo:(NSArray *)arg1 ;
-(void)setDlC0TBSzCnt:(NSArray *)arg1 ;
-(void)setDlC1TBSzCnt:(NSArray *)arg1 ;
-(void)setTxPwrCnt:(NSArray *)arg1 ;
-(void)setCaSCCCnt:(NSArray *)arg1 ;
-(void)setActRxTxCnt:(NSArray *)arg1 ;
-(void)setSleepStateCnt:(NSArray *)arg1 ;
-(id)logEventBackwardBBMav10HwRfLTE;
-(NSString *)groupEntryKey;
-(NSMutableArray *)groupArrEntries;
-(void)setGroupEntryKey:(NSString *)arg1 ;
-(void)setGroupArrEntries:(NSMutableArray *)arg1 ;
-(NSNumber *)dupMode;
-(NSArray *)caFreqInfo;
-(NSArray *)dlC0TBSzCnt;
-(NSArray *)dlC1TBSzCnt;
-(NSArray *)txPwrCnt;
-(NSArray *)caSCCCnt;
-(NSArray *)actRxTxCnt;
-(NSArray *)sleepStateCnt;
-(void)populateMav13Entry:(id)arg1 ;
-(NSArray *)actRxTxPriCCCnt;
-(NSArray *)actRxTxSecCCCnt;
-(NSArray *)actRxTxPriSecCCCnt;
-(NSArray *)sleepStateIdleCnt;
-(NSArray *)sleepStateConnCnt;
-(NSArray *)rsrpIdleCnt;
-(NSArray *)rsrpConnCnt;
-(NSArray *)sinrIdleCnt;
-(NSArray *)sinrConnCnt;
-(NSArray *)arxStateCnt;
-(NSArray *)nlicStateCnt;
-(NSArray *)bpeStats;
-(void)refreshMav10BBRfAllRats;
-(void)refreshMav13BBRfLTE;
-(id)logEventBackwardBBMav13HwRfLTE;
-(NSArray *)caPriCCCnt;
-(void)setCaPriCCCnt:(NSArray *)arg1 ;
-(NSArray *)caSecCCCnt;
-(void)setCaSecCCCnt:(NSArray *)arg1 ;
-(NSArray *)caPriSecCCCnt;
-(void)setCaPriSecCCCnt:(NSArray *)arg1 ;
-(void)setActRxTxPriCCCnt:(NSArray *)arg1 ;
-(void)setActRxTxSecCCCnt:(NSArray *)arg1 ;
-(void)setActRxTxPriSecCCCnt:(NSArray *)arg1 ;
-(void)setSleepStateIdleCnt:(NSArray *)arg1 ;
-(void)setSleepStateConnCnt:(NSArray *)arg1 ;
-(void)setRsrpIdleCnt:(NSArray *)arg1 ;
-(void)setRsrpConnCnt:(NSArray *)arg1 ;
-(void)setSinrIdleCnt:(NSArray *)arg1 ;
-(void)setSinrConnCnt:(NSArray *)arg1 ;
-(void)setArxStateCnt:(NSArray *)arg1 ;
-(void)setNlicStateCnt:(NSArray *)arg1 ;
-(void)setBpeStats:(NSArray *)arg1 ;
@end

