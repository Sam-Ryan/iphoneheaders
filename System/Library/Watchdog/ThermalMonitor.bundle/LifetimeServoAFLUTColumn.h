/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LifetimeServoAFLUTColumn : NSObject {

	int _voltage;
	int _rowCount;
	int _temperatures[12];
	float _accelerationFactors[12];

}
-(float)accelerationFactor:(int)arg1 ;
-(id)initWithLUTColumn:(id)arg1 voltage:(int)arg2 ;
-(int)voltage;
@end
