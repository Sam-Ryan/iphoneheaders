/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineTransitionMotionType;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying> {

	unsigned _distance;
	unsigned _duration;
	AWDCoreRoutineTransitionMotionType* _transitionHistogram;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                     //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitionHistogram; 
@property (nonatomic,retain) AWDCoreRoutineTransitionMotionType * transitionHistogram;              //@synthesize transitionHistogram=_transitionHistogram - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(BOOL)hasDistance;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setTransitionHistogram:(AWDCoreRoutineTransitionMotionType *)arg1 ;
-(BOOL)hasTransitionHistogram;
-(AWDCoreRoutineTransitionMotionType *)transitionHistogram;
@end

