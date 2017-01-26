/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHealthKitRoutineLocation;

@interface AWDHealthKitRoutineTransitionEvent : PBCodable <NSCopying> {

	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	AWDHealthKitRoutineLocation* _from;
	int _mode;
	AWDHealthKitRoutineLocation* _to;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFrom; 
@property (nonatomic,retain) AWDHealthKitRoutineLocation * from;              //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) BOOL hasTo; 
@property (nonatomic,retain) AWDHealthKitRoutineLocation * to;                //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                                        //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                               //@synthesize endDate=_endDate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasTo;
-(void)setTo:(AWDHealthKitRoutineLocation *)arg1 ;
-(void)setFrom:(AWDHealthKitRoutineLocation *)arg1 ;
-(AWDHealthKitRoutineLocation *)to;
-(BOOL)hasFrom;
-(AWDHealthKitRoutineLocation *)from;
-(BOOL)hasMode;
-(void)setHasMode:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(long long)endDate;
@end

