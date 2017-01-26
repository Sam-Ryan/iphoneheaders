/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <libobjc.A.dylib/EKRecurrenceTypeEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class NSDate, NSString, PreferencesValueCell, EKRecurrenceTypeEditItemViewController, EKCalendarItemRecurrenceEndCell;

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener> {

	long long _repeatType;
	long long _originalRepeatType;
	NSDate* _repeatEnd;
	NSDate* _originalRepeatEnd;
	NSString* _customRepeatDescription;
	unsigned long long _disclosedSubitem;
	int _shorteningStatus;
	PreferencesValueCell* _repeatEndDateCell;
	EKRecurrenceTypeEditItemViewController* _recurrenceTypeVC;
	EKCalendarItemRecurrenceEndCell* _repeatEndPickerCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(long long)repeatTypeForRecurrenceRule:(id)arg1 ;
-(id)stringForDate:(id)arg1 ;
-(id)recurrenceDate;
-(id)recurrenceTimeZone;
-(id)minRecurrenceEndDate;
-(id)_recurrenceTypeVC;
-(BOOL)_validateRecurrenceType:(id)arg1 ;
-(void)_updateRepeatEndDateCell;
-(BOOL)editItemViewControllerSave:(id)arg1 notify:(BOOL)arg2 ;
-(void)_repeatEndDateChanged:(id)arg1 ;
-(void)_neverRepeatButtonTapped:(id)arg1 ;
-(id)_repeatEndPickerCell;
@end

