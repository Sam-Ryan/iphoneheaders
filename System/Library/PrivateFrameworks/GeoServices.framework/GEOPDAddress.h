/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDAddress : PBCodable <NSCopying> {

	int _knownAccuracy;
	NSMutableArray* _localizedAddress;
	NSMutableArray* _spokenNavigationAddress;
	NSMutableArray* _spokenStructuredAddress;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * localizedAddress;                     //@synthesize localizedAddress=_localizedAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNavigationAddress;              //@synthesize spokenNavigationAddress=_spokenNavigationAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenStructuredAddress;              //@synthesize spokenStructuredAddress=_spokenStructuredAddress - In the implementation block
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy;                                     //@synthesize knownAccuracy=_knownAccuracy - In the implementation block
+(id)addressForPlaceData:(id)arg1 ;
-(id)bestLocalizedAddress;
-(id)spokenAddressForLocale:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearLocalizedAddress;
-(NSMutableArray *)spokenStructuredAddress;
-(void)setSpokenNavigationAddress:(NSMutableArray *)arg1 ;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(NSMutableArray *)spokenNavigationAddress;
-(id)spokenStructuredAddressAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenStructuredAddressCount;
-(int)knownAccuracy;
-(BOOL)hasKnownAccuracy;
-(void)addSpokenNavigationAddress:(id)arg1 ;
-(unsigned long long)localizedAddressCount;
-(void)addLocalizedAddress:(id)arg1 ;
-(id)localizedAddressAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenNavigationAddressCount;
-(void)setLocalizedAddress:(NSMutableArray *)arg1 ;
-(void)setKnownAccuracy:(int)arg1 ;
-(id)spokenNavigationAddressAtIndex:(unsigned long long)arg1 ;
-(void)setSpokenStructuredAddress:(NSMutableArray *)arg1 ;
-(void)clearSpokenStructuredAddress;
-(NSMutableArray *)localizedAddress;
-(void)clearSpokenNavigationAddress;
-(void)addSpokenStructuredAddress:(id)arg1 ;
@end
