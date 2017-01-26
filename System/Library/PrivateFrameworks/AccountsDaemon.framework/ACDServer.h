/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ACDAccountStoreDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSXPCListener, NSMutableArray, NSMutableDictionary, NSObject, ACDAuthenticationPluginManager, ACDAccessPluginManager, ACDDataclassOwnersManager, ACDAuthenticationDialogManager, ACRemoteDeviceProxy, NSString;

@interface ACDServer : NSObject <NSXPCListenerDelegate, ACDAccountStoreDelegate> {

	NSXPCListener* _accountStoreListener;
	NSXPCListener* _oauthSignerListener;
	NSXPCListener* _authenticationDialogListener;
	NSMutableArray* _accountStoreClients;
	NSMutableArray* _oauthSignerClients;
	NSMutableArray* _authenticationDialogManagerClients;
	NSMutableDictionary* _entitlementsByConnection;
	NSMutableDictionary* _clientsByConnection;
	NSObject*<OS_dispatch_queue> _deferredConnectionResumeQueue;
	NSObject*<OS_dispatch_semaphore> _deferredConnectionResumeQueueSemaphore;
	NSObject*<OS_dispatch_queue> _performMigrationQueue;
	ACDAuthenticationPluginManager* _authenticationPluginManager;
	ACDAccessPluginManager* _accessPluginManager;
	ACDDataclassOwnersManager* _dataclassOwnersManager;
	ACDAuthenticationDialogManager* _authenticationDialogManager;
	ACRemoteDeviceProxy* _remoteDeviceProxy;

}

@property (nonatomic,retain) ACDAuthenticationPluginManager * authenticationPluginManager;              //@synthesize authenticationPluginManager=_authenticationPluginManager - In the implementation block
@property (nonatomic,retain) ACDAccessPluginManager * accessPluginManager;                              //@synthesize accessPluginManager=_accessPluginManager - In the implementation block
@property (nonatomic,retain) ACDDataclassOwnersManager * dataclassOwnersManager;                        //@synthesize dataclassOwnersManager=_dataclassOwnersManager - In the implementation block
@property (nonatomic,retain) ACDAuthenticationDialogManager * authenticationDialogManager;              //@synthesize authenticationDialogManager=_authenticationDialogManager - In the implementation block
@property (nonatomic,retain) ACRemoteDeviceProxy * remoteDeviceProxy;                                   //@synthesize remoteDeviceProxy=_remoteDeviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)credentialsDidChangeForAccountWithIdentifier:(id)arg1 ;
-(ACDDataclassOwnersManager *)dataclassOwnersManager;
-(void)accountStoreDidSaveAccounts:(id)arg1 ;
-(ACDAuthenticationDialogManager *)authenticationDialogManager;
-(ACRemoteDeviceProxy *)remoteDeviceProxy;
-(void)setRemoteDeviceProxy:(ACRemoteDeviceProxy *)arg1 ;
-(ACDAuthenticationPluginManager *)authenticationPluginManager;
-(void)setAuthenticationPluginManager:(ACDAuthenticationPluginManager *)arg1 ;
-(ACDAccessPluginManager *)accessPluginManager;
-(void)setAccessPluginManager:(ACDAccessPluginManager *)arg1 ;
-(void)setDataclassOwnersManager:(ACDDataclassOwnersManager *)arg1 ;
-(void)setAuthenticationDialogManager:(ACDAuthenticationDialogManager *)arg1 ;
-(id)clientForConnection:(id)arg1 ;
-(id)entitlementsForConnection:(id)arg1 ;
-(void)setUpWithAccountStoreConnectionListener:(id)arg1 oauthSignerConnectionListener:(id)arg2 authenticationDialogConnectionListener:(id)arg3 ;
-(void)_signalDeferredConnectionResumeQueueSemaphore;
-(void)_beginObservingLanguageChangeNotfication;
-(void)_beginObservingLaunchNotifications;
-(void)_beginObservingIDSProxyNotifications;
-(void)_stopObservingLanguageChangeNotification;
-(id)_keyForConnection:(id)arg1 ;
-(id)_enumerateAllEntitlementForConnection:(id)arg1 ;
-(id)createClientForConnection:(id)arg1 ;
-(id)_newDaemonAccountStoreFilterForClient:(id)arg1 ;
-(id)_newOAuthSignerForClient:(id)arg1 ;
-(void)shutdown;
@end

