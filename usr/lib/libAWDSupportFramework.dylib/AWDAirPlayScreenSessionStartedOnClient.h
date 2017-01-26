/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _bonjourMs;
	unsigned _configMs;
	unsigned _connectMs;
	unsigned _prepareMs;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	BOOL _didFallbackToInfraToAvoidP2POverDFS;
	SCD_Struct_AW11 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                                   //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;                            //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) BOOL hasPrepareMs; 
@property (assign,nonatomic) unsigned prepareMs;                                       //@synthesize prepareMs=_prepareMs - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                                       //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                                       //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) BOOL hasConfigMs; 
@property (assign,nonatomic) unsigned configMs;                                        //@synthesize configMs=_configMs - In the implementation block
@property (assign,nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS; 
@property (assign,nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS;                 //@synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setHasBonjourMs:(BOOL)arg1 ;
-(BOOL)hasBonjourMs;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setHasConnectMs:(BOOL)arg1 ;
-(BOOL)hasConnectMs;
-(void)setDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(void)setHasDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(BOOL)hasDidFallbackToInfraToAvoidP2POverDFS;
-(unsigned)bonjourMs;
-(unsigned)connectMs;
-(BOOL)didFallbackToInfraToAvoidP2POverDFS;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setHasAudioCompressionType:(BOOL)arg1 ;
-(BOOL)hasAudioCompressionType;
-(unsigned)audioCompressionType;
-(void)setPrepareMs:(unsigned)arg1 ;
-(void)setHasPrepareMs:(BOOL)arg1 ;
-(BOOL)hasPrepareMs;
-(void)setConfigMs:(unsigned)arg1 ;
-(void)setHasConfigMs:(BOOL)arg1 ;
-(BOOL)hasConfigMs;
-(unsigned)prepareMs;
-(unsigned)configMs;
@end

