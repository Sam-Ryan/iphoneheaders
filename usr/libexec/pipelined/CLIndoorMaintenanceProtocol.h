/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIndoorMaintenanceProtocol <NSObject>
@required
-(void)shutdown;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1;
-(void)prefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3;
-(void)eraseAllData:(/*^block*/id)arg1;
-(void)clearTiles:(id)arg1 withCallback:(/*^block*/id)arg2;
-(void)numFloors:(/*^block*/id)arg1;

@end
