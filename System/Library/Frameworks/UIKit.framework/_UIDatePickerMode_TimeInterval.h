/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDatePickerMode.h>

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {

	double _componentWidth;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(double)rowHeight;
-(id)font;
-(BOOL)isTimeIntervalMode;
-(void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2 ;
-(long long)hourForRow:(long long)arg1 ;
-(BOOL)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2 ;
-(void)resetComponentWidths;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(NSRange)rangeForCalendarUnit:(unsigned long long)arg1 ;
-(long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3 ;
-(long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1 ;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end

