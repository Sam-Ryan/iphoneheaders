/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACXInstallOperationDelegateProtocol.h>

@class NSDictionary, NSString, NSXPCConnection;

@interface ACXInstallOperation : NSObject <ACXInstallOperationDelegateProtocol> {

	BOOL _installPlaceholder;
	/*^block*/id _progressBlock;
	NSDictionary* _appSettingsDict;
	NSString* _bundleID;
	NSXPCConnection* _xpcConnection;
	/*^block*/id _completionBlock;

}

@property (copy) id progressBlock;                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (retain) NSDictionary * appSettingsDict;                  //@synthesize appSettingsDict=_appSettingsDict - In the implementation block
@property (assign) BOOL installPlaceholder;                         //@synthesize installPlaceholder=_installPlaceholder - In the implementation block
@property (readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)installOperationForBundleIdentifier:(id)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(void)callCompletionBlockWithError:(id)arg1 ;
-(void)callProgressBlockWithPhase:(unsigned long long)arg1 percentComplete:(double)arg2 ;
-(NSDictionary *)appSettingsDict;
-(BOOL)installPlaceholder;
-(void)beginWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAppSettingsDict:(NSDictionary *)arg1 ;
-(void)setInstallPlaceholder:(BOOL)arg1 ;
-(NSXPCConnection *)xpcConnection;
@end

