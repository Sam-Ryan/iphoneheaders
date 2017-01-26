/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSLock;

@interface WCM_Controller : NSObject {

	NSObject*<OS_xpc_object> mConnection;
	NSLock* mControllerLock;
	long long mProcessId;

}
-(void)sendMessage:(unsigned long long)arg1 withArgs:(id)arg2 ;
-(unsigned long long)getProcessId;
-(void)initWithConnection:(id)arg1 processId:(long long)arg2 ;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)releaseConnection;
@end
