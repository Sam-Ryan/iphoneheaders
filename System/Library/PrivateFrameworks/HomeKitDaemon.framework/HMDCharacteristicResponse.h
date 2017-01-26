/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDCharacteristicRequest, NSError;

@interface HMDCharacteristicResponse : NSObject {

	HMDCharacteristicRequest* _request;
	id _value;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
-(HMDCharacteristicRequest *)request;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSError *)error;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end

