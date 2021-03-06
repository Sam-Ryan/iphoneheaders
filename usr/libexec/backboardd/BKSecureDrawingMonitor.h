/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BKSecureDrawingMonitor : NSObject {

	BOOL _secureModeEnabled;

}

@property (getter=isSecureModeEnabled) BOOL secureModeEnabled;              //@synthesize secureModeEnabled=_secureModeEnabled - In the implementation block
+(id)sharedInstance;
-(void)startMonitoringSecureDrawing;
-(void)setSecureModeEnabled:(BOOL)arg1 ;
-(void)reportAndKillInsecureProcesses;
-(BOOL)isSecureModeEnabled;
@end

