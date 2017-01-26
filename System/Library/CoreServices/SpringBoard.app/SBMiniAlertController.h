/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBMiniAlertController : NSObject {

	NSMutableDictionary* _identifierToPresenters;
	unsigned _sbMiniAlertVisible : 1;

}
+(id)sharedInstance;
-(void)displayWillShowMiniAlert:(id)arg1 ;
-(void)displayWillDismissMiniAlert:(id)arg1 ;
-(BOOL)miniAlertVisible;
-(void)deactivateAlertItemsForDisplay:(id)arg1 ;
-(void)displayDidDismissMiniAlert:(id)arg1 ;
-(void)noteMiniAlertStateChanged;
-(void)_setAlertVisibleNotifyState:(BOOL)arg1 withFence:(BOOL)arg2 ;
-(BOOL)_applicationIsShowingAlert:(id)arg1 ;
-(void)_hideMiniAlertsForApp:(id)arg1 withTransition:(id)arg2 ;
-(void)_addApplicationShowingAlert:(id)arg1 ;
-(void)_removeApplicationShowingAlert:(id)arg1 ;
-(void)_showApplicationMiniAlertsIfNeededAndFence:(BOOL)arg1 ;
-(void)showApplicationMiniAlertsIfNeeded;
-(void)hideApplicationMiniAlerts;
-(id)init;
-(BOOL)canShowAlerts;
@end

