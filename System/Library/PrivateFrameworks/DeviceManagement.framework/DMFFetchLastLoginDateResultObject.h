/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject {

	NSDictionary* _lastLoginDatesByAppleID;

}

@property (nonatomic,copy) NSDictionary * lastLoginDatesByAppleID;              //@synthesize lastLoginDatesByAppleID=_lastLoginDatesByAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)lastLoginDatesByAppleID;
-(void)setLastLoginDatesByAppleID:(NSDictionary *)arg1 ;
@end

