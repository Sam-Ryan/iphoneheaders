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

@interface AWDHealthKitNotificationView : PBCodable <NSCopying> {

	unsigned long long _dwelltimeMs;
	long long _endDate;
	long long _startDate;
	int _dismissReason;
	int _scrollBehavior;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasDwelltimeMs; 
@property (assign,nonatomic) unsigned long long dwelltimeMs;              //@synthesize dwelltimeMs=_dwelltimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasDismissReason; 
@property (assign,nonatomic) int dismissReason;                           //@synthesize dismissReason=_dismissReason - In the implementation block
@property (assign,nonatomic) BOOL hasScrollBehavior; 
@property (assign,nonatomic) int scrollBehavior;                          //@synthesize scrollBehavior=_scrollBehavior - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setDismissReason:(int)arg1 ;
-(void)setHasDismissReason:(BOOL)arg1 ;
-(BOOL)hasDismissReason;
-(int)dismissReason;
-(void)setDwelltimeMs:(unsigned long long)arg1 ;
-(void)setHasDwelltimeMs:(BOOL)arg1 ;
-(BOOL)hasDwelltimeMs;
-(id)dismissReasonAsString:(int)arg1 ;
-(int)StringAsDismissReason:(id)arg1 ;
-(int)scrollBehavior;
-(void)setScrollBehavior:(int)arg1 ;
-(void)setHasScrollBehavior:(BOOL)arg1 ;
-(BOOL)hasScrollBehavior;
-(id)scrollBehaviorAsString:(int)arg1 ;
-(int)StringAsScrollBehavior:(id)arg1 ;
-(unsigned long long)dwelltimeMs;
-(void)setEndDate:(long long)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(long long)endDate;
@end

