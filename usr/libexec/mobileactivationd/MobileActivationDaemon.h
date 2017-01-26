/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:25 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/mobileactivationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <mobileactivationd/MobileActivationProtocol.h>

@protocol OS_dispatch_queue;
@class DataArk, NSObject, NSString;

@interface MobileActivationDaemon : NSObject <NSXPCListenerDelegate, MobileActivationProtocol> {

	void* _session;
	DataArk* _dark;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) void* session;                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) DataArk * dark;                                  //@synthesize dark=_dark - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DataArk *)dark;
-(void)setDark:(DataArk *)arg1 ;
-(void)validateActivationDataSignature:(id)arg1 activationSignature:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithContext:(id)arg1 Queue:(id)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void*)session;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(void*)arg1 ;
-(void)createTunnel1ActivationInfo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)createTunnel1SessionInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)createActivationInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)handleActivationInfo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)isDeviceBrickedWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)deactivateDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestDeviceReactivationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getActivationStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getActivationBuildWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)createReCertInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)handleReCertInfo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)copyRegulatoryImagesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)copyActivationRecordWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)unbrickDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recertifyDevice:(BOOL)arg1 WithCompletionBlock:(/*^block*/id)arg2 ;
-(void)createSessionInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)handleSessionResponse:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)createActivationInfoWithSession:(/*^block*/id)arg1 ;
-(void)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end
