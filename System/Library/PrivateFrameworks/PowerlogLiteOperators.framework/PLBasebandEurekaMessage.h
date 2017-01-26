/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSData;

@interface PLBasebandEurekaMessage : PLBasebandMessage {

	unsigned char _skip;
	PLBasebandEventHeader* _header;
	NSData* _payload;
	PLBasebandSystemSelectionEvent* _ssevent;
	char* _ssaction;
	char* _ssstate;

}

@property (readonly) unsigned eventCode; 
@property (assign) PLBasebandEventHeader* header;                        //@synthesize header=_header - In the implementation block
@property (retain) NSData * payload;                                     //@synthesize payload=_payload - In the implementation block
@property (assign) PLBasebandSystemSelectionEvent* ssevent;              //@synthesize ssevent=_ssevent - In the implementation block
@property (assign) char* ssaction;                                       //@synthesize ssaction=_ssaction - In the implementation block
@property (assign) char* ssstate;                                        //@synthesize ssstate=_ssstate - In the implementation block
@property (assign) unsigned char skip;                                   //@synthesize skip=_skip - In the implementation block
-(void)parseData:(id)arg1 ;
-(NSData *)payload;
-(id)initWithData:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(id)payloadString;
-(void)setSkip:(unsigned char)arg1 ;
-(unsigned)eventCode;
-(id)tooShortErrorString;
-(id)eventSystemSelection;
-(id)actionSystemSelection;
-(id)stateSystemSelection;
-(char*)ssaction;
-(id)cellularSystemStringSystemSelection:(char*)arg1 ;
-(PLBasebandSystemSelectionEvent*)ssevent;
-(id)convertCMCallConnectPayloadToDictionary:(CMCallConnectPayload*)arg1 ;
-(id)convertCMCallOrigPayloadToDictionary:(CMCallOrigPayload*)arg1 ;
-(id)convertCMCallConnectV2PayloadToDictionary:(NewCMCallConnectPayload*)arg1 ;
-(id)convertCMCallOrigV2PayloadToDictionary:(NewCMCallOrigPayload*)arg1 ;
-(id)cdmaExitString:(char*)arg1 ;
-(id)stateStringGSM:(char*)arg1 ;
-(id)stateStringWCDMA:(char*)arg1 ;
-(id)scanTypeStartWCDMA:(char*)arg1 ;
-(id)scanTypeStopWCDMA:(char*)arg1 ;
-(id)stateStringHSDPA:(char*)arg1 ;
-(id)stateStringHSPAPLUS_DC:(char*)arg1 ;
-(id)stateStringLTE:(char*)arg1 ;
-(id)estCauseLTE:(char*)arg1 ;
-(id)relCauseLTE:(char*)arg1 ;
-(id)iratStringLTE:(char*)arg1 ;
-(id)stateStringUTRANL1:(char*)arg1 ;
-(id)stateStringMotion:(char*)arg1 ;
-(id)stringForUnknownBytes:(unsigned)arg1 ;
-(id)stateStringOOS:(char*)arg1 ;
-(id)eventStringOOS:(char*)arg1 ;
-(id)stateStringACC:(char*)arg1 ;
-(unsigned char)skip;
-(char*)ssstate;
-(id)callTypeString:(char*)arg1 ;
-(id)eventStringACC:(char*)arg1 ;
-(id)stateStringHSUPA:(char*)arg1 ;
-(id)soCallTypeString:(char*)arg1 ;
-(id)termStringSystemSelection:(char*)arg1 ;
-(id)establishmentCauseStringWCDMA:(char*)arg1 ;
-(id)releaseCauseStringWCDMA:(char*)arg1 ;
-(id)pagingTypeWCDMA:(char*)arg1 ;
-(id)pagingCauseWCDMA:(char*)arg1 ;
-(id)searchPhaseStringPSSI:(char*)arg1 ;
-(id)ratStringPSSI:(char*)arg1 ;
-(id)procedureStringPSSI:(char*)arg1 ;
-(id)iratHOStringLTE:(char*)arg1 ;
-(id)smgmmEventType:(char*)arg1 ;
-(id)cellUpdateCause:(char*)arg1 ;
-(void)setSsevent:(PLBasebandSystemSelectionEvent*)arg1 ;
-(void)setSsaction:(char*)arg1 ;
-(void)setSsstate:(char*)arg1 ;
-(void)setHeader:(PLBasebandEventHeader*)arg1 ;
-(PLBasebandEventHeader*)header;
@end

