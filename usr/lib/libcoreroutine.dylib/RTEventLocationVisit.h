/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTEventContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocationOfInterest;

@interface RTEventLocationVisit : RTEventContext <NSSecureCoding> {

	RTLocationOfInterest* _locationOfInterest;

}

@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTLocationOfInterest *)locationOfInterest;
-(id)initWithLocationOfInterest:(id)arg1 source:(long long)arg2 ;
@end
