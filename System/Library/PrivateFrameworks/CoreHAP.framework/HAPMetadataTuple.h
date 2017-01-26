/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HAPMetadataTuple : NSObject {

	NSString* _characteristicName;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * characteristicName;              //@synthesize characteristicName=_characteristicName - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
-(NSString *)serviceName;
-(id)initWithCharacteristic:(id)arg1 service:(id)arg2 ;
-(NSString *)characteristicName;
@end

