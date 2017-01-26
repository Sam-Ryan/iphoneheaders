/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateModelEntryExit : NSObject <NSSecureCoding> {

	double _entry_s;
	double _exit_s;

}

@property (assign,nonatomic) double entry_s;              //@synthesize entry_s=_entry_s - In the implementation block
@property (assign,nonatomic) double exit_s;               //@synthesize exit_s=_exit_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithEntry:(double)arg1 exit:(double)arg2 ;
-(double)exit_s;
-(double)entry_s;
-(void)setEntry_s:(double)arg1 ;
-(void)setExit_s:(double)arg1 ;
@end

