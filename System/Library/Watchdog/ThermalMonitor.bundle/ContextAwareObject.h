/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ContextAwareObject : NSObject {

	int ctxType;

}

@property (nonatomic,readonly) int ctxType; 
-(BOOL)isContextTriggered;
-(BOOL)synchContext;
-(int)ctxType;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(int)getContextState;
-(id)initCTXBase;
@end

