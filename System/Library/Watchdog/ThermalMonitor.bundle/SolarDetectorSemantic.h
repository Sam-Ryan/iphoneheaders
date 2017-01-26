/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ContextAwareObject.h>
#import <ThermalMonitor/tGraphDataSource.h>

@class BrightnessSystemClient;

@interface SolarDetectorSemantic : ContextAwareObject <tGraphDataSource> {

	BrightnessSystemClient* _brightnessSystemClient;
	int _thermalSunlightStateToken;
	int _currentSemanticAmbientLightLevel;

}
-(BOOL)isContextTriggered;
-(BOOL)synchContext;
-(int)getContextState;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(void)updateCurrentSemanticAmbientLightLevel:(int)arg1 ;
-(void)initializeSemanticBrightnessHandling;
-(void)handleBrightnessClientNotification:(id)arg1 value:(id)arg2 ;
-(id)init;
@end

