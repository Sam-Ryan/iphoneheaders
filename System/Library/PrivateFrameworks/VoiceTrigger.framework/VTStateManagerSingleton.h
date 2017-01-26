/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, _VTSiriEnabledPolicy, _VTVoiceTriggerEnabledPolicy, _VTSpringBoardStartedPolicy, _VTFirstUnlockAfterRebootPolicy, _VTSiriAssertionPolicy, _VTBatteryPolicy, _VTLowPowerModePolicy, _VTOTASoftwareUpdateCheckingPolicy, _VTLockscreenPolicy;

@interface VTStateManagerSingleton : NSObject {

	NSMutableSet* _instances;
	NSObject*<OS_dispatch_queue> _queue;
	_VTSiriEnabledPolicy* _siriEnabledPolicy;
	_VTVoiceTriggerEnabledPolicy* _vtEnabledPolicy;
	_VTSpringBoardStartedPolicy* _springboardPolicy;
	_VTFirstUnlockAfterRebootPolicy* _firstUnlockAfterRebootPolicy;
	_VTSiriAssertionPolicy* _siriAssertionPolicy;
	_VTBatteryPolicy* _batteryPolicy;
	_VTLowPowerModePolicy* _lowPowerModePolicy;
	_VTOTASoftwareUpdateCheckingPolicy* _softwareUpdateCheckingPolicy;
	_VTLockscreenPolicy* _lockscreenPolicy;
	BOOL _voiceTriggerIsEnabled;
	BOOL _batteryPolicyOverriden;

}
+(void)initialize;
+(id)singleton;
-(void)dealloc;
-(id)_init;
-(void)_handlePolicyUpdate:(id)arg1 ;
-(void)_stateTransitionDidOccur:(BOOL)arg1 ;
-(void)_powerlog:(id)arg1 ;
-(void)register:(id)arg1 ;
-(void)unregister:(id)arg1 ;
@end

