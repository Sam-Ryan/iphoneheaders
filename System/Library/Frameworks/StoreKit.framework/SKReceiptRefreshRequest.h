/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSDictionary * receiptProperties;              //@synthesize properties=_properties - In the implementation block
-(void)dealloc;
-(void)_handleReply:(id)arg1 ;
-(void)_sendXPCMessage;
-(BOOL)_wantsExpired;
-(BOOL)_wantsRevoked;
-(BOOL)_wantsVPP;
-(id)initWithReceiptProperties:(id)arg1 ;
-(NSDictionary *)receiptProperties;
@end

