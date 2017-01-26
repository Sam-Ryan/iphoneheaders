/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NACEventThrottler, NACRunAssertion, NSMutableDictionary, NSArray, IDSService, NSObject, NSString;

@interface NACIDSServer : NSObject <IDSServiceDelegate, MPVolumeControllerDelegate, MPAVRoutingControllerDelegate> {

	NACEventThrottler* _hapticThrottler;
	NACRunAssertion* _volumeRunAssertion;
	NSMutableDictionary* _volumeObservers;
	NSMutableDictionary* _routesObservers;
	NSMutableDictionary* _messageRecords;
	NSArray* _volumeAudioCategories;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _idsDispatchQueue;
	BOOL _shouldObserveHapticIntensity;
	BOOL _shouldObserveSystemMutedState;
	BOOL _isSystemMuted;
	int _systemMuteToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)initWithVolumeAudioCategories:(id)arg1 ;
-(void)beginObservingHapticIntensity;
-(void)beginObservingSystemMutedState;
-(void)_handleSetMuted:(id)arg1 ;
-(void)_handleSetHapticIntensity:(id)arg1 ;
-(void)_handleBeginObservingVolume:(id)arg1 ;
-(void)_handleEndObservingVolume:(id)arg1 ;
-(void)_handleBeginObservingAudioRoutes:(id)arg1 ;
-(void)_handleEndObservingAudioRoutes:(id)arg1 ;
-(void)_handleSetSystemMuted:(id)arg1 ;
-(void)_beginObservingVolume;
-(BOOL)_hasRequestedVolumeAtLeastOnce;
-(void)_sendVolumeValue:(float)arg1 category:(id)arg2 ;
-(void)_sendVolumeWarningEnabled:(BOOL)arg1 category:(id)arg2 ;
-(void)_sendEUVolumeLimit:(float)arg1 category:(id)arg2 ;
-(void)_sendHapticIntensity:(float)arg1 ;
-(void)_hapticIntensityDidChangeNotification:(id)arg1 ;
-(void)_updateSystemMutedState;
-(void)_sendSystemMutedState:(BOOL)arg1 ;
-(void)_setRequestedVolumeAtLeastOnce;
-(void)_cancelVolumeObservation;
-(void)_cancelRouteObservationForCategory:(id)arg1 ;
-(void)_sendMessage:(id)arg1 type:(long long)arg2 timeout:(double)arg3 queueOne:(id)arg4 retry:(BOOL)arg5 ;
-(BOOL)_shouldForceVolumeWarning;
-(void)_handlePickAudioRoute:(id)arg1 ;
-(void)_handleSetVolume:(id)arg1 ;
@end

