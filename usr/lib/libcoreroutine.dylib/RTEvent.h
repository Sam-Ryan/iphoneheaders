/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID;

@interface RTEvent : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSUUID* _locationIdentifier;
	long long _source;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSUUID * locationIdentifier;              //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (assign,nonatomic) long long source;                         //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSUUID *)locationIdentifier;
-(void)setLocationIdentifier:(NSUUID *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 locationIdentifier:(id)arg4 ;
@end

