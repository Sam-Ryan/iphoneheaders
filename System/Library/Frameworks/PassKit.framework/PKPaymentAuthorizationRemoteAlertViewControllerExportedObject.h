/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationServiceProtocol;
@class NSMutableSet, PKPaymentAuthorizationRemoteAlertViewController, NSString;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol> {

	BOOL _didForceDismiss;
	NSMutableSet* _completionHandlers;
	id<PKPaymentAuthorizationServiceProtocol> _delegate;
	PKPaymentAuthorizationRemoteAlertViewController* _controller;

}

@property (nonatomic,retain) NSMutableSet * completionHandlers;                                         //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic) id<PKPaymentAuthorizationServiceProtocol> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationRemoteAlertViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(void)dealloc;
-(id<PKPaymentAuthorizationServiceProtocol>)delegate;
-(PKPaymentAuthorizationRemoteAlertViewController *)controller;
-(void)setController:(PKPaymentAuthorizationRemoteAlertViewController *)arg1 ;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1 ;
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)forceDismissDidComplete;
-(NSMutableSet *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
@end

