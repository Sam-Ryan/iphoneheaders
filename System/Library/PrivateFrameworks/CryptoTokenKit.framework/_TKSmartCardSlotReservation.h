/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _TKSmartCardSlotReservation : NSObject {

	BOOL _exclusive;
	NSNumber* _protocols;

}

@property (retain) NSNumber * protocols;              //@synthesize protocols=_protocols - In the implementation block
@property (assign) BOOL exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
-(void)setExclusive:(BOOL)arg1 ;
-(NSNumber *)protocols;
-(void)setProtocols:(NSNumber *)arg1 ;
-(BOOL)exclusive;
@end

