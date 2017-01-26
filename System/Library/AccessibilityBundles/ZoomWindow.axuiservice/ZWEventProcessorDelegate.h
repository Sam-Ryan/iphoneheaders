/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZWEventProcessorDelegate <NSObject>
@required
-(void)willBeginAdjustingZoomLevelWithATVEventProcessor:(id)arg1;
-(BOOL)eventProcessor:(id)arg1 didGetWheelEventWithDelta:(long long)arg2;
-(void)eventProcessor:(id)arg1 didGetFirstTouchAtLocation:(CGPoint)arg2;
-(void)lastFingerWasLiftedWithEventProcessor:(id)arg1;
-(BOOL)isBrailleInputUIShowingWithEventProcessor:(id)arg1;
-(/*function pointer*/void**)currentUIContextForEventProcessor:(id)arg1;
-(void)disableZoomWindowHitTestingWithEventProcessor:(id)arg1;
-(long long)currentInterfaceOrientationForEventProcessor:(id)arg1;
-(BOOL)shouldSendTapEventWithATVEventProcessor:(id)arg1;
-(void)atvEventProcessor:(id)arg1 adjustZoomLevelWithDelta:(CGPoint)arg2;
-(void)didGetSpeakContentGestureWithATVEventProcessor:(id)arg1;
-(void)wantsToStartAutopannerWithATVEventProcessor:(id)arg1;
-(void)didGetToggleZoomGestureWithATVEventProcessor:(id)arg1;
-(void)wantsToStopAutopannerWithATVEventProcessor:(id)arg1;
-(void)didGetTogglePanningModeGestureWithATVEventProcessor:(id)arg1;

@end

