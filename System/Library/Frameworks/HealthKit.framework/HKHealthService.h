/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface HKHealthService : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSUUID* _identifier;
	NSString* _name;
	double _lastConnection;
	NSString* _serviceId;

}

@property (nonatomic,readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double lastConnection;              //@synthesize lastConnection=_lastConnection - In the implementation block
@property (nonatomic,copy) NSString * serviceId;                 //@synthesize serviceId=_serviceId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSUUID *)identifier;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setServiceId:(NSString *)arg1 ;
-(NSString *)serviceId;
-(id)_initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4 ;
-(id)_localizedHealthServiceType;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(void)setLastConnection:(double)arg1 ;
-(double)lastConnection;
-(id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3 ;
@end

