/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>

@interface EKEventPrivacyLevelInlineEditItem : EKEventEditItem {

	BOOL _originalSwitchState;
	BOOL _currentSwitchState;

}
-(id)footerTitle;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(double)footerHeightForWidth:(double)arg1 ;
-(void)_switchChanged:(id)arg1 ;
@end

