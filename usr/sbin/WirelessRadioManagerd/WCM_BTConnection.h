/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WCM_BTConnection : NSObject {

	NSString* mAddress;
	unsigned long long mConnectedServices;
	unsigned long long mDeviceType;
	unsigned char mRole;
	unsigned char mMode;
	unsigned short mConnTO;
	unsigned short mConnIntr;
	unsigned short mLatency;
	unsigned short mConnectedServicesCount;

}
-(unsigned long long)getRole;
-(id)getAddress;
-(void)updateConnectionInfo:(id)arg1 ;
-(void)manageServiceDisconnection;
-(unsigned long long)getServiceCount;
-(unsigned long long)getDeviceType;
-(unsigned long long)getMode;
-(unsigned long long)getServices;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)printInfo;
-(void)initWithAddress:(id)arg1 ;
@end

