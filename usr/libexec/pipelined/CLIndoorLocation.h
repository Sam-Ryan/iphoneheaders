/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLIndoorLocation : NSObject <NSSecureCoding> {

	BOOL _requestsGpsAssistance;
	NSString* _locationId;
	NSString* _locationDescription;
	SCD_Struct_CL1 _location;

}

@property (assign,nonatomic) SCD_Struct_CL2 location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * locationId;                       //@synthesize locationId=_locationId - In the implementation block
@property (nonatomic,retain) NSString * locationDescription;              //@synthesize locationDescription=_locationDescription - In the implementation block
@property (assign,nonatomic) BOOL requestsGpsAssistance;                  //@synthesize requestsGpsAssistance=_requestsGpsAssistance - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CL2)location;
-(void)setLocation:(SCD_Struct_CL2)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(BOOL)requestsGpsAssistance;
-(void)setRequestsGpsAssistance:(BOOL)arg1 ;
@end

