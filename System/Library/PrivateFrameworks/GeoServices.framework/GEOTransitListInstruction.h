/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitListInstruction : PBCodable <NSCopying> {

	NSMutableArray* _commandFormatteds;
	NSMutableArray* _commands;
	NSMutableArray* _detailFormatteds;
	NSMutableArray* _details;
	NSMutableArray* _noticeFormatteds;
	NSMutableArray* _notices;

}

@property (nonatomic,retain) NSMutableArray * commands;                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSMutableArray * details;                        //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) NSMutableArray * notices;                        //@synthesize notices=_notices - In the implementation block
@property (nonatomic,retain) NSMutableArray * noticeFormatteds;               //@synthesize noticeFormatteds=_noticeFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandFormatteds;              //@synthesize commandFormatteds=_commandFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailFormatteds;               //@synthesize detailFormatteds=_detailFormatteds - In the implementation block
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
-(void)clearDetails;
-(void)addDetailFormatted:(id)arg1 ;
-(unsigned long long)commandFormattedsCount;
-(NSMutableArray *)commands;
-(NSMutableArray *)details;
-(NSMutableArray *)detailFormatteds;
-(id)commandFormattedAtIndex:(unsigned long long)arg1 ;
-(void)addCommandFormatted:(id)arg1 ;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(void)setCommandFormatteds:(NSMutableArray *)arg1 ;
-(void)setNotices:(NSMutableArray *)arg1 ;
-(void)clearNoticeFormatteds;
-(void)addNoticeFormatted:(id)arg1 ;
-(void)clearNotices;
-(NSMutableArray *)notices;
-(void)clearDetailFormatteds;
-(void)addCommand:(id)arg1 ;
-(void)clearCommands;
-(NSMutableArray *)noticeFormatteds;
-(void)addDetail:(id)arg1 ;
-(id)detailAtIndex:(unsigned long long)arg1 ;
-(void)clearCommandFormatteds;
-(NSMutableArray *)commandFormatteds;
-(void)setDetailFormatteds:(NSMutableArray *)arg1 ;
-(unsigned long long)noticeFormattedsCount;
-(void)setNoticeFormatteds:(NSMutableArray *)arg1 ;
-(id)noticeFormattedAtIndex:(unsigned long long)arg1 ;
-(id)detailFormattedAtIndex:(unsigned long long)arg1 ;
-(void)addNotice:(id)arg1 ;
-(id)noticeAtIndex:(unsigned long long)arg1 ;
-(void)setDetails:(NSMutableArray *)arg1 ;
-(unsigned long long)noticesCount;
-(unsigned long long)detailFormattedsCount;
-(unsigned long long)detailsCount;
-(id)commandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)commandsCount;
@end
