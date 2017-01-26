/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProviderInternal, CDPDCircleDelegate, CDPDCircleProxy;
@class CDPDCircleStateObserver;

@interface CDPDCircleController : NSObject {

	CDPDCircleStateObserver* _circleJoinObserver;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPDCircleDelegate> _delegate;
	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CDPDCircleDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;                        //@synthesize circleProxy=_circleProxy - In the implementation block
-(id)peerID;
-(void)setDelegate:(id<CDPDCircleDelegate>)arg1 ;
-(void)dealloc;
-(id<CDPDCircleDelegate>)delegate;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(BOOL)synchronizeCircleViews;
-(int)circleStatus;
-(void)joinCDPCircleIgnoringBackups:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_joinCDPCircleIgnoringBackups:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_peerCount;
-(void)_resetCicleToResolvePendingAfterRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(id)_peerDeviceNamesByPeerID;
-(id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3 ;
-(void)prepareCircleStateForRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)joinCDPCircleWithCompletion:(/*^block*/id)arg1 ;
-(void)joinCircleAfterRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)useCircleInfoToUpdateNameForDevices:(id)arg1 ;
-(BOOL)applyToJoinCircleWithJoinHandler:(/*^block*/id)arg1 ;
-(void)cancelApplicationToJoinCircle;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
@end

