/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDRemoteActionViewControllerProvider.h>
#import <libobjc.A.dylib/EKDayViewControllerDataSource.h>
#import <libobjc.A.dylib/EKDayViewControllerDelegate.h>

@class NSArray, EKEvent, EKEventStore, NSString;

@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider <EKDayViewControllerDataSource, EKDayViewControllerDelegate> {

	NSArray* _events;
	EKEvent* _event;
	EKEventStore* _store;

}

@property (retain) NSArray * events;                                //@synthesize events=_events - In the implementation block
@property (retain) EKEvent * event;                                 //@synthesize event=_event - In the implementation block
@property (retain) EKEventStore * store;                            //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)store;
-(void)setStore:(EKEventStore *)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(BOOL)arg3 ;
-(void)dayViewControllerDidFinishPinchingDayView:(id)arg1 ;
-(void)dayViewControllerIsPinchingDayView:(id)arg1 ;
-(void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1 ;
-(void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2 ;
-(void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2 ;
-(id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)dayViewControllerDidReloadData:(id)arg1 ;
-(void)dayViewControllerDidTapEmptySpace:(id)arg1 ;
-(id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(BOOL)arg3 ;
-(BOOL)dayViewControllerShouldAllowLongPress:(id)arg1 ;
-(void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1 ;
-(void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2 ;
-(BOOL)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2 ;
-(void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2 ;
-(void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2 ;
-(BOOL)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1 ;
-(BOOL)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1 ;
-(void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1 ;
-(BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1 ;
-(void)updateSelectedOccurrenceView;
-(NSArray *)events;
-(void)createViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)setEvents:(NSArray *)arg1 ;
@end
