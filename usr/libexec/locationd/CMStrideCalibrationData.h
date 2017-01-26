/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMStrideCalibrationData : NSObject <NSSecureCoding> {

	long long _state;
	double _kValue;
	double _begin;
	double _end;

}

@property (assign,nonatomic) long long state;                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double kValue;                       //@synthesize kValue=_kValue - In the implementation block
@property (assign,nonatomic) double begin;                        //@synthesize begin=_begin - In the implementation block
@property (nonatomic,readonly) double lowerQuartile; 
@property (nonatomic,readonly) double center; 
@property (nonatomic,readonly) double upperQuartile; 
@property (assign,nonatomic) double end;                          //@synthesize end=_end - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)kValue;
-(id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4 ;
-(double)lowerQuartile;
-(double)upperQuartile;
-(void)setKValue:(double)arg1 ;
-(void)setBegin:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)center;
-(double)end;
-(void)setEnd:(double)arg1 ;
-(double)begin;
@end

