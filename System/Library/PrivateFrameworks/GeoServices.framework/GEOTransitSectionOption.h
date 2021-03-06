/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitSectionOption : PBCodable <NSCopying> {

	SCD_Struct_GE59* _sections;
	unsigned _defaultSectionIndex;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) unsigned long long sectionsCount; 
@property (nonatomic,readonly) unsigned* sections; 
@property (assign,nonatomic) BOOL hasDefaultSectionIndex; 
@property (assign,nonatomic) unsigned defaultSectionIndex;                    //@synthesize defaultSectionIndex=_defaultSectionIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned*)sections;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(void)addSection:(unsigned)arg1 ;
-(void)setHasDefaultSectionIndex:(BOOL)arg1 ;
-(void)setSections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)defaultSectionIndex;
-(void)setDefaultSectionIndex:(unsigned)arg1 ;
-(unsigned)sectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDefaultSectionIndex;
@end

