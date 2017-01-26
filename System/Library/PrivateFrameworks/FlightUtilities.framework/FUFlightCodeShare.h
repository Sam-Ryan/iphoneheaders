/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FUAirline;

@interface FUFlightCodeShare : NSObject {

	FUAirline* _airline;
	long long _flightNumber;

}

@property (retain) FUAirline * airline;                 //@synthesize airline=_airline - In the implementation block
@property (assign) long long flightNumber;              //@synthesize flightNumber=_flightNumber - In the implementation block
-(long long)flightNumber;
-(void)setAirline:(FUAirline *)arg1 ;
-(void)setFlightNumber:(long long)arg1 ;
-(FUAirline *)airline;
@end

