/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;
@class NSURLSession, ACAccountStore, PKPaymentDevice, NSMutableDictionary, NSOperationQueue, NSObject, NSMutableArray, PKPaymentWebServiceContext, PKPaymentWebServiceBackgroundContext, ACAccount, NSURL, NSURLSessionConfiguration, NSArray, NSString;

@interface PKPaymentWebService : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {

	NSURLSession* _urlSession;
	NSURLSession* _backgroundSession;
	ACAccountStore* _accountStore;
	PKPaymentDevice* _paymentDevice;
	NSMutableDictionary* _passesByLocalURL;
	NSOperationQueue* _delegateOperationQueue;
	NSObject*<OS_dispatch_queue> _backgroundDownloadQueue;
	NSMutableArray* _delegates;
	unsigned long long _taskIDCounter;
	NSMutableDictionary* _webServiceTasks;
	BOOL _sharedService;
	PKPaymentWebServiceContext* _context;
	PKPaymentWebServiceBackgroundContext* _backgroundContext;
	id<PKPaymentWebServiceArchiver> _archiver;
	id<PKPaymentWebServiceBackgroundDelegate> _backgroundDelegate;
	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (retain) PKPaymentWebServiceContext * context;                                              //@synthesize context=_context - In the implementation block
@property (retain) PKPaymentWebServiceBackgroundContext * backgroundContext;                          //@synthesize backgroundContext=_backgroundContext - In the implementation block
@property (readonly) BOOL needsRegistration; 
@property (readonly) ACAccount * account; 
@property (readonly) NSURL * primaryBrokerURL; 
@property (readonly) BOOL needsConfiguration; 
@property (readonly) int paymentSetupSupportedInRegion; 
@property (readonly) NSURLSessionConfiguration * sessionConfiguration; 
@property (retain) NSArray * delegates;                                                               //@synthesize delegates=_delegates - In the implementation block
@property (retain) id<PKPaymentWebServiceArchiver> archiver;                                          //@synthesize archiver=_archiver - In the implementation block
@property (assign) id<PKPaymentWebServiceBackgroundDelegate> backgroundDelegate;                      //@synthesize backgroundDelegate=_backgroundDelegate - In the implementation block
@property (nonatomic,readonly) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (assign,nonatomic) BOOL sharedService;                                                      //@synthesize sharedService=_sharedService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(BOOL)supportsSecureCoding;
+(id)_sharedCookieStorage;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)sharedService;
-(PKPaymentWebServiceContext *)context;
-(void)setContext:(PKPaymentWebServiceContext *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(unsigned long long)_nextTaskID;
-(ACAccount *)account;
-(id)_accountStore;
-(id)_paymentDevice;
-(BOOL)needsConfiguration;
-(unsigned long long)configurePaymentServiceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)remotePaymentCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 ;
-(void)setSharedService:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 ;
-(BOOL)_canBypassTrustExtendedValidation;
-(void)_cleanupPassDownloadCache;
-(void)_updateTargetDeviceForRequest:(id)arg1 ;
-(int)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(id)_errorWithResult:(int)arg1 data:(id)arg2 ;
-(void)_archiveContext;
-(void)_performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_deviceConfigurationDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)registerDeviceWithConsistencyData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)primaryBrokerURL;
-(unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyData:(id)arg2 retries:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didRegisterWithRegionMap:(id)arg1 ;
-(void)_handleAuthenticationFailureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_deviceRegistrationDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_provisionCredential:(id)arg1 taskIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_downloadPassAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deviceProvisioningDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_fakeVerificationChannelsWithRealChannels:(id)arg1 ;
-(id)_addVerificationRequestRecordForChannel:(id)arg1 pass:(id)arg2 ;
-(unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_downloadPassesWithURLs:(id)arg1 ;
-(void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(BOOL)arg2 ;
-(PKPaymentWebServiceBackgroundContext *)backgroundContext;
-(void)_archiveBackgroundContext;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2 ;
-(id)_movePassToDownloadCache:(id)arg1 ;
-(void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_trustPassesExtendedValidation:(SecTrustRef)arg1 ;
-(void)_handleRemoteAssetDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handlePassDownloadTask:(id)arg1 data:(id)arg2 ;
-(id)_passWithFileURL:(id)arg1 ;
-(void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)backgroundDownloadPassAtURL:(id)arg1 ;
-(unsigned long long)passAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_resultForUnexpectedStatusCode:(long long)arg1 ;
-(id)_errorUserInfoWithData:(id)arg1 ;
-(id)_errorUserInfoWithErrorCode:(long long)arg1 ;
-(id)_downloadCacheLocation;
-(void)sharedServiceDidRegister;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 ;
-(void)invalidateBackgroundSession;
-(unsigned long long)unregisterDeviceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)deprovisionForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)devicePassesSinceLastUpdatedTag:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)backgroundDownloadPassesSinceLastUpdatedTag:(BOOL)arg1 ;
-(unsigned long long)userPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 ;
-(void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)_reencryptPayload:(id)arg1 forRegion:(id)arg2 ;
-(void)setBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1 ;
-(id<PKPaymentWebServiceBackgroundDelegate>)backgroundDelegate;
-(void)setBackgroundDelegate:(id<PKPaymentWebServiceBackgroundDelegate>)arg1 ;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(unsigned long long)verificationChannelsForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sharedPaymentServiceChanged:(id)arg1 ;
-(unsigned long long)availableProductsOfType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)needsRegistration;
-(unsigned long long)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)requirementsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)eligibilityForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)provisionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)paymentSetupSupportedInRegion;
-(unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(/*^block*/id)arg6 ;
-(unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)delegates;
-(void)setDelegates:(NSArray *)arg1 ;
-(void)setArchiver:(id<PKPaymentWebServiceArchiver>)arg1 ;
-(id<PKPaymentWebServiceArchiver>)archiver;
@end

