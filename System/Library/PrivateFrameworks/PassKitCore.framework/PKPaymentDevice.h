/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CLLocationManager, NSTimer, NSObject, PKSecureElement, PKPaymentDeviceProvisioningData, NSMutableArray, NSString;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSTimer* _timer;
	NSObject*<OS_dispatch_source> _locationFixTimeout;
	PKSecureElement* _secureElement;
	PKPaymentDeviceProvisioningData* _provisioningData;
	NSMutableArray* _provisioningCompletions;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _skipLocationCheck;

}

@property (assign,nonatomic) BOOL skipLocationCheck;                //@synthesize skipLocationCheck=_skipLocationCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInfoHTTPHeader;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(BOOL)skipLocationCheck;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)_executeProvisioningCompletionHandlers;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)configurationData;
-(void)registrationDataWithAuthToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)rewrapDataWithDeviceIdentifier:(id)arg1 ;
-(void)provisioningDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRegistrationRegionMap:(id)arg1 ;
-(void)deleteApplicationWithAID:(id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerWithCompletion:(/*^block*/id)arg1 ;
-(void)configurationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSkipLocationCheck:(BOOL)arg1 ;
@end
