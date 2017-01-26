/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/AirFair2.syncBundle/AirFair2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirFair2/AirFair2-Structs.h>
#import <libobjc.A.dylib/ATClient.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSArray, ATConcreteMessageLink, LSApplicationWorkspace, NSNotificationCenter, NSString;

@interface AF2SyncClient : NSObject <ATClient, ATMessageLinkObserver, ATMessageLinkRequestHandler, LSApplicationWorkspaceObserverProtocol> {

	unsigned _fpContextId;
	unsigned _provisioningContextId;
	NSArray* _currentSyncedAccountIds;
	ATConcreteMessageLink* _currentMessageLink;
	LSApplicationWorkspace* _applicationWorkspace;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_getHWInfoString;
-(DeviceKeyTypeSupport)_getDeviceKeyTypeSupportInfo;
-(id)_getDeviceCertificate:(id*)arg1 ;
-(id)_generateKeybagRequest:(id*)arg1 ;
-(id)_eraseProvisioning;
-(void)_initiateKeybagSyncIfNeeded;
-(BOOL)_isRefreshNeeded:(id)arg1 ;
-(FairPlayHWInfo_)_fpHWInfoFromString:(id)arg1 ;
-(id)_processServerProvisioningResponse:(id)arg1 messageLink:(id)arg2 ;
-(void)_destroyProvisioningContext;
-(unsigned)_fairPlayContext;
-(id)_getMediaAccountIds;
-(BOOL)_hasValidOfflineKeyWithAccountID:(unsigned long long)arg1 ;
-(id)_syncDeviceProvisioningWithSim:(id)arg1 srm:(id*)arg2 ;
-(id)_provisionDeviceWithData:(id)arg1 clientData:(id*)arg2 ;
-(double)_getSubscriptionStatusRefreshInterval;
-(id)_initiateBeginKeybagSyncOnMessageLink:(id)arg1 ;
-(id)_sendServerRequestWithProvisioningClientData:(id)arg1 clientGuid:(id)arg2 clientMid:(id)arg3 transactionType:(unsigned)arg4 messageLink:(id)arg5 ;
-(void)_sendSubcriptionBagToClientOnMessageLink:(id)arg1 subsBag:(id)arg2 ;
-(void)_updateLastServerEmptyResponseTimeStamp;
-(void)_sendServerProvisioningDataOnMessageLink:(id)arg1 serverData:(id)arg2 settingInfo:(id)arg3 transportKey:(id)arg4 transactionType:(unsigned)arg5 ;
-(id)_processServerResponse:(id)arg1 messageLink:(id)arg2 ;
-(void)_handleKeybagRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleSubscriptionClientInfoRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleSubscriptionImportSubsBagRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleProvisioningRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleBeginKeybagSyncRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_initiateKeybagSyncWithPriority:(int)arg1 ;
-(void)_processKeybagResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(id)_getApplicationAccountIds;
-(id)_getKeybagAccountIds;
-(void)_updateLastImportTimeStamp;
-(void)_handleContentsChangedNotification:(id)arg1 ;
-(void)_getMid:(id*)arg1 otp:(id*)arg2 ;
-(id)_hostSyncPrepareKeybagResponseForRequest:(id)arg1 withDeviceCertificate:(id)arg2 hwInfoString:(id)arg3 deviceType:(unsigned)arg4 supportVersion:(unsigned)arg5 keyBagResponseData:(id*)arg6 ;
-(id)_generateHostInfoWithTransactionType:(unsigned)arg1 machineID:(id)arg2 hostInfoData:(id*)arg3 ;
-(id)_generateSubscriptionSyncRequestWithClientData:(id)arg1 requestData:(id*)arg2 ;
-(id)_sendServerRequestWithSbSync:(id)arg1 clientGuid:(id)arg2 clientDt:(id)arg3 clientMid:(id)arg4 clientOtp:(id)arg5 clientVersion:(id)arg6 transactionType:(unsigned)arg7 messageLink:(id)arg8 ;
-(id)_generateClientInfoWithMachineID:(id)arg1 hostInfoData:(id)arg2 clientData:(id*)arg3 ;
-(id)_endProvisioningWithPtm:(id)arg1 tk:(id)arg2 ;
-(void)_destroyFairPlayContext;
-(void)_handleKeybagSyncRequestNotification:(id)arg1 ;
-(id)_initiateKeybagRequestOnMessageLink:(id)arg1 ;
-(id)_initiateSubscriptionSyncOnMessageLink:(id)arg1 transactionType:(unsigned)arg2 ;
-(id)_importKeybag:(id)arg1 ;
-(id)_importSubsBag:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)supportedDataclasses;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)applicationsDidInstall:(id)arg1 ;
@end

