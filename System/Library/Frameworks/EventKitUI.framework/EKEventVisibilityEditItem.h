/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem, EKEventEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem {

	EKEventAvailabilityEditItem* _availabilityEditItem;
	EKEventPrivacyLevelInlineEditItem* _privacyLevelEditItem;
	EKEventEditItem* _subitemOfLastDetailViewControllerRequested;
	unsigned long long _lastKnownNumberOfSubitems;

}
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)reset;
-(id)footerTitle;
-(id)footerView;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(id)_editItemForIndex:(unsigned long long)arg1 ;
-(id)_lowestEditItem;
-(double)footerHeightForWidth:(double)arg1 ;
@end
