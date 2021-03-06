/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload {

	unsigned long long _airPrintCount;
	NSMutableArray* _ippAddresses;

}

@property (assign,nonatomic) unsigned long long airPrintCount;              //@synthesize airPrintCount=_airPrintCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * ippAddresses;                 //@synthesize ippAddresses=_ippAddresses - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(unsigned long long)airPrintCount;
-(NSMutableArray *)ippAddresses;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(void)setAirPrintCount:(unsigned long long)arg1 ;
-(void)setIppAddresses:(NSMutableArray *)arg1 ;
-(id)description;
-(id)restrictions;
@end

