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

@interface AWDAirPlayAudioSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	unsigned _clientAnnounceMs;
	unsigned _clientAuthMs;
	unsigned _clientBonjourMs;
	unsigned _clientConnectMs;
	NSString* _clientModel;
	unsigned _clientSetupAudioMs;
	unsigned _clientSetupScreenMs;
	NSString* _clientVersion;
	unsigned _latencyMs;
	unsigned _serverRecordMs;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                 //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                     //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;              //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) BOOL hasLatencyMs; 
@property (assign,nonatomic) unsigned latencyMs;                         //@synthesize latencyMs=_latencyMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                   //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                   //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientAuthMs; 
@property (assign,nonatomic) unsigned clientAuthMs;                      //@synthesize clientAuthMs=_clientAuthMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientAnnounceMs; 
@property (assign,nonatomic) unsigned clientAnnounceMs;                  //@synthesize clientAnnounceMs=_clientAnnounceMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientSetupAudioMs; 
@property (assign,nonatomic) unsigned clientSetupAudioMs;                //@synthesize clientSetupAudioMs=_clientSetupAudioMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientSetupScreenMs; 
@property (assign,nonatomic) unsigned clientSetupScreenMs;               //@synthesize clientSetupScreenMs=_clientSetupScreenMs - In the implementation block
@property (assign,nonatomic) BOOL hasServerRecordMs; 
@property (assign,nonatomic) unsigned serverRecordMs;                    //@synthesize serverRecordMs=_serverRecordMs - In the implementation block
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
-(void)setClientModel:(NSString *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(BOOL)hasClientModel;
-(BOOL)hasClientVersion;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setHasAudioCompressionType:(BOOL)arg1 ;
-(BOOL)hasAudioCompressionType;
-(void)setLatencyMs:(unsigned)arg1 ;
-(void)setHasLatencyMs:(BOOL)arg1 ;
-(BOOL)hasLatencyMs;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setHasClientBonjourMs:(BOOL)arg1 ;
-(BOOL)hasClientBonjourMs;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setHasClientConnectMs:(BOOL)arg1 ;
-(BOOL)hasClientConnectMs;
-(void)setClientAuthMs:(unsigned)arg1 ;
-(void)setHasClientAuthMs:(BOOL)arg1 ;
-(BOOL)hasClientAuthMs;
-(void)setClientAnnounceMs:(unsigned)arg1 ;
-(void)setHasClientAnnounceMs:(BOOL)arg1 ;
-(BOOL)hasClientAnnounceMs;
-(void)setClientSetupAudioMs:(unsigned)arg1 ;
-(void)setHasClientSetupAudioMs:(BOOL)arg1 ;
-(BOOL)hasClientSetupAudioMs;
-(void)setClientSetupScreenMs:(unsigned)arg1 ;
-(void)setHasClientSetupScreenMs:(BOOL)arg1 ;
-(BOOL)hasClientSetupScreenMs;
-(void)setServerRecordMs:(unsigned)arg1 ;
-(void)setHasServerRecordMs:(BOOL)arg1 ;
-(BOOL)hasServerRecordMs;
-(NSString *)clientModel;
-(NSString *)clientVersion;
-(unsigned)audioCompressionType;
-(unsigned)latencyMs;
-(unsigned)clientBonjourMs;
-(unsigned)clientConnectMs;
-(unsigned)clientAuthMs;
-(unsigned)clientAnnounceMs;
-(unsigned)clientSetupAudioMs;
-(unsigned)clientSetupScreenMs;
-(unsigned)serverRecordMs;
@end

