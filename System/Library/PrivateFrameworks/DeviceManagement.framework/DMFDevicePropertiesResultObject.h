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

@interface DMFDevicePropertiesResultObject : CATTaskResultObject {

	NSDictionary* _errorsByPropertyKey;
	NSDictionary* _valuesByPropertyKey;

}

@property (nonatomic,copy) NSDictionary * errorsByPropertyKey;              //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
@property (nonatomic,copy) NSDictionary * valuesByPropertyKey;              //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(void)setValuesByPropertyKey:(NSDictionary *)arg1 ;
-(void)setErrorsByPropertyKey:(NSDictionary *)arg1 ;
-(id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2 ;
-(id)valueForPropertyKey:(id)arg1 error:(id*)arg2 ;
@end
