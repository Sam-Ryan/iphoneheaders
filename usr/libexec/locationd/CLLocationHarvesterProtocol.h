/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationHarvesterProtocol <CLIntersiloServiceProtocol>
@required
-(void)submitRealTimeHarvestMetrics;
-(void)setHarvestingEnabled:(BOOL)arg1;
-(void)doAsync:(/*^block*/id)arg1;
-(void)setPrivateMode:(BOOL)arg1;
-(void)shutdown;

@end
