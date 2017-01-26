/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface HAPBTLEConnectionRequestTuple : NSObject {

	NSObject*<OS_dispatch_source> _connectionRequestTimer;
	NSString* _identifier;
	unsigned long long _advertisementFormat;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> connectionRequestTimer;              //@synthesize connectionRequestTimer=_connectionRequestTimer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long advertisementFormat;                            //@synthesize advertisementFormat=_advertisementFormat - In the implementation block
+(id)connectionRequestTupleWithTimer:(id)arg1 identifier:(id)arg2 advertisementFormat:(unsigned long long)arg3 ;
-(NSString *)identifier;
-(NSObject*<OS_dispatch_source>)connectionRequestTimer;
-(unsigned long long)advertisementFormat;
@end

