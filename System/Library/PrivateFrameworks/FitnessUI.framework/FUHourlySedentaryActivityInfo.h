/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface FUHourlySedentaryActivityInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	long long _sedentaryState;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long sedentaryState;              //@synthesize sedentaryState=_sedentaryState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setSedentaryState:(long long)arg1 ;
-(long long)sedentaryState;
@end

