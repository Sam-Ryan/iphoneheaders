/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty

@property (nonatomic,retain) NSString * x_calendarserver_attendee_ref; 
@property (nonatomic,retain) ICSDateValue * x_calendarserver_dtstamp; 
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)initWithComment:(id)arg1 ;
-(void)setX_calendarserver_attendee_ref:(NSString *)arg1 ;
-(void)setX_calendarserver_dtstamp:(ICSDateValue *)arg1 ;
-(ICSDateValue *)x_calendarserver_dtstamp;
-(NSString *)x_calendarserver_attendee_ref;
-(void)setComment:(id)arg1 ;
@end

