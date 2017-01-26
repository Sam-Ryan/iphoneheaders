/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface TKSmartCardATRInterfaceGroup : NSObject {

	NSNumber* _ABC[3];
	NSNumber* _protocol;

}

@property (nonatomic,readonly) NSNumber * TA; 
@property (nonatomic,readonly) NSNumber * TB; 
@property (nonatomic,readonly) NSNumber * TC; 
@property (nonatomic,readonly) NSNumber * protocol;              //@synthesize protocol=_protocol - In the implementation block
-(id)description;
-(NSNumber *)protocol;
-(id)initWithProtocol:(id)arg1 ;
-(NSNumber *)TA;
-(NSNumber *)TB;
-(NSNumber *)TC;
-(id)parseWithY:(char*)arg1 toProtocol:(id*)arg2 fromSource:(/*^block*/id)arg3 hasNext:(BOOL*)arg4 ;
@end

