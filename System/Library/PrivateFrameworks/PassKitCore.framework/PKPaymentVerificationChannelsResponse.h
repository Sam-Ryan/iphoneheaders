/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentVerificationChannelsResponse : PKPaymentWebServiceResponse {

	NSArray* _verificationChannels;

}

@property (nonatomic,retain) NSArray * verificationChannels;              //@synthesize verificationChannels=_verificationChannels - In the implementation block
+(id)responseWithData:(id)arg1 forPass:(id)arg2 ;
-(void)dealloc;
-(NSArray *)verificationChannels;
-(id)initWithData:(id)arg1 forPass:(id)arg2 ;
-(void)setVerificationChannels:(NSArray *)arg1 ;
@end
