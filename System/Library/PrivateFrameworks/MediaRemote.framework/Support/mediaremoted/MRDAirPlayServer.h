/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDXPCMessageHandling.h>

@class NSMutableSet, MRDNowPlayingDataSource, MSVSystemDialog, NSString;

@interface MRDAirPlayServer : NSObject <MRDXPCMessageHandling> {

	int _externalScreenTypeDidChangeToken;
	BOOL _overrideRouteDiscoveryMode;
	NSMutableSet* _routeHashesToIgnorePortStatusFailures;
	unsigned long long _routeHashForAlreadyDisplayedBusyAlert;
	MRDNowPlayingDataSource* _nowPlayingDataSource;
	MSVSystemDialog* _activePasswordDialog;

}

@property (nonatomic,readonly) MRDNowPlayingDataSource * nowPlayingDataSource;              //@synthesize nowPlayingDataSource=_nowPlayingDataSource - In the implementation block
@property (nonatomic,retain) MSVSystemDialog * activePasswordDialog;                        //@synthesize activePasswordDialog=_activePasswordDialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNowPlayingDataSource:(id)arg1 ;
-(void)pickRouteWithUID:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(MRDNowPlayingDataSource *)nowPlayingDataSource;
-(void)_registerAVSystemControllerNotifications;
-(void)_updateSystemRouteDiscoveryMode;
-(void)_unregisterAVSystemControllerNotifications;
-(BOOL)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned)arg3 ;
-(void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_postExternalScreenDidChange;
-(void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_handleBusyStatusForRoute:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_clientInvalidatedNotification:(id)arg1 ;
-(void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1 ;
-(void)_externalScreenDidChangeNotification:(id)arg1 ;
-(void)_avSystemControllerServerDiedNotification:(id)arg1 ;
-(void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)setActivePasswordDialog:(MSVSystemDialog *)arg1 ;
-(BOOL)routeIsActiveWithUID:(id)arg1 ;
-(MSVSystemDialog *)activePasswordDialog;
-(void)dealloc;
-(id)init;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_portStatusDidChangeNotification:(id)arg1 ;
@end
