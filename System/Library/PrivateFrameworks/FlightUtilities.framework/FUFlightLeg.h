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

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSCopying, NSSecureCoding> {

	long long _status;
	double _duration;
	FUFlightStep* _departure;
	FUFlightStep* _arrival;
	double _heading;
	double _speed;
	double _altitude;
	NSString* _aircraftcode;
	SCD_Struct_FU1 _location;

}

@property (assign) long long status;                      //@synthesize status=_status - In the implementation block
@property (assign) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (retain) FUFlightStep * departure;              //@synthesize departure=_departure - In the implementation block
@property (retain) FUFlightStep * arrival;                //@synthesize arrival=_arrival - In the implementation block
@property (assign) double heading;                        //@synthesize heading=_heading - In the implementation block
@property (assign) double speed;                          //@synthesize speed=_speed - In the implementation block
@property (assign) double altitude;                       //@synthesize altitude=_altitude - In the implementation block
@property (assign) SCD_Struct_FU1 location;               //@synthesize location=_location - In the implementation block
@property (retain) NSString * aircraftcode;               //@synthesize aircraftcode=_aircraftcode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(SCD_Struct_FU1)location;
-(void)setLocation:(SCD_Struct_FU1)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setHeading:(double)arg1 ;
-(double)altitude;
-(double)heading;
-(void)setAltitude:(double)arg1 ;
-(FUFlightStep *)arrival;
-(void)setDeparture:(FUFlightStep *)arg1 ;
-(void)setArrival:(FUFlightStep *)arg1 ;
-(FUFlightStep *)departure;
-(NSString *)aircraftcode;
-(void)setAircraftcode:(NSString *)arg1 ;
@end

