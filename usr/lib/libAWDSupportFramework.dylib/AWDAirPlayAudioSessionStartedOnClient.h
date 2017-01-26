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

@interface AWDAirPlayAudioSessionStartedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _announceMs;
	unsigned _authMs;
	unsigned _bonjourMs;
	unsigned _compressionType;
	unsigned _connectMs;
	unsigned _encryptionType;
	unsigned _recordMs;
	NSString* _sessionUUID;
	unsigned _setupAudioMs;
	unsigned _setupScreenMs;
	int _status;
	unsigned _transportType;
	BOOL _didFallbackToInfraToAvoidP2POverDFS;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                                   //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasCompressionType; 
@property (assign,nonatomic) unsigned compressionType;                                 //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) BOOL hasEncryptionType; 
@property (assign,nonatomic) unsigned encryptionType;                                  //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                                       //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                                       //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) BOOL hasAuthMs; 
@property (assign,nonatomic) unsigned authMs;                                          //@synthesize authMs=_authMs - In the implementation block
@property (assign,nonatomic) BOOL hasAnnounceMs; 
@property (assign,nonatomic) unsigned announceMs;                                      //@synthesize announceMs=_announceMs - In the implementation block
@property (assign,nonatomic) BOOL hasSetupAudioMs; 
@property (assign,nonatomic) unsigned setupAudioMs;                                    //@synthesize setupAudioMs=_setupAudioMs - In the implementation block
@property (assign,nonatomic) BOOL hasSetupScreenMs; 
@property (assign,nonatomic) unsigned setupScreenMs;                                   //@synthesize setupScreenMs=_setupScreenMs - In the implementation block
@property (assign,nonatomic) BOOL hasRecordMs; 
@property (assign,nonatomic) unsigned recordMs;                                        //@synthesize recordMs=_recordMs - In the implementation block
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
-(void)setCompressionType:(unsigned)arg1 ;
-(void)setHasCompressionType:(BOOL)arg1 ;
-(BOOL)hasCompressionType;
-(void)setEncryptionType:(unsigned)arg1 ;
-(void)setHasEncryptionType:(BOOL)arg1 ;
-(BOOL)hasEncryptionType;
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setHasBonjourMs:(BOOL)arg1 ;
-(BOOL)hasBonjourMs;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setHasConnectMs:(BOOL)arg1 ;
-(BOOL)hasConnectMs;
-(void)setAuthMs:(unsigned)arg1 ;
-(void)setHasAuthMs:(BOOL)arg1 ;
-(BOOL)hasAuthMs;
-(void)setAnnounceMs:(unsigned)arg1 ;
-(void)setHasAnnounceMs:(BOOL)arg1 ;
-(BOOL)hasAnnounceMs;
-(void)setSetupAudioMs:(unsigned)arg1 ;
-(void)setHasSetupAudioMs:(BOOL)arg1 ;
-(BOOL)hasSetupAudioMs;
-(void)setSetupScreenMs:(unsigned)arg1 ;
-(void)setHasSetupScreenMs:(BOOL)arg1 ;
-(BOOL)hasSetupScreenMs;
-(void)setRecordMs:(unsigned)arg1 ;
-(void)setHasRecordMs:(BOOL)arg1 ;
-(BOOL)hasRecordMs;
-(void)setDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(void)setHasDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(BOOL)hasDidFallbackToInfraToAvoidP2POverDFS;
-(unsigned)compressionType;
-(unsigned)encryptionType;
-(unsigned)bonjourMs;
-(unsigned)connectMs;
-(unsigned)authMs;
-(unsigned)announceMs;
-(unsigned)setupAudioMs;
-(unsigned)setupScreenMs;
-(unsigned)recordMs;
-(BOOL)didFallbackToInfraToAvoidP2POverDFS;
@end

