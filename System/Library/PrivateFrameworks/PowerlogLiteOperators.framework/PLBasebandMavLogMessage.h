/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSData, NSString;

@interface PLBasebandMavLogMessage : PLBasebandMessage {

	PLBasebandLogHeader* _header;
	NSData* _payload;
	unsigned _eventCode;
	NSString* _eventCodeString;

}

@property (readonly) NSString * eventCodeString;              //@synthesize eventCodeString=_eventCodeString - In the implementation block
@property (readonly) unsigned eventCode;                      //@synthesize eventCode=_eventCode - In the implementation block
@property (assign) PLBasebandLogHeader* header;               //@synthesize header=_header - In the implementation block
@property (retain) NSData * payload;                          //@synthesize payload=_payload - In the implementation block
-(void)parseData:(id)arg1 ;
-(NSData *)payload;
-(id)initWithData:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(unsigned)eventCode;
-(id)tooShortErrorString;
-(id)stringForUnknownBytes:(unsigned)arg1 ;
-(NSString *)eventCodeString;
-(void)setHeader:(PLBasebandLogHeader*)arg1 ;
-(PLBasebandLogHeader*)header;
@end

