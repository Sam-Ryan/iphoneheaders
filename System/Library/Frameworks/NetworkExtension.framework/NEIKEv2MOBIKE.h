/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source;
@class NEIKEv2PacketTunnelProvider, NSObject, NSString;

@interface NEIKEv2MOBIKE : NSObject <NSObject> {

	BOOL _mobikeCapable;
	BOOL _mobikeRunning;
	unsigned _mobikeRetries;
	NEIKEv2PacketTunnelProvider* _ikev2TunnelProvider;
	NSObject*<OS_dispatch_source> _mobikeTimer;

}

@property (assign) BOOL mobikeCapable;                                             //@synthesize mobikeCapable=_mobikeCapable - In the implementation block
@property (__weak) NEIKEv2PacketTunnelProvider * ikev2TunnelProvider;              //@synthesize ikev2TunnelProvider=_ikev2TunnelProvider - In the implementation block
@property (assign) BOOL mobikeRunning;                                             //@synthesize mobikeRunning=_mobikeRunning - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> mobikeTimer;                      //@synthesize mobikeTimer=_mobikeTimer - In the implementation block
@property (assign) unsigned mobikeRetries;                                         //@synthesize mobikeRetries=_mobikeRetries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)ikev2MOBIKECleanup;
-(void)setMobikeCapable:(BOOL)arg1 ;
-(id)initWithTunnelProvider:(id)arg1 ;
-(BOOL)ikev2MOBIKESetup:(BOOL)arg1 ifChange:(BOOL)arg2 ;
-(BOOL)ikev2MOBIKESkipTunnelNetworkSettingsUpdate;
-(NEIKEv2PacketTunnelProvider *)ikev2TunnelProvider;
-(void)ikev2MOBIKEStopTimer;
-(unsigned)mobikeRetries;
-(void)ikev2MOBIKEFailed;
-(NSObject*<OS_dispatch_source>)mobikeTimer;
-(void)ikev2MOBIKEReassert;
-(void)setMobikeRetries:(unsigned)arg1 ;
-(void)ikev2MOBIKEStart:(unsigned long long)arg1 pathStatus:(long long)arg2 persist:(unsigned char)arg3 ;
-(void)setMobikeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)mobikeCapable;
-(BOOL)mobikeRunning;
-(void)setMobikeRunning:(BOOL)arg1 ;
-(void)setIkev2TunnelProvider:(NEIKEv2PacketTunnelProvider *)arg1 ;
@end

