/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIViewServiceDeputyXPCInterface, OS_dispatch_queue;
@class _UIRemoteViewService, NSString, NSUUID, NSArray, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, NSObject, NSError;

@interface _UIRemoteViewControllerConnectionRequest : NSObject {

	_UIRemoteViewService* _service;
	/*^block*/id _handler;
	NSString* _viewServiceBundleIdentifier;
	NSString* _viewControllerClassName;
	NSUUID* _contextToken;
	NSArray* _serializedAppearanceCustomizations;
	BOOL _legacyAppearance;
	id _exportedHostingObject;
	Class _remoteViewControllerClass;
	id<_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
	_UIAsyncInvocation* _cancelInvocationForCurrentOperation;
	_UIRemoteViewControllerConnectionInfo* _connectionInfo;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isCancelledOrComplete;
	NSError* _error;
	_UIAsyncInvocation* _requestCancellationInvocation;

}
+(id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 legacyAppearance:(BOOL)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(/*^block*/id)arg8 ;
+(id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 legacyAppearance:(BOOL)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(/*^block*/id)arg7 ;
+(id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 legacyAppearance:(BOOL)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(/*^block*/id)arg7 ;
-(void)dealloc;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_connectToPlugInKitService;
-(void)_connectToViewService;
-(id)_cancelWithError:(id)arg1 ;
-(void)_connectToViewControllerOperator;
-(void)_sendServiceViewControllerRequest;
-(void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(void)_connectToTextEffectsOperator;
-(void)_connectToServiceViewController;
-(void)_sendServiceTextEffectsRequest;
-(void)_connectToViewControllerControlMessageDeputy;
-(void)_didFinishEstablishingConnection;
@end

