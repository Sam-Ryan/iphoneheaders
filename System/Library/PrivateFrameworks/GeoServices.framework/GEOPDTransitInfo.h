/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDTransitInfo : PBCodable <NSCopying> {

	NSMutableArray* _labels;
	NSMutableArray* _lines;
	NSString* _searchDisplayName;
	NSMutableArray* _systems;
	NSMutableArray* _transitConnections;

}

@property (nonatomic,retain) NSMutableArray * lines;                           //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                         //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * labels;                          //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitConnections;              //@synthesize transitConnections=_transitConnections - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName;                     //@synthesize searchDisplayName=_searchDisplayName - In the implementation block
+(id)transitInfoForPlaceData:(id)arg1 ;
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
-(unsigned long long)systemsCount;
-(NSMutableArray *)systems;
-(unsigned long long)linesCount;
-(NSMutableArray *)lines;
-(void)setTransitConnections:(NSMutableArray *)arg1 ;
-(BOOL)hasSearchDisplayName;
-(void)clearSystems;
-(void)addLabel:(id)arg1 ;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitConnections;
-(void)clearLabels;
-(NSString *)searchDisplayName;
-(void)clearLines;
-(id)transitConnectionAtIndex:(unsigned long long)arg1 ;
-(void)addTransitConnection:(id)arg1 ;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitConnectionsCount;
-(unsigned long long)labelsCount;
-(void)addSystem:(id)arg1 ;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)clearTransitConnections;
-(NSMutableArray *)labels;
-(void)addLine:(id)arg1 ;
@end

