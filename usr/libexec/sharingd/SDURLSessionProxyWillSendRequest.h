/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:30 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SDURLSessionProxyRequest, SDURLSessionProxyTaskMessage;

@interface SDURLSessionProxyWillSendRequest : PBRequest <NSCopying> {

	SDURLSessionProxyRequest* _request;
	SDURLSessionProxyTaskMessage* _task;
	BOOL _hasBodyStream;
	SCD_Struct_SD2 _has;

}

@property (nonatomic,readonly) BOOL hasTask; 
@property (nonatomic,retain) SDURLSessionProxyTaskMessage * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) SDURLSessionProxyRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL hasHasBodyStream; 
@property (assign,nonatomic) BOOL hasBodyStream;                               //@synthesize hasBodyStream=_hasBodyStream - In the implementation block
-(BOOL)hasTask;
-(void)setHasBodyStream:(BOOL)arg1 ;
-(BOOL)hasBodyStream;
-(void)setHasHasBodyStream:(BOOL)arg1 ;
-(BOOL)hasHasBodyStream;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SDURLSessionProxyRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SDURLSessionProxyTaskMessage *)task;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequest:(SDURLSessionProxyRequest *)arg1 ;
-(BOOL)hasRequest;
-(void)setTask:(SDURLSessionProxyTaskMessage *)arg1 ;
@end

