/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSString, GCGamepad, GCExtendedGamepad, GCMotion, NSArray;

@interface GCController : NSObject

@property (nonatomic,copy) id controllerPausedHandler; 
@property (retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (getter=isAttachedToDevice,nonatomic,readonly) BOOL attachedToDevice; 
@property (assign,nonatomic) long long playerIndex; 
@property (nonatomic,retain,readonly) GCGamepad * gamepad; 
@property (nonatomic,retain,readonly) GCExtendedGamepad * extendedGamepad; 
@property (nonatomic,retain,readonly) GCMotion * motion; 
@property (nonatomic,retain) id<GCNamedProfile> profile; 
@property (nonatomic,readonly) IOHIDDeviceRef deviceRef; 
@property (nonatomic,retain,readonly) NSArray * deviceRefs; 
@property (nonatomic,readonly) unsigned service; 
@property (assign,nonatomic) char* hidReportBuffer; 
+(id)controllers;
+(void)__daemon__appDidEnterBackground;
+(void)__daemon__appWillEnterForeground;
+(void)_startWirelessControllerDiscoveryWithCompanions:(BOOL)arg1 btClassic:(BOOL)arg2 btle:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)__open__;
+(void)__openXPC__;
+(void)__setLogger__:(/*^block*/id)arg1 ;
+(void)__daemon__startBonjourService;
+(void)__daemon__setUserActivityUserInfo:(id)arg1 ;
+(void)__daemon__requestConnectedHostUpdatesWithHandler:(/*^block*/id)arg1 ;
+(void)__daemon__addController:(id)arg1 ;
+(void)__daemon__removeController:(id)arg1 ;
+(void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)stopWirelessControllerDiscovery;
-(IOHIDDeviceRef)deviceRef;
-(void)setProfile:(id<GCNamedProfile>)arg1 ;
-(unsigned)sampleRate;
-(GCMotion *)motion;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(NSString *)vendorName;
-(unsigned long long)deviceHash;
-(id<GCNamedProfile>)profile;
-(unsigned)service;
-(BOOL)supportsMotionLite;
-(void)addDeviceRefs:(id)arg1 ;
-(BOOL)isForwarded;
-(id)controllerPausedHandler;
-(void)setControllerPausedHandler:(id)arg1 ;
-(BOOL)isAttachedToDevice;
-(NSArray *)deviceRefs;
-(char*)hidReportBuffer;
-(void)setHidReportBuffer:(char*)arg1 ;
-(BOOL)isEqualToController:(id)arg1 ;
-(void)removeDeviceRef:(IOHIDDeviceRef)arg1 ;
-(GCGamepad *)gamepad;
-(GCExtendedGamepad *)extendedGamepad;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

