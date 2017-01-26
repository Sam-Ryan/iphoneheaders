/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/UABestAppSuggestionManagerProtocol.h>

@class UACornerActionManager, NSXPCConnection, UAAuditToken, NSString;

@interface UABestAppSuggestionClientProcess : NSObject <NSXPCConnectionDelegate, UABestAppSuggestionManagerProtocol> {

	UACornerActionManager* _manager;
	NSXPCConnection* _connection;
	UAAuditToken* _auditToken;

}

@property (retain,readonly) UACornerActionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (retain) UAAuditToken * auditToken;                             //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 connection:(id)arg2 ;
-(UACornerActionManager *)manager;
-(void)doConnected;
-(void)doStartBestAppSuggestion:(double)arg1 ;
-(void)doDetermineBestAppSuggestionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)doRemoveBestAppSuggestion:(id)arg1 options:(id)arg2 ;
-(void)doRegisterForBestAppChangeNotification;
-(void)doUnregisterForBestAppChangeNotification;
-(void)doQueueFetchOfPayloadForBestAppSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)doLaunchFollowUp:(id)arg1 interactionType:(unsigned long long)arg2 cancelled:(BOOL)arg3 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(UAAuditToken *)auditToken;
-(void)setAuditToken:(UAAuditToken *)arg1 ;
@end
