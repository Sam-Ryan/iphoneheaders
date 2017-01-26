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

@interface AWDHealthKitAchievement : PBCodable <NSCopying> {

	long long _completedDate;
	long long _value;
	int _achievementType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) int achievementType;                  //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) long long completedDate;              //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) long long value;                      //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(int)achievementType;
-(void)setAchievementType:(int)arg1 ;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(id)achievementTypeAsString:(int)arg1 ;
-(int)StringAsAchievementType:(id)arg1 ;
-(void)setCompletedDate:(long long)arg1 ;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(long long)completedDate;
@end

