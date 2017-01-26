/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionProviderContext.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderHostProtocol.h>

@protocol OS_dispatch_source;
@class NEIPC, NSObject, NSString;

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol> {

	NEIPC* _ipc;
	NSObject*<OS_dispatch_source> _ipcIdleTimer;

}

@property (retain) NEIPC * ipc;                                             //@synthesize ipc=_ipc - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> ipcIdleTimer;              //@synthesize ipcIdleTimer=_ipcIdleTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)cancelWithError:(id)arg1 ;
-(void)establishIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)didSetReasserting:(BOOL)arg1 ;
-(void)setTunnelConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleIPCDetached;
-(NEIPC *)ipc;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIpc:(NEIPC *)arg1 ;
-(NSObject*<OS_dispatch_source>)ipcIdleTimer;
-(void)setIpcIdleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)resetIPCIdleTimer;
@end

