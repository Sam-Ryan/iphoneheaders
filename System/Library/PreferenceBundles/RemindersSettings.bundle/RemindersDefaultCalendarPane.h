/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/RemindersSettings.bundle/RemindersSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersSettings/RemindersSettings-Structs.h>
#import <Preferences/PSEditingPane.h>

@class EKEventStore, EKCalendarChooser;

@interface RemindersDefaultCalendarPane : PSEditingPane {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	BOOL _dontSetDefaultCalendar;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)childViewControllerForHostingViewController;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)preferenceValue;
-(void)_updateCheckedCalendar;
-(BOOL)drawLabel;
@end

