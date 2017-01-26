/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCMCalorieData : PBCodable <NSCopying> {

	double _mets;
	double _timestamp;
	int _activityType;
	float _energyMagnitude;
	float _meanAngleX;
	int _metSource;
	float _metsHR;
	float _metsWR;
	int _recordId;
	BOOL _isStanding;
	BOOL _regularEntry;
	SCD_Struct_AL3 _has;

}

@property (assign,nonatomic) BOOL hasRecordId; 
@property (assign,nonatomic) int recordId;                       //@synthesize recordId=_recordId - In the implementation block
@property (assign,nonatomic) int activityType;                   //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL isStanding;                    //@synthesize isStanding=_isStanding - In the implementation block
@property (assign,nonatomic) double mets;                        //@synthesize mets=_mets - In the implementation block
@property (assign,nonatomic) int metSource;                      //@synthesize metSource=_metSource - In the implementation block
@property (assign,nonatomic) float meanAngleX;                   //@synthesize meanAngleX=_meanAngleX - In the implementation block
@property (assign,nonatomic) float energyMagnitude;              //@synthesize energyMagnitude=_energyMagnitude - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL regularEntry;                  //@synthesize regularEntry=_regularEntry - In the implementation block
@property (assign,nonatomic) BOOL hasMetsHR; 
@property (assign,nonatomic) float metsHR;                       //@synthesize metsHR=_metsHR - In the implementation block
@property (assign,nonatomic) BOOL hasMetsWR; 
@property (assign,nonatomic) float metsWR;                       //@synthesize metsWR=_metsWR - In the implementation block
-(BOOL)regularEntry;
-(void)setRegularEntry:(BOOL)arg1 ;
-(void)setHasRecordId:(BOOL)arg1 ;
-(void)setIsStanding:(BOOL)arg1 ;
-(BOOL)isStanding;
-(void)setMets:(double)arg1 ;
-(void)setMetsHR:(float)arg1 ;
-(void)setMetsWR:(float)arg1 ;
-(void)setMetSource:(int)arg1 ;
-(void)setMeanAngleX:(float)arg1 ;
-(void)setEnergyMagnitude:(float)arg1 ;
-(void)setHasMetsHR:(BOOL)arg1 ;
-(BOOL)hasMetsHR;
-(void)setHasMetsWR:(BOOL)arg1 ;
-(BOOL)hasMetsWR;
-(int)metSource;
-(float)meanAngleX;
-(float)energyMagnitude;
-(float)metsHR;
-(float)metsWR;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(int)activityType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)mets;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setActivityType:(int)arg1 ;
-(void)setRecordId:(int)arg1 ;
-(BOOL)hasRecordId;
-(int)recordId;
@end

