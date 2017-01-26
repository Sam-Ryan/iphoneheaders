/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, PKEntitlementWhitelist;

@interface NPKPassLibraryFilter : NSObject {

	NSXPCConnection* _connection;
	PKEntitlementWhitelist* _whitelist;

}

@property (readonly) BOOL allowsSilentAdd; 
@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) PKEntitlementWhitelist * whitelist;              //@synthesize whitelist=_whitelist - In the implementation block
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(PKEntitlementWhitelist *)whitelist;
-(void)setWhitelist:(PKEntitlementWhitelist *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)allowAccessToPass:(id)arg1 ;
-(BOOL)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2 ;
-(id)filterPassIfNeeded:(id)arg1 ;
-(BOOL)allowsSilentAdd;
@end

