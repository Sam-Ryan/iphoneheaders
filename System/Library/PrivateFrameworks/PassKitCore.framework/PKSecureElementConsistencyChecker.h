/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKSecureElementConsistencyCheckerDelegate;
@class NSObject, PKPaymentWebService;

@interface PKSecureElementConsistencyChecker : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	id<PKSecureElementConsistencyCheckerDelegate> _delegate;
	PKPaymentWebService* _paymentWebService;

}

@property (assign,nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                             //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(void)setDelegate:(id<PKSecureElementConsistencyCheckerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKSecureElementConsistencyCheckerDelegate>)delegate;
-(void)queue_startWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_downloadPasses;
-(void)_rescheduleWithBackoff;
-(void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 ;
-(void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
@end

