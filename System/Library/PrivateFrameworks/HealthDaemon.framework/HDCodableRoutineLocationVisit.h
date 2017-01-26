/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableRoutineLocationVisit : PBCodable <NSCopying> {

	double _entryTime;
	double _exitTime;
	SCD_Struct_HD1 _has;

}

@property (assign,nonatomic) BOOL hasEntryTime; 
@property (assign,nonatomic) double entryTime;               //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) BOOL hasExitTime; 
@property (assign,nonatomic) double exitTime;                //@synthesize exitTime=_exitTime - In the implementation block
-(id)initWithLocationOfInterestVisit:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)entryTime;
-(void)setEntryTime:(double)arg1 ;
-(double)exitTime;
-(void)setExitTime:(double)arg1 ;
-(void)setHasEntryTime:(BOOL)arg1 ;
-(BOOL)hasEntryTime;
-(void)setHasExitTime:(BOOL)arg1 ;
-(BOOL)hasExitTime;
@end

