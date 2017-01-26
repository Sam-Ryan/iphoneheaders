/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {

	id _value;
	NSData* _authorizationData;

}

@property (nonatomic,readonly) id value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * authorizationData;              //@synthesize authorizationData=_authorizationData - In the implementation block
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
-(id)value;
-(NSData *)authorizationData;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
@end

