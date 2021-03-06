/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate;
@class NSArray, MPAVRoute, NSMutableArray, NSString;

@interface MPAVRoutingController : NSObject {

	NSArray* _cachedRoutes;
	MPAVRoute* _cachedPickedRoute;
	NSMutableArray* _asyncFetchingCompletionHandlers;
	BOOL _asyncFetchingRoutes;
	long long _externalScreenType;
	BOOL _hasExternalScreenType;
	BOOL _scheduledSendDelegateRoutesChanged;
	BOOL _pickedRouteHasVolumeControl;
	BOOL _hasVolumeControlInfoForPickedRoute;
	int _deviceAvailabilityNotifyToken;
	BOOL _deviceAvailabilityOverrideState;
	id<MPAVRoutingControllerDelegate> _delegate;
	NSString* _name;
	long long _discoveryMode;
	NSString* _category;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                        //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) long long externalScreenType; 
@property (nonatomic,copy,readonly) NSArray * availableRoutes; 
@property (nonatomic,copy) NSString * category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) MPAVRoute * pickedRoute; 
@property (nonatomic,readonly) BOOL volumeControlIsAvailable; 
-(void)setDelegate:(id<MPAVRoutingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MPAVRoutingControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)initWithName:(id)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(BOOL)pickBestDeviceRoute;
-(MPAVRoute *)pickedRoute;
-(void)clearCachedRoutes;
-(long long)externalScreenType;
-(NSArray *)availableRoutes;
-(BOOL)airtunesRouteIsPicked;
-(BOOL)wirelessDisplayRouteIsPicked;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(BOOL)routeOtherThanHandsetAvailable;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)_setExternalScreenType:(long long)arg1 ;
-(void)_updateCachedRoutes;
-(id)_parseAVRouteDescriptions:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)pickRoute:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(id)videoRouteForRoute:(id)arg1 ;
-(BOOL)pickHandsetRoute;
-(BOOL)pickSpeakerRoute;
-(BOOL)speakerRouteIsPicked;
-(BOOL)handsetRouteIsPicked;
-(BOOL)receiverRouteIsPicked;
-(BOOL)wirelessDisplayRoutesAvailable;
-(void)logCurrentRoutes;
-(long long)discoveryMode;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(BOOL)volumeControlIsAvailable;
@end

