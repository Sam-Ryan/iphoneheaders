/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSMutableDictionary;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {

	NSDateFormatter* _dayFormatter;
	NSDateFormatter* _abbrevDayFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _standardTimeFormatter;
	NSDateFormatter* _customFormatter;
	NSDateFormatter* _fullStyleDateFormatter;
	NSDateFormatter* _dayOfWeekFormatter;
	NSMutableDictionary* _longFormatters;

}
+(id)sharedGenerator;
-(void)dealloc;
-(id)init;
-(id)_stringForTime:(id)arg1 ;
-(id)_dateFormatterWithLongFormat:(id)arg1 ;
-(id)_stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3 lowerCase:(BOOL)arg4 ;
-(id)_dateStringForDate:(id)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 lowercase:(BOOL)arg4 ;
-(id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 ;
-(void)_invalidateFormatters;
-(id)abbreviatedDayFormatter;
-(id)dayFormatter;
-(id)formatterForLongFormat:(id)arg1 ;
-(id)fullStyleDateFormatter;
-(id)timeFormatter;
-(id)dateStringForDate:(id)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
-(id)_timeStringForDate:(id)arg1 ;
-(id)_customFormatter;
-(id)standardTimeFormatter;
-(id)_stringForDateTime:(id)arg1 timeZone:(id)arg2 ;
-(id)dayOfWeekFormatter;
-(id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(id)dateStringForDate:(id)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2 ;
@end

