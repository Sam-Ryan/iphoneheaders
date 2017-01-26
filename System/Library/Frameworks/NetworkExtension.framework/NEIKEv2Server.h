/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface NEIKEv2Server : NSObject <NSObject> {

	unsigned _redirects;
	NSString* _serverAddress;
	NSString* _resolvedAddress;
	NSString* _redirectedAddress;
	NSString* _resolvedRedirectedAddress;
	NSString* _redirectedFromAddress;
	NSObject*<OS_dispatch_source> _redirectTimer;

}

@property (retain) NSString * serverAddress;                                 //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSString * resolvedAddress;                               //@synthesize resolvedAddress=_resolvedAddress - In the implementation block
@property (retain) NSString * redirectedAddress;                             //@synthesize redirectedAddress=_redirectedAddress - In the implementation block
@property (retain) NSString * resolvedRedirectedAddress;                     //@synthesize resolvedRedirectedAddress=_resolvedRedirectedAddress - In the implementation block
@property (retain) NSString * redirectedFromAddress;                         //@synthesize redirectedFromAddress=_redirectedFromAddress - In the implementation block
@property (assign) unsigned redirects;                                       //@synthesize redirects=_redirects - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> redirectTimer;              //@synthesize redirectTimer=_redirectTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)serverAddress;
-(void)setServerAddress:(NSString *)arg1 ;
-(id)getServerOrRedirectedAddress;
-(void)setServerOrRedirectedResolvedAddress:(id)arg1 ;
-(BOOL)startRedirectTimer;
-(BOOL)checkRedirectCount;
-(void)setRedirectedFromAddress:(NSString *)arg1 ;
-(void)setRedirectedAddress:(NSString *)arg1 ;
-(NSString *)redirectedAddress;
-(void)stopRedirectTimer;
-(void)setRedirects:(unsigned)arg1 ;
-(NSString *)resolvedAddress;
-(void)setResolvedAddress:(NSString *)arg1 ;
-(NSString *)resolvedRedirectedAddress;
-(void)setResolvedRedirectedAddress:(NSString *)arg1 ;
-(NSString *)redirectedFromAddress;
-(unsigned)redirects;
-(NSObject*<OS_dispatch_source>)redirectTimer;
-(void)setRedirectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

