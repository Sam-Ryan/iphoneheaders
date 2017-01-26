/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NSSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)displayAlertWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 icon:(id)arg4 ;
+(void)displayAlertFailedRemoteAirplaneMode;
+(void)displayAirplaneModeMirroringUserEducationAlert;
-(void)enableAirplaneMode:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(id)connection;
-(id)protocol;
-(void)unsafe_invalidate;
-(void)setDeviceName:(id)arg1 ;
-(void)getUsage:(/*^block*/id)arg1 ;
-(void)getAboutInfo:(/*^block*/id)arg1 ;
-(void)obliterateGizmo:(/*^block*/id)arg1 ;
-(void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLegalDocuments:(/*^block*/id)arg1 ;
-(void)getLocalesInfo:(/*^block*/id)arg1 ;
-(void)purgeUsageBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAccountsInfo:(/*^block*/id)arg1 ;
-(void)getProfilesInfo:(/*^block*/id)arg1 ;
-(void)getProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)installProfile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rebootDevice;
-(void)removeProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)getiCloudInfo:(/*^block*/id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

