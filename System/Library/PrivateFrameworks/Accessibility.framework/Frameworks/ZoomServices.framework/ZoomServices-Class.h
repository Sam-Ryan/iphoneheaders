/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/ZoomServices.framework/ZoomServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomServices/ZoomServices-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@protocol ZoomServicesDelegate;
@class NSMutableArray, AXUIClient, NSString;

@interface ZoomServices : NSObject <AXUIClientDelegate> {

	NSMutableArray* _zoomListeners;
	BOOL _showingZoomLens;
	BOOL _registeredForZoomListener;
	AXUIClient* _zoomWindowClient;
	id<ZoomServicesDelegate> _delegate;

}

@property (assign,nonatomic) id<ZoomServicesDelegate> delegate; 
@property (getter=isShowingZoomLens,nonatomic,readonly) BOOL showingZoomLens; 
@property (nonatomic,retain) AXUIClient * zoomWindowClient;                                //@synthesize zoomWindowClient=_zoomWindowClient - In the implementation block
@property (assign,getter=isShowingZoomLens,nonatomic) BOOL showingZoomLens;                //@synthesize showingZoomLens=_showingZoomLens - In the implementation block
@property (assign,nonatomic) id<ZoomServicesDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL registeredForZoomListener;                               //@synthesize registeredForZoomListener=_registeredForZoomListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)showZoomLens;
-(void)hideZoomLens;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)setDelegate:(id<ZoomServicesDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ZoomServicesDelegate>)delegate;
-(double)zoomLevel;
-(void)_zoomChanged:(id)arg1 ;
-(AXUIClient *)zoomWindowClient;
-(void)setZoomWindowClient:(AXUIClient *)arg1 ;
-(BOOL)registeredForZoomListener;
-(void)setRegisteredForZoomListener:(BOOL)arg1 ;
-(BOOL)_isPrimaryZoomWindowClient;
-(void)_handleChangedAttributes:(id)arg1 ;
-(id)registerZoomLevelChangeHandler:(/*^block*/id)arg1 ;
-(void)removeZoomLevelHandler:(id)arg1 ;
-(BOOL)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1 ;
-(BOOL)notifyZoomIdleSlugOpacityChangedTo:(double)arg1 ;
-(BOOL)notifyZoomReturnedToClockFaceAtIdle;
-(BOOL)notifyZoomAppActivationAnimationDidFinish;
-(BOOL)notifyZoomWillShowBrailleInputUI;
-(BOOL)notifyZoomWillHideBrailleInputUI;
-(double)appSwitcherRevealAnimationStartDelay;
-(CGRect)zoomFrame;
-(BOOL)isShowingZoomLens;
-(void)setShowingZoomLens:(BOOL)arg1 ;
-(void)registerInterestInZoomAttributes;
-(BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 ;
-(BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 keyboardFrame:(CGRect)arg4 ;
-(BOOL)notifyZoomKeyboardWillBecomeVisibleWithFrame:(CGRect)arg1 inAppWithBundleID:(id)arg2 ;
-(BOOL)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1 ;
-(BOOL)notifyZoomLockButtonWasPressed;
-(BOOL)notifyZoomAppSwitcherRevealAnimationWillBegin;
-(BOOL)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(CGRect)arg2 ;
-(BOOL)notifyZoomAppDidEnterBackground:(id)arg1 ;
-(double)appActivationAnimationStartDelay;
-(double)appDeactivationAnimationStartDelay;
-(BOOL)notifyZoomAppActivationAnimationWillBegin;
-(BOOL)notifyZoomAppDeactivationAnimationWillBegin;
-(BOOL)notifyZoomHomeButtonWasPressed;
-(BOOL)notifyZoomDeviceWasUnlocked;
-(double)reachabilityScaleFactor;
@end

