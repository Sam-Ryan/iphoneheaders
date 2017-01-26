/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCMTicketFollowupResponse, GEOCMTicketStatusResponse, GEOCMTicketSubmissionResponse;

@interface GEOCMCommunityResponse : PBCodable <NSCopying> {

	int _requestType;
	int _statusCode;
	GEOCMTicketFollowupResponse* _ticketFollowupResponse;
	GEOCMTicketStatusResponse* _ticketStatusResponse;
	GEOCMTicketSubmissionResponse* _ticketSubmissionResponse;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                       //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketSubmissionResponse; 
@property (nonatomic,retain) GEOCMTicketSubmissionResponse * ticketSubmissionResponse;              //@synthesize ticketSubmissionResponse=_ticketSubmissionResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketFollowupResponse; 
@property (nonatomic,retain) GEOCMTicketFollowupResponse * ticketFollowupResponse;                  //@synthesize ticketFollowupResponse=_ticketFollowupResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketStatusResponse; 
@property (nonatomic,retain) GEOCMTicketStatusResponse * ticketStatusResponse;                      //@synthesize ticketStatusResponse=_ticketStatusResponse - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(void)setStatusCode:(int)arg1 ;
-(void)setTicketSubmissionResponse:(GEOCMTicketSubmissionResponse *)arg1 ;
-(BOOL)hasTicketStatusResponse;
-(GEOCMTicketSubmissionResponse *)ticketSubmissionResponse;
-(void)setTicketFollowupResponse:(GEOCMTicketFollowupResponse *)arg1 ;
-(GEOCMTicketFollowupResponse *)ticketFollowupResponse;
-(BOOL)hasTicketFollowupResponse;
-(GEOCMTicketStatusResponse *)ticketStatusResponse;
-(BOOL)hasTicketSubmissionResponse;
-(void)setTicketStatusResponse:(GEOCMTicketStatusResponse *)arg1 ;
-(int)requestType;
@end

