/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AOSXPCServerProtocol <NSObject>
@required
-(oneway void)getFMFDeviceIdUsingCallback:(/*^block*/id)arg1;
-(oneway void)didChangeFMFAccountInfo:(id)arg1 usingCallback:(/*^block*/id)arg2;
-(oneway void)locationAuthorizationForShareMyLocationUsingCallback:(/*^block*/id)arg1;
-(oneway void)willDeleteiCloudAccountUsingCallback:(/*^block*/id)arg1;
-(oneway void)retrieveFMFAccountUsingCallback:(/*^block*/id)arg1;

@end

