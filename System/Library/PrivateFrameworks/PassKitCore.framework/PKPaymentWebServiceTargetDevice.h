/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>

@class PKPassLibrary, PKPaymentService, PKAssertion, NSString;

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol> {

	PKPassLibrary* _passLibrary;
	PKPaymentService* _paymentService;
	PKAssertion* _provisioningAssertion;
	BOOL _assertionActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneTargetDevice;
-(void)dealloc;
-(id)init;
-(id)deviceRegion;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)bridgedClientInfo;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(/*^block*/id)arg2 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 shouldArchivePaymentWebServiceContext:(id)arg2 ;
-(void)paymentWebService:(id)arg1 shouldArchivePaymentWebServiceBackgroundContext:(id)arg2 ;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)deviceName;
@end

