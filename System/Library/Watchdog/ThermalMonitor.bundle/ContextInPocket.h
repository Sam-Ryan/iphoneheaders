/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:06:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ContextAwareObject.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ContextInPocket : ContextAwareObject <tGraphDataSource> {

	BOOL contextIsActive;
	BOOL connectedExternally;
	BOOL backlightIsOn;
	BOOL audioIsOn;
	BOOL powerIsOn;
	int mitigationControllerListID;
	int _displayToken;
	int _audioRunningToken;
	unsigned pmuPowerService;
	unsigned _notification;
	unsigned _ioIterator;
	IONotificationPortRef notificationPort;
	NSObject*<OS_dispatch_queue> _inPocketQueue;

}

@property (assign,nonatomic) BOOL contextIsActive; 
@property (assign,nonatomic) BOOL connectedExternally; 
@property (assign,nonatomic) BOOL backlightIsOn; 
@property (assign,nonatomic) BOOL audioIsOn; 
@property (assign,nonatomic) BOOL powerIsOn; 
@property (assign,nonatomic) int mitigationControllerListID; 
@property (assign,nonatomic) int displayToken;                                        //@synthesize displayToken=_displayToken - In the implementation block
@property (assign,nonatomic) int audioRunningToken;                                   //@synthesize audioRunningToken=_audioRunningToken - In the implementation block
@property (assign,nonatomic) unsigned pmuPowerService; 
@property (assign,nonatomic) IONotificationPortRef notificationPort; 
@property (assign,nonatomic) unsigned notification;                                   //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) unsigned ioIterator;                                     //@synthesize ioIterator=_ioIterator - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> inPocketQueue;              //@synthesize inPocketQueue=_inPocketQueue - In the implementation block
-(void)initAudioHandling;
-(void)setContextIsActive:(BOOL)arg1 ;
-(BOOL)connectedExternally;
-(void)setMitigationControllerListID:(int)arg1 ;
-(void)initPowerHandling;
-(int)mitigationControllerListID;
-(void)setBacklightIsOn:(BOOL)arg1 ;
-(IONotificationPortRef)notificationPort;
-(int)audioRunningToken;
-(void)setAudioRunningToken:(int)arg1 ;
-(void)setNotificationPort:(IONotificationPortRef)arg1 ;
-(void)setInPocketQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateContextActiveState;
-(void)setConnectedExternally:(BOOL)arg1 ;
-(BOOL)isContextTriggered;
-(void)setPmuPowerService:(unsigned)arg1 ;
-(void)initBacklightHandling;
-(BOOL)backlightIsOn;
-(BOOL)audioIsOn;
-(BOOL)powerIsOn;
-(unsigned)pmuPowerService;
-(void)setPowerIsOn:(BOOL)arg1 ;
-(void)setAudioIsOn:(BOOL)arg1 ;
-(BOOL)synchContext;
-(BOOL)contextIsActive;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(int)getContextState;
-(NSObject*<OS_dispatch_queue>)inPocketQueue;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(unsigned)ioIterator;
-(void)setIoIterator:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)notification;
-(void)setNotification:(unsigned)arg1 ;
-(void)setDisplayToken:(int)arg1 ;
-(int)displayToken;
@end

