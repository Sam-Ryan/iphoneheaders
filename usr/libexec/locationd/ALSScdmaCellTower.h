/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSScdmaCellTower : PBCodable {

	int _arfcn;
	int _cellID;
	int _lacID;
	ALSLocation* _location;
	int _mcc;
	int _mnc;
	int _psc;
	SCD_Struct_AL10 _has;

}

@property (assign,nonatomic) int mcc;                             //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                             //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int cellID;                          //@synthesize cellID=_cellID - In the implementation block
@property (assign,nonatomic) int lacID;                           //@synthesize lacID=_lacID - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) ALSLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasArfcn; 
@property (assign,nonatomic) int arfcn;                           //@synthesize arfcn=_arfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPsc; 
@property (assign,nonatomic) int psc;                             //@synthesize psc=_psc - In the implementation block
-(int)mcc;
-(int)mnc;
-(int)lacID;
-(BOOL)hasArfcn;
-(int)arfcn;
-(BOOL)hasPsc;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setLacID:(int)arg1 ;
-(void)setArfcn:(int)arg1 ;
-(void)setHasArfcn:(BOOL)arg1 ;
-(void)setPsc:(int)arg1 ;
-(void)setHasPsc:(BOOL)arg1 ;
-(int)psc;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(ALSLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(ALSLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(int)cellID;
-(void)setCellID:(int)arg1 ;
@end

