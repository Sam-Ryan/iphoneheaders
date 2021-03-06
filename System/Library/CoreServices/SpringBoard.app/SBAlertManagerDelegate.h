/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAlertManagerDelegate <NSObject>
@optional
-(BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
-(id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
-(BOOL)alertManager:(id)arg1 defaultShouldAutorotateForAlert:(id)arg2;
-(long long)alertManager:(id)arg1 defaultInterfaceOrientationForPresentationOfAlert:(id)arg2;
-(unsigned long long)alertManager:(id)arg1 defaultSupportedInterfaceOrientationsForAlert:(id)arg2;

@required
-(CGRect*)sceneFrameForAlerts:(id)arg1;
-(double)sceneLevelForAlerts;

@end

