/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/RadioDefaultController.h>

@interface RadioController : RadioDefaultController {

	BOOL radioTransmitting;
	CFStringRef currentRadioTechnology;
	/*function pointer*/void* ctCallBack;
	CTServerConnectionRef serverConnection;
	int currentTransmitPowerLevel;
	int transmitPowerCeiling;

}
-(BOOL)getRadioTransmit;
-(void)registerForNotificationChange;
-(void)setCallDropLimit:(int)arg1 ;
-(void)updateCurrentRadioTechnology;
-(int)setMaxTransmitPower:(int)arg1 ;
-(void)setMaxTransmitPower;
-(void)enableDataCollection:(BOOL)arg1 ;
-(BOOL)getTemperature:(int)arg1 :(int*)arg2 :(int*)arg3 ;
-(void)updatePeriodicUpdateCT;
-(CFStringRef)getCurrentRadioTechnology;
-(void)registerForNotificationTransmit;
-(void)initDataCollection;
-(void)createServerConnection;
-(void)set_transmit_power_level;
-(void)release_server_connection;
-(void)updatePowerCeiling:(int)arg1 ;
-(void)updatePeriodicUpdateCT:(int)arg1 ;
-(void)setCallDropLimit;
-(int)set_transmit_power_level:(int)arg1 ;
-(void)initializeRadio;
-(void)registerForStatusNotificationChange;
-(id)init:(/*function pointer*/void*)arg1 ;
-(void)dealloc;
@end

