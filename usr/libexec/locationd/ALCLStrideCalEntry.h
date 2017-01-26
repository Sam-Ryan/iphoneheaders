/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCLStrideCalEntry : PBCodable <NSCopying> {

	double _endTime;
	double _startTime;
	double _timestamp;
	float _distance;
	float _kvalue;
	float _kvalueTrack;
	unsigned _pacebin;
	int _recordId;
	float _score;
	int _session;
	float _speed;
	int _steps;
	BOOL _regularEntry;
	SCD_Struct_AL3 _has;

}

@property (assign,nonatomic) BOOL hasRecordId; 
@property (assign,nonatomic) int recordId;                      //@synthesize recordId=_recordId - In the implementation block
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasPacebin; 
@property (assign,nonatomic) unsigned pacebin;                  //@synthesize pacebin=_pacebin - In the implementation block
@property (assign,nonatomic) float kvalue;                      //@synthesize kvalue=_kvalue - In the implementation block
@property (assign,nonatomic) float kvalueTrack;                 //@synthesize kvalueTrack=_kvalueTrack - In the implementation block
@property (assign,nonatomic) float score;                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) float distance;                    //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) int steps;                         //@synthesize steps=_steps - In the implementation block
@property (assign,nonatomic) int session;                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) float speed;                       //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRegularEntry; 
@property (assign,nonatomic) BOOL regularEntry;                 //@synthesize regularEntry=_regularEntry - In the implementation block
-(BOOL)regularEntry;
-(void)setRegularEntry:(BOOL)arg1 ;
-(void)setHasRecordId:(BOOL)arg1 ;
-(void)setPacebin:(unsigned)arg1 ;
-(void)setHasPacebin:(BOOL)arg1 ;
-(BOOL)hasPacebin;
-(void)setHasRegularEntry:(BOOL)arg1 ;
-(BOOL)hasRegularEntry;
-(unsigned)pacebin;
-(float)kvalue;
-(void)setKvalue:(float)arg1 ;
-(float)kvalueTrack;
-(void)setKvalueTrack:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSpeed:(float)arg1 ;
-(double)timestamp;
-(void)setStartTime:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(id)dictionaryRepresentation;
-(double)startTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(int)steps;
-(void)setSteps:(int)arg1 ;
-(double)endTime;
-(void)setScore:(float)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(int)session;
-(float)score;
-(void)setSession:(int)arg1 ;
-(void)setRecordId:(int)arg1 ;
-(BOOL)hasRecordId;
-(int)recordId;
@end
