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

@interface AmbientLightSensorComponent : ContextAwareObject <tGraphDataSource> {

	int previousSunlightLoadingIndexValue;
	int sunlightLoadingIndexValue;
	int thermalSunlightStateToken;
	int temperature;
	int ALS_FS;
	int ALS_IR;
	int IR_PRED;
	CFArrayRef array;
	IOHIDServiceClientRef service;

}

@property (nonatomic,readonly) int temperature; 
@property (nonatomic,readonly) int ALS_FS; 
@property (nonatomic,readonly) int ALS_IR; 
@property (nonatomic,readonly) int IR_PRED; 
-(BOOL)isContextTriggered;
-(int)ALS_IR;
-(BOOL)synchContext;
-(int)getContextState;
-(void)initHIDServices;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(int)ALS_FS;
-(int)IR_PRED;
-(void)dealloc;
-(id)init;
-(int)temperature;
@end

