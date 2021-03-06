/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCell.h>

@class NSString, SGEvent, EKCalendarSuggestionNotification;

@interface CalendarMessageSuggestionCell : CalendarMessageCell {

	NSString* _fromString;
	NSString* _dateString;
	SGEvent* _suggestedEvent;

}

@property (nonatomic,retain) EKCalendarSuggestionNotification * notification; 
@property (nonatomic,readonly) SGEvent * suggestedEvent; 
-(BOOL)showAsCancelledOrDeclined;
-(id)titleStrings;
-(id)bodyStrings;
-(id)_fromString;
-(SGEvent *)suggestedEvent;
-(BOOL)notificationIsCancelled;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)actions;
-(id)_dateString;
-(void)setNotification:(EKCalendarSuggestionNotification *)arg1 ;
-(id)_locationString;
@end

