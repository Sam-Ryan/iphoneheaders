/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureView_Phone.h>

@class UIView, UIDatePicker, NSLayoutConstraint;

@interface TimeRestrictionFeatureView : GAXFeatureView_Phone {

	UIView* _topShelfContainer;
	UIDatePicker* _datePicker;
	NSLayoutConstraint* _detailTextZeroHeightConstraint;
	long long _durationInMinutes;

}

@property (nonatomic,retain) UIView * topShelfContainer;                                       //@synthesize topShelfContainer=_topShelfContainer - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                        //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailTextZeroHeightConstraint;              //@synthesize detailTextZeroHeightConstraint=_detailTextZeroHeightConstraint - In the implementation block
@property (assign,nonatomic) long long durationInMinutes;                                      //@synthesize durationInMinutes=_durationInMinutes - In the implementation block
-(void)resetCountDownDurationForDatePicker;
-(void)_constructViewHierarchyWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(void)_applyAutolayoutConstraintsWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 icon:(id)arg3 text:(id)arg4 textOffset:(UIOffset)arg5 detailText:(id)arg6 detailTextOffset:(UIOffset)arg7 initialState:(BOOL)arg8 initialDuration:(long long)arg9 styleProvider:(id)arg10 ;
-(void)setDetailTextZeroHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopShelfContainer:(UIView *)arg1 ;
-(void)_handleDatePickerValueDidChange:(id)arg1 ;
-(UIView *)topShelfContainer;
-(void)_setDatePickerVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_datePickerWithInitialEnabledState:(BOOL)arg1 initialDurationInMinutes:(long long)arg2 ;
-(NSLayoutConstraint *)detailTextZeroHeightConstraint;
-(void)dealloc;
-(long long)durationInMinutes;
-(void)setDurationInMinutes:(long long)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)_handleValueChanged:(id)arg1 ;
@end

