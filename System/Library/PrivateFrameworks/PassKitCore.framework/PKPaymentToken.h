/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMethod, NSString, NSData;

@interface PKPaymentToken : NSObject <NSSecureCoding> {

	PKPaymentMethod* _paymentMethod;
	NSString* _paymentInstrumentName;
	NSString* _paymentNetwork;
	NSString* _transactionIdentifier;
	NSData* _paymentData;

}

@property (nonatomic,copy) PKPaymentMethod * paymentMethod;               //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy) NSString * paymentInstrumentName;              //@synthesize paymentInstrumentName=_paymentInstrumentName - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                     //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                          //@synthesize paymentData=_paymentData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)simulatedToken;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setPaymentInstrumentName:(NSString *)arg1 ;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setPaymentMethod:(PKPaymentMethod *)arg1 ;
-(NSString *)paymentInstrumentName;
-(NSData *)paymentData;
-(PKPaymentMethod *)paymentMethod;
-(NSString *)transactionIdentifier;
@end

