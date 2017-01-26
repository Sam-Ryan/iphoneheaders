/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterExtensionProviderContext.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderHostProtocol.h>

@protocol OS_xpc_object, OS_dispatch_source;
@class NSObject, NSXPCListenerEndpoint, NSMutableDictionary, NSMutableArray, NSDictionary, NSString;

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol> {

	BOOL _controlProviderExists;
	NSObject*<OS_xpc_object> _clientListener;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSMutableDictionary* _browserFlows;
	NSMutableDictionary* _socketFlows;
	NSMutableArray* _socketExceptions;
	NSObject*<OS_dispatch_source> _source;
	NSDictionary* _remediationMap;
	NSDictionary* _URLAppendStringMap;
	NSMutableArray* _pendingConnections;

}

@property (assign) BOOL controlProviderExists;                               //@synthesize controlProviderExists=_controlProviderExists - In the implementation block
@property (retain) NSObject*<OS_xpc_object> clientListener;                  //@synthesize clientListener=_clientListener - In the implementation block
@property (retain) NSXPCListenerEndpoint * listenerEndpoint;                 //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (retain) NSMutableDictionary * browserFlows;                       //@synthesize browserFlows=_browserFlows - In the implementation block
@property (retain) NSMutableDictionary * socketFlows;                        //@synthesize socketFlows=_socketFlows - In the implementation block
@property (nonatomic,retain) NSMutableArray * socketExceptions;              //@synthesize socketExceptions=_socketExceptions - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> source;                     //@synthesize source=_source - In the implementation block
@property (retain) NSDictionary * remediationMap;                            //@synthesize remediationMap=_remediationMap - In the implementation block
@property (retain) NSDictionary * URLAppendStringMap;                        //@synthesize URLAppendStringMap=_URLAppendStringMap - In the implementation block
@property (retain) NSMutableArray * pendingConnections;                      //@synthesize pendingConnections=_pendingConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(void)dispose;
-(void)stopWithReason:(int)arg1 ;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)closeBrowserFilterFlow:(id)arg1 forUUID:(id)arg2 ;
-(void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleClientMessage:(id)arg1 forConnection:(id)arg2 ;
-(NSObject*<OS_xpc_object>)clientListener;
-(void)setClientListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)acceptNewClientConnection:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)handleRulesChanged;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)providerControlSocketFileHandle:(id)arg1 ;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setControlProviderExists:(BOOL)arg1 ;
-(void)setPendingConnections:(NSMutableArray *)arg1 ;
-(void)setRemediationMap:(NSDictionary *)arg1 ;
-(void)setURLAppendStringMap:(NSDictionary *)arg1 ;
-(void)closePendingConnections;
-(void)teardownSocketSource;
-(NSMutableDictionary *)browserFlows;
-(NSMutableArray *)socketExceptions;
-(void)setBrowserFlows:(NSMutableDictionary *)arg1 ;
-(id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3 ;
-(id)sanitizeRemediationButtonText:(id)arg1 ;
-(BOOL)controlProviderExists;
-(void)handleRemediationMessage:(id)arg1 forConnection:(id)arg2 ;
-(NSMutableArray *)pendingConnections;
-(NSMutableDictionary *)socketFlows;
-(BOOL)socketContentFilterWriteMessageWithControlSocket:(int)arg1 socketID:(unsigned long long)arg2 drop:(BOOL)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 ;
-(void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2 ;
-(void)handleSocketSourceEventWithSocket:(int)arg1 ;
-(void)setSocketFlows:(NSMutableDictionary *)arg1 ;
-(void)setupSocketSourceWithControlSocket:(int)arg1 ;
-(void)setupSocketContentFilterWithControlSocket:(int)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setSocketExceptions:(NSMutableArray *)arg1 ;
-(NSDictionary *)remediationMap;
-(NSDictionary *)URLAppendStringMap;
@end

