/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCLSessionCatherine : PBCodable <NSCopying> {

	double _startTime;
	int _activityType;
	float _firstCatherine;
	float _firstCatherineStartTime;
	float _longestDropout;
	float _maxGoodCatherine;
	float _meanCatherine;
	float _meanGoodCatherine;
	float _minGoodCatherine;
	unsigned _nCatherine;
	unsigned _nDropout;
	unsigned _nGoodCatherine;
	unsigned _nHighCatherine;
	unsigned _nInterpolatedCatherine;
	unsigned _nLowCatherine;
	unsigned _nSampleAndHoldCatherine;
	unsigned _nVeryHighCatherine;
	unsigned _nVeryLowCatherine;
	float _onsetCatherine;
	int _onsetReason;
	float _persistedMinHR;
	float _totalDropoutTime;
	float _userMaxCatherine;
	SCD_Struct_AL44 _has;

}

@property (assign,nonatomic) int activityType;                              //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasNCatherine; 
@property (assign,nonatomic) unsigned nCatherine;                           //@synthesize nCatherine=_nCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNVeryLowCatherine; 
@property (assign,nonatomic) unsigned nVeryLowCatherine;                    //@synthesize nVeryLowCatherine=_nVeryLowCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNLowCatherine; 
@property (assign,nonatomic) unsigned nLowCatherine;                        //@synthesize nLowCatherine=_nLowCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNHighCatherine; 
@property (assign,nonatomic) unsigned nHighCatherine;                       //@synthesize nHighCatherine=_nHighCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNVeryHighCatherine; 
@property (assign,nonatomic) unsigned nVeryHighCatherine;                   //@synthesize nVeryHighCatherine=_nVeryHighCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNGoodCatherine; 
@property (assign,nonatomic) unsigned nGoodCatherine;                       //@synthesize nGoodCatherine=_nGoodCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNInterpolatedCatherine; 
@property (assign,nonatomic) unsigned nInterpolatedCatherine;               //@synthesize nInterpolatedCatherine=_nInterpolatedCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasNSampleAndHoldCatherine; 
@property (assign,nonatomic) unsigned nSampleAndHoldCatherine;              //@synthesize nSampleAndHoldCatherine=_nSampleAndHoldCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasMinGoodCatherine; 
@property (assign,nonatomic) float minGoodCatherine;                        //@synthesize minGoodCatherine=_minGoodCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasMaxGoodCatherine; 
@property (assign,nonatomic) float maxGoodCatherine;                        //@synthesize maxGoodCatherine=_maxGoodCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasMeanCatherine; 
@property (assign,nonatomic) float meanCatherine;                           //@synthesize meanCatherine=_meanCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasMeanGoodCatherine; 
@property (assign,nonatomic) float meanGoodCatherine;                       //@synthesize meanGoodCatherine=_meanGoodCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasFirstCatherine; 
@property (assign,nonatomic) float firstCatherine;                          //@synthesize firstCatherine=_firstCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasFirstCatherineStartTime; 
@property (assign,nonatomic) float firstCatherineStartTime;                 //@synthesize firstCatherineStartTime=_firstCatherineStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasLongestDropout; 
@property (assign,nonatomic) float longestDropout;                          //@synthesize longestDropout=_longestDropout - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDropoutTime; 
@property (assign,nonatomic) float totalDropoutTime;                        //@synthesize totalDropoutTime=_totalDropoutTime - In the implementation block
@property (assign,nonatomic) BOOL hasNDropout; 
@property (assign,nonatomic) unsigned nDropout;                             //@synthesize nDropout=_nDropout - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasOnsetReason; 
@property (assign,nonatomic) int onsetReason;                               //@synthesize onsetReason=_onsetReason - In the implementation block
@property (assign,nonatomic) BOOL hasOnsetCatherine; 
@property (assign,nonatomic) float onsetCatherine;                          //@synthesize onsetCatherine=_onsetCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasUserMaxCatherine; 
@property (assign,nonatomic) float userMaxCatherine;                        //@synthesize userMaxCatherine=_userMaxCatherine - In the implementation block
@property (assign,nonatomic) BOOL hasPersistedMinHR; 
@property (assign,nonatomic) float persistedMinHR;                          //@synthesize persistedMinHR=_persistedMinHR - In the implementation block
-(void)setNCatherine:(unsigned)arg1 ;
-(void)setFirstCatherineStartTime:(float)arg1 ;
-(void)setMeanCatherine:(float)arg1 ;
-(void)setNInterpolatedCatherine:(unsigned)arg1 ;
-(void)setNSampleAndHoldCatherine:(unsigned)arg1 ;
-(void)setOnsetReason:(int)arg1 ;
-(void)setUserMaxCatherine:(float)arg1 ;
-(void)setNGoodCatherine:(unsigned)arg1 ;
-(void)setMaxGoodCatherine:(float)arg1 ;
-(void)setMeanGoodCatherine:(float)arg1 ;
-(void)setMinGoodCatherine:(float)arg1 ;
-(void)setNDropout:(unsigned)arg1 ;
-(void)setLongestDropout:(float)arg1 ;
-(void)setTotalDropoutTime:(float)arg1 ;
-(void)setNHighCatherine:(unsigned)arg1 ;
-(void)setNLowCatherine:(unsigned)arg1 ;
-(void)setNVeryHighCatherine:(unsigned)arg1 ;
-(void)setNVeryLowCatherine:(unsigned)arg1 ;
-(void)setOnsetCatherine:(float)arg1 ;
-(void)setPersistedMinHR:(float)arg1 ;
-(void)setHasNCatherine:(BOOL)arg1 ;
-(BOOL)hasNCatherine;
-(void)setHasNVeryLowCatherine:(BOOL)arg1 ;
-(BOOL)hasNVeryLowCatherine;
-(void)setHasNLowCatherine:(BOOL)arg1 ;
-(BOOL)hasNLowCatherine;
-(void)setHasNHighCatherine:(BOOL)arg1 ;
-(BOOL)hasNHighCatherine;
-(void)setHasNVeryHighCatherine:(BOOL)arg1 ;
-(BOOL)hasNVeryHighCatherine;
-(void)setHasNGoodCatherine:(BOOL)arg1 ;
-(BOOL)hasNGoodCatherine;
-(void)setHasNInterpolatedCatherine:(BOOL)arg1 ;
-(BOOL)hasNInterpolatedCatherine;
-(void)setHasNSampleAndHoldCatherine:(BOOL)arg1 ;
-(BOOL)hasNSampleAndHoldCatherine;
-(void)setHasMinGoodCatherine:(BOOL)arg1 ;
-(BOOL)hasMinGoodCatherine;
-(void)setHasMaxGoodCatherine:(BOOL)arg1 ;
-(BOOL)hasMaxGoodCatherine;
-(void)setHasMeanCatherine:(BOOL)arg1 ;
-(BOOL)hasMeanCatherine;
-(void)setHasMeanGoodCatherine:(BOOL)arg1 ;
-(BOOL)hasMeanGoodCatherine;
-(void)setFirstCatherine:(float)arg1 ;
-(void)setHasFirstCatherine:(BOOL)arg1 ;
-(BOOL)hasFirstCatherine;
-(void)setHasFirstCatherineStartTime:(BOOL)arg1 ;
-(BOOL)hasFirstCatherineStartTime;
-(void)setHasLongestDropout:(BOOL)arg1 ;
-(BOOL)hasLongestDropout;
-(void)setHasTotalDropoutTime:(BOOL)arg1 ;
-(BOOL)hasTotalDropoutTime;
-(void)setHasNDropout:(BOOL)arg1 ;
-(BOOL)hasNDropout;
-(int)onsetReason;
-(void)setHasOnsetReason:(BOOL)arg1 ;
-(BOOL)hasOnsetReason;
-(void)setHasOnsetCatherine:(BOOL)arg1 ;
-(BOOL)hasOnsetCatherine;
-(void)setHasUserMaxCatherine:(BOOL)arg1 ;
-(BOOL)hasUserMaxCatherine;
-(void)setHasPersistedMinHR:(BOOL)arg1 ;
-(BOOL)hasPersistedMinHR;
-(unsigned)nCatherine;
-(unsigned)nVeryLowCatherine;
-(unsigned)nLowCatherine;
-(unsigned)nHighCatherine;
-(unsigned)nVeryHighCatherine;
-(unsigned)nGoodCatherine;
-(unsigned)nInterpolatedCatherine;
-(unsigned)nSampleAndHoldCatherine;
-(float)minGoodCatherine;
-(float)maxGoodCatherine;
-(float)meanCatherine;
-(float)meanGoodCatherine;
-(float)firstCatherine;
-(float)firstCatherineStartTime;
-(float)longestDropout;
-(float)totalDropoutTime;
-(unsigned)nDropout;
-(float)onsetCatherine;
-(float)userMaxCatherine;
-(float)persistedMinHR;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(int)activityType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)startTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setActivityType:(int)arg1 ;
@end

