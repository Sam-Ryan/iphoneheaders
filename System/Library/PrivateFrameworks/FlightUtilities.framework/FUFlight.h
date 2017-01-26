/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FUAirline, NSArray, NSDate, FUFlightStep;

@interface FUFlight : NSObject <NSCopying, NSSecureCoding> {

	NSString* _queriedAirlineTitle;
	FUAirline* _displayAirline;
	long long _displayFlightNumber;
	FUAirline* _airline;
	long long _flightNumber;
	NSString* _cancellationMessage;
	NSArray* _legs;
	NSArray* _codeShares;
	NSArray* _allLegs;
	NSString* _identifier;
	unsigned long long _departureLegIndex;
	unsigned long long _arrivalLegIndex;
	NSDate* _expirationDate;
	NSString* _rawResponse;

}

@property (retain) NSString * queriedAirlineTitle;                    //@synthesize queriedAirlineTitle=_queriedAirlineTitle - In the implementation block
@property (retain) FUAirline * displayAirline;                        //@synthesize displayAirline=_displayAirline - In the implementation block
@property (assign) long long displayFlightNumber;                     //@synthesize displayFlightNumber=_displayFlightNumber - In the implementation block
@property (retain) FUAirline * airline;                               //@synthesize airline=_airline - In the implementation block
@property (assign) long long flightNumber;                            //@synthesize flightNumber=_flightNumber - In the implementation block
@property (readonly) NSString * displayFlightCode; 
@property (readonly) NSString * flightCode; 
@property (readonly) long long status; 
@property (retain) NSString * cancellationMessage;                    //@synthesize cancellationMessage=_cancellationMessage - In the implementation block
@property (readonly) FUFlightStep * departure; 
@property (readonly) FUFlightStep * arrival; 
@property (readonly) double duration; 
@property (retain) NSArray * legs;                                    //@synthesize legs=_legs - In the implementation block
@property (retain) NSArray * codeShares;                              //@synthesize codeShares=_codeShares - In the implementation block
@property (nonatomic,retain) NSArray * allLegs;                       //@synthesize allLegs=_allLegs - In the implementation block
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long departureLegIndex;              //@synthesize departureLegIndex=_departureLegIndex - In the implementation block
@property (assign) unsigned long long arrivalLegIndex;                //@synthesize arrivalLegIndex=_arrivalLegIndex - In the implementation block
@property (retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (retain) NSString * rawResponse;                            //@synthesize rawResponse=_rawResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)timeFormatterForIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSArray *)legs;
-(void)setLegs:(NSArray *)arg1 ;
-(FUFlightStep *)arrival;
-(FUFlightStep *)departure;
-(NSString *)rawResponse;
-(void)setRawResponse:(NSString *)arg1 ;
-(long long)flightNumber;
-(NSArray *)codeShares;
-(void)setDisplayFlightNumber:(long long)arg1 ;
-(void)setDisplayAirline:(FUAirline *)arg1 ;
-(void)setQueriedAirlineTitle:(NSString *)arg1 ;
-(void)setAirline:(FUAirline *)arg1 ;
-(void)setFlightNumber:(long long)arg1 ;
-(void)setCodeShares:(NSArray *)arg1 ;
-(void)setAllLegs:(NSArray *)arg1 ;
-(FUAirline *)displayAirline;
-(NSString *)flightCode;
-(NSString *)cancellationMessage;
-(NSArray *)allLegs;
-(unsigned long long)departureLegIndex;
-(unsigned long long)arrivalLegIndex;
-(void)setCancellationMessage:(NSString *)arg1 ;
-(void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2 ;
-(NSString *)queriedAirlineTitle;
-(long long)displayFlightNumber;
-(void)setDepartureLegIndex:(unsigned long long)arg1 ;
-(void)setArrivalLegIndex:(unsigned long long)arg1 ;
-(id)firstLeg;
-(id)lastLeg;
-(id)legsAsFlights;
-(NSString *)displayFlightCode;
-(id)relevantLeg;
-(FUAirline *)airline;
@end

