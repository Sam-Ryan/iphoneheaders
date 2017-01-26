/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNFCGeneralStatistic : PBCodable <NSCopying> {

	unsigned long long _startTimestamp;
	unsigned long long _timestamp;
	unsigned _totalAPNReceived;
	unsigned _totalAuthECommerce;
	unsigned _totalCEEnable;
	unsigned _totalCardProvisioned;
	unsigned _totalFailureWithMissingTransactionEndEvent;
	unsigned _totalFailureWithTransactionEndEventErrors;
	unsigned _totalRestrictModeEntered;
	unsigned _totalSuccessfulVAS;
	unsigned _totalTransactionEndEvent;
	unsigned _totalTransientDeactiveTimeout;
	unsigned _totalVASActivation;
	unsigned _totalVASSignup;
	unsigned _totalVASTransactionException;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) unsigned long long startTimestamp;                                //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCEEnable; 
@property (assign,nonatomic) unsigned totalCEEnable;                                           //@synthesize totalCEEnable=_totalCEEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCardProvisioned; 
@property (assign,nonatomic) unsigned totalCardProvisioned;                                    //@synthesize totalCardProvisioned=_totalCardProvisioned - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransientDeactiveTimeout; 
@property (assign,nonatomic) unsigned totalTransientDeactiveTimeout;                           //@synthesize totalTransientDeactiveTimeout=_totalTransientDeactiveTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAPNReceived; 
@property (assign,nonatomic) unsigned totalAPNReceived;                                        //@synthesize totalAPNReceived=_totalAPNReceived - In the implementation block
@property (assign,nonatomic) BOOL hasTotalRestrictModeEntered; 
@property (assign,nonatomic) unsigned totalRestrictModeEntered;                                //@synthesize totalRestrictModeEntered=_totalRestrictModeEntered - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalTransactionEndEvent;                                //@synthesize totalTransactionEndEvent=_totalTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFailureWithTransactionEndEventErrors; 
@property (assign,nonatomic) unsigned totalFailureWithTransactionEndEventErrors;               //@synthesize totalFailureWithTransactionEndEventErrors=_totalFailureWithTransactionEndEventErrors - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFailureWithMissingTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalFailureWithMissingTransactionEndEvent;              //@synthesize totalFailureWithMissingTransactionEndEvent=_totalFailureWithMissingTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAuthECommerce; 
@property (assign,nonatomic) unsigned totalAuthECommerce;                                      //@synthesize totalAuthECommerce=_totalAuthECommerce - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASActivation; 
@property (assign,nonatomic) unsigned totalVASActivation;                                      //@synthesize totalVASActivation=_totalVASActivation - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulVAS; 
@property (assign,nonatomic) unsigned totalSuccessfulVAS;                                      //@synthesize totalSuccessfulVAS=_totalSuccessfulVAS - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASSignup; 
@property (assign,nonatomic) unsigned totalVASSignup;                                          //@synthesize totalVASSignup=_totalVASSignup - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASTransactionException; 
@property (assign,nonatomic) unsigned totalVASTransactionException;                            //@synthesize totalVASTransactionException=_totalVASTransactionException - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(void)setTotalCEEnable:(unsigned)arg1 ;
-(void)setHasTotalCEEnable:(BOOL)arg1 ;
-(BOOL)hasTotalCEEnable;
-(void)setTotalCardProvisioned:(unsigned)arg1 ;
-(void)setHasTotalCardProvisioned:(BOOL)arg1 ;
-(BOOL)hasTotalCardProvisioned;
-(void)setTotalTransientDeactiveTimeout:(unsigned)arg1 ;
-(void)setHasTotalTransientDeactiveTimeout:(BOOL)arg1 ;
-(BOOL)hasTotalTransientDeactiveTimeout;
-(void)setTotalAPNReceived:(unsigned)arg1 ;
-(void)setHasTotalAPNReceived:(BOOL)arg1 ;
-(BOOL)hasTotalAPNReceived;
-(void)setTotalRestrictModeEntered:(unsigned)arg1 ;
-(void)setHasTotalRestrictModeEntered:(BOOL)arg1 ;
-(BOOL)hasTotalRestrictModeEntered;
-(void)setTotalTransactionEndEvent:(unsigned)arg1 ;
-(void)setHasTotalTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalTransactionEndEvent;
-(void)setTotalFailureWithTransactionEndEventErrors:(unsigned)arg1 ;
-(void)setHasTotalFailureWithTransactionEndEventErrors:(BOOL)arg1 ;
-(BOOL)hasTotalFailureWithTransactionEndEventErrors;
-(void)setTotalFailureWithMissingTransactionEndEvent:(unsigned)arg1 ;
-(void)setHasTotalFailureWithMissingTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalFailureWithMissingTransactionEndEvent;
-(void)setTotalAuthECommerce:(unsigned)arg1 ;
-(void)setHasTotalAuthECommerce:(BOOL)arg1 ;
-(BOOL)hasTotalAuthECommerce;
-(void)setTotalVASActivation:(unsigned)arg1 ;
-(void)setHasTotalVASActivation:(BOOL)arg1 ;
-(BOOL)hasTotalVASActivation;
-(void)setTotalSuccessfulVAS:(unsigned)arg1 ;
-(void)setHasTotalSuccessfulVAS:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulVAS;
-(void)setTotalVASSignup:(unsigned)arg1 ;
-(void)setHasTotalVASSignup:(BOOL)arg1 ;
-(BOOL)hasTotalVASSignup;
-(void)setTotalVASTransactionException:(unsigned)arg1 ;
-(void)setHasTotalVASTransactionException:(BOOL)arg1 ;
-(BOOL)hasTotalVASTransactionException;
-(unsigned long long)startTimestamp;
-(unsigned)totalCEEnable;
-(unsigned)totalCardProvisioned;
-(unsigned)totalTransientDeactiveTimeout;
-(unsigned)totalAPNReceived;
-(unsigned)totalRestrictModeEntered;
-(unsigned)totalTransactionEndEvent;
-(unsigned)totalFailureWithTransactionEndEventErrors;
-(unsigned)totalFailureWithMissingTransactionEndEvent;
-(unsigned)totalAuthECommerce;
-(unsigned)totalVASActivation;
-(unsigned)totalSuccessfulVAS;
-(unsigned)totalVASSignup;
-(unsigned)totalVASTransactionException;
@end

