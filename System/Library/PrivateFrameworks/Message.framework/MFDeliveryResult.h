/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFDeliveryResult : NSObject {

	BOOL _isWifi;
	long long _status;
	double _duration;
	unsigned long long _bytesSent;
	long long _attributes;

}

@property (assign,nonatomic) long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL isWifi;                               //@synthesize isWifi=_isWifi - In the implementation block
@property (assign,nonatomic) long long attributes;                      //@synthesize attributes=_attributes - In the implementation block
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)attributes;
-(void)setAttributes:(long long)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 ;
-(BOOL)isWifi;
-(void)setIsWifi:(BOOL)arg1 ;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
@end

