/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDCaptiveSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _appTriggeredPassiveSymptom;
	NSString* _autoLoginCarrierID;
	unsigned _autoLoginType;
	unsigned _durationNetworkNotCaptive;
	unsigned _durationOnNetwork;
	NSString* _handlerCNP;
	NSMutableArray* _installedCNPDisplayIDs;
	unsigned _passiveCaptivityCorrectDetection;
	unsigned _passiveCaptivityIncorrectDetection;
	unsigned _passiveCaptivitySymptom;
	unsigned _result;
	unsigned _websheetProbeCount;
	unsigned _websheetScrapeResult;
	BOOL _autoLoginFailed;
	BOOL _detectedNotCaptiveHandledByCNP;
	BOOL _handlerCNPTriggeredLogOff;
	BOOL _isDetectedCaptive;
	BOOL _passiveCaptivityDetected;
	BOOL _websheetScraped;
	BOOL _wisprDetected;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                                          //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetProbeCount; 
@property (assign,nonatomic) unsigned websheetProbeCount;                              //@synthesize websheetProbeCount=_websheetProbeCount - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetScraped; 
@property (assign,nonatomic) BOOL websheetScraped;                                     //@synthesize websheetScraped=_websheetScraped - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetScrapeResult; 
@property (assign,nonatomic) unsigned websheetScrapeResult;                            //@synthesize websheetScrapeResult=_websheetScrapeResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * installedCNPDisplayIDs;                  //@synthesize installedCNPDisplayIDs=_installedCNPDisplayIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasHandlerCNP; 
@property (nonatomic,retain) NSString * handlerCNP;                                    //@synthesize handlerCNP=_handlerCNP - In the implementation block
@property (assign,nonatomic) BOOL hasDetectedNotCaptiveHandledByCNP; 
@property (assign,nonatomic) BOOL detectedNotCaptiveHandledByCNP;                      //@synthesize detectedNotCaptiveHandledByCNP=_detectedNotCaptiveHandledByCNP - In the implementation block
@property (assign,nonatomic) BOOL hasAutoLoginType; 
@property (assign,nonatomic) unsigned autoLoginType;                                   //@synthesize autoLoginType=_autoLoginType - In the implementation block
@property (assign,nonatomic) BOOL hasAutoLoginFailed; 
@property (assign,nonatomic) BOOL autoLoginFailed;                                     //@synthesize autoLoginFailed=_autoLoginFailed - In the implementation block
@property (nonatomic,readonly) BOOL hasAutoLoginCarrierID; 
@property (nonatomic,retain) NSString * autoLoginCarrierID;                            //@synthesize autoLoginCarrierID=_autoLoginCarrierID - In the implementation block
@property (assign,nonatomic) BOOL hasWisprDetected; 
@property (assign,nonatomic) BOOL wisprDetected;                                       //@synthesize wisprDetected=_wisprDetected - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityDetected; 
@property (assign,nonatomic) BOOL passiveCaptivityDetected;                            //@synthesize passiveCaptivityDetected=_passiveCaptivityDetected - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityCorrectDetection; 
@property (assign,nonatomic) unsigned passiveCaptivityCorrectDetection;                //@synthesize passiveCaptivityCorrectDetection=_passiveCaptivityCorrectDetection - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityIncorrectDetection; 
@property (assign,nonatomic) unsigned passiveCaptivityIncorrectDetection;              //@synthesize passiveCaptivityIncorrectDetection=_passiveCaptivityIncorrectDetection - In the implementation block
@property (assign,nonatomic) BOOL hasHandlerCNPTriggeredLogOff; 
@property (assign,nonatomic) BOOL handlerCNPTriggeredLogOff;                           //@synthesize handlerCNPTriggeredLogOff=_handlerCNPTriggeredLogOff - In the implementation block
@property (assign,nonatomic) BOOL hasIsDetectedCaptive; 
@property (assign,nonatomic) BOOL isDetectedCaptive;                                   //@synthesize isDetectedCaptive=_isDetectedCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOnNetwork; 
@property (assign,nonatomic) unsigned durationOnNetwork;                               //@synthesize durationOnNetwork=_durationOnNetwork - In the implementation block
@property (assign,nonatomic) BOOL hasDurationNetworkNotCaptive; 
@property (assign,nonatomic) unsigned durationNetworkNotCaptive;                       //@synthesize durationNetworkNotCaptive=_durationNetworkNotCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivitySymptom; 
@property (assign,nonatomic) unsigned passiveCaptivitySymptom;                         //@synthesize passiveCaptivitySymptom=_passiveCaptivitySymptom - In the implementation block
@property (nonatomic,readonly) BOOL hasAppTriggeredPassiveSymptom; 
@property (nonatomic,retain) NSString * appTriggeredPassiveSymptom;                    //@synthesize appTriggeredPassiveSymptom=_appTriggeredPassiveSymptom - In the implementation block
+(Class)installedCNPDisplayIDsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)result;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setResult:(unsigned)arg1 ;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(void)setInstalledCNPDisplayIDs:(NSMutableArray *)arg1 ;
-(void)setHandlerCNP:(NSString *)arg1 ;
-(void)setAutoLoginCarrierID:(NSString *)arg1 ;
-(void)setAppTriggeredPassiveSymptom:(NSString *)arg1 ;
-(void)addInstalledCNPDisplayIDs:(id)arg1 ;
-(unsigned long long)installedCNPDisplayIDsCount;
-(void)clearInstalledCNPDisplayIDs;
-(id)installedCNPDisplayIDsAtIndex:(unsigned long long)arg1 ;
-(void)setWebsheetProbeCount:(unsigned)arg1 ;
-(void)setHasWebsheetProbeCount:(BOOL)arg1 ;
-(BOOL)hasWebsheetProbeCount;
-(void)setWebsheetScraped:(BOOL)arg1 ;
-(void)setHasWebsheetScraped:(BOOL)arg1 ;
-(BOOL)hasWebsheetScraped;
-(void)setWebsheetScrapeResult:(unsigned)arg1 ;
-(void)setHasWebsheetScrapeResult:(BOOL)arg1 ;
-(BOOL)hasWebsheetScrapeResult;
-(BOOL)hasHandlerCNP;
-(void)setDetectedNotCaptiveHandledByCNP:(BOOL)arg1 ;
-(void)setHasDetectedNotCaptiveHandledByCNP:(BOOL)arg1 ;
-(BOOL)hasDetectedNotCaptiveHandledByCNP;
-(void)setAutoLoginType:(unsigned)arg1 ;
-(void)setHasAutoLoginType:(BOOL)arg1 ;
-(BOOL)hasAutoLoginType;
-(void)setAutoLoginFailed:(BOOL)arg1 ;
-(void)setHasAutoLoginFailed:(BOOL)arg1 ;
-(BOOL)hasAutoLoginFailed;
-(BOOL)hasAutoLoginCarrierID;
-(void)setWisprDetected:(BOOL)arg1 ;
-(void)setHasWisprDetected:(BOOL)arg1 ;
-(BOOL)hasWisprDetected;
-(void)setPassiveCaptivityDetected:(BOOL)arg1 ;
-(void)setHasPassiveCaptivityDetected:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivityDetected;
-(void)setPassiveCaptivityCorrectDetection:(unsigned)arg1 ;
-(void)setHasPassiveCaptivityCorrectDetection:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivityCorrectDetection;
-(void)setPassiveCaptivityIncorrectDetection:(unsigned)arg1 ;
-(void)setHasPassiveCaptivityIncorrectDetection:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivityIncorrectDetection;
-(void)setHandlerCNPTriggeredLogOff:(BOOL)arg1 ;
-(void)setHasHandlerCNPTriggeredLogOff:(BOOL)arg1 ;
-(BOOL)hasHandlerCNPTriggeredLogOff;
-(void)setIsDetectedCaptive:(BOOL)arg1 ;
-(void)setHasIsDetectedCaptive:(BOOL)arg1 ;
-(BOOL)hasIsDetectedCaptive;
-(void)setDurationOnNetwork:(unsigned)arg1 ;
-(void)setHasDurationOnNetwork:(BOOL)arg1 ;
-(BOOL)hasDurationOnNetwork;
-(void)setDurationNetworkNotCaptive:(unsigned)arg1 ;
-(void)setHasDurationNetworkNotCaptive:(BOOL)arg1 ;
-(BOOL)hasDurationNetworkNotCaptive;
-(void)setPassiveCaptivitySymptom:(unsigned)arg1 ;
-(void)setHasPassiveCaptivitySymptom:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivitySymptom;
-(BOOL)hasAppTriggeredPassiveSymptom;
-(unsigned)websheetProbeCount;
-(BOOL)websheetScraped;
-(unsigned)websheetScrapeResult;
-(NSMutableArray *)installedCNPDisplayIDs;
-(NSString *)handlerCNP;
-(BOOL)detectedNotCaptiveHandledByCNP;
-(unsigned)autoLoginType;
-(BOOL)autoLoginFailed;
-(NSString *)autoLoginCarrierID;
-(BOOL)wisprDetected;
-(BOOL)passiveCaptivityDetected;
-(unsigned)passiveCaptivityCorrectDetection;
-(unsigned)passiveCaptivityIncorrectDetection;
-(BOOL)handlerCNPTriggeredLogOff;
-(BOOL)isDetectedCaptive;
-(unsigned)durationOnNetwork;
-(unsigned)durationNetworkNotCaptive;
-(unsigned)passiveCaptivitySymptom;
-(NSString *)appTriggeredPassiveSymptom;
@end

