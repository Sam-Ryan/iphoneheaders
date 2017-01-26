/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFSetAirPlayRouteRequest : CATTaskRequest {

	NSString* _routeUID;
	NSString* _password;

}

@property (nonatomic,copy) NSString * routeUID;              //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
@end

