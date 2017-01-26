/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {

	EKEvent* _event;
	EKUIEventInviteesViewController* _controller;

}

@property (nonatomic,readonly) NSDate * selectedStartDate; 
@property (nonatomic,readonly) NSDate * selectedEndDate; 
-(void)loadView;
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(id)initWithEvent:(id)arg1 ;
@end

