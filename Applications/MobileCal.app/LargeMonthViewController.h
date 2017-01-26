/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/MonthViewController.h>
#import <MobileCal/EKEventGestureControllerUntimedDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <libobjc.A.dylib/ABPersonViewControllerDelegate.h>
#import <MobileCal/LargeMonthWeekViewDataSource.h>
#import <MobileCal/LargeMonthWeekViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <MobileCal/EnqueuablePopoverPresentationManagedNavigationControllerDelegate.h>

@class EKEvent, EKCalendarDate, NSArray, EKEventGestureController, LargeMonthViewOccurrenceView, LargeMonthWeekView, NSString;

@interface LargeMonthViewController : MonthViewController <EKEventGestureControllerUntimedDelegate, EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, ABPersonViewControllerDelegate, LargeMonthWeekViewDataSource, LargeMonthWeekViewDelegate, UIPopoverPresentationControllerDelegate, EnqueuablePopoverPresentationManagedNavigationControllerDelegate> {

	BOOL _currentlyEditingEvent;
	EKEvent* _eventBeingInspected;
	CGRect _scrubbingRect;
	EKCalendarDate* _tappedDay;
	BOOL _isTrackingTouches;
	NSArray* _verticalGridLines;
	EKEventGestureController* _gestureController;
	EKCalendarDate* _initialDragDate;
	BOOL _draggingExistingEvent;
	LargeMonthViewOccurrenceView* _draggingEventView;
	EKEvent* _draggingEvent;
	CGPoint _dragOffset;
	EKCalendarDate* _draggedStartDate;
	EKCalendarDate* _draggedEndDate;
	LargeMonthWeekView* _weekContainingSelectedOccurrence;
	EKCalendarDate* _initialDate;
	EKCalendarDate* _navigationBarDisplayedDate;
	BOOL _isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
	BOOL _shouldPresentEventCommentsForSelectedOccurrence;
	BOOL _shouldAnimateScrollToVisibleWeekViewForSelectedOccurrence;
	BOOL _editorDismissedFromDelete;
	BOOL _shouldForceAllowUpdateNavigationBarDateString;
	EKCalendarDate* _activeDateDuringSizeChange;

}

@property (nonatomic,retain) EKCalendarDate * activeDateDuringSizeChange;              //@synthesize activeDateDuringSizeChange=_activeDateDuringSizeChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)subviewHeightForDate:(id)arg1 orientation:(long long)arg2 ;
+(double)_cellHeightForOrientation:(long long)arg1 withMultiplier:(double)arg2 ;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)largeMonthWeekView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)largeMonthWeekView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3 ;
-(void)largeMonthWeekView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3 ;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 waitForLoad:(BOOL)arg3 ;
-(void)largeMonthWeekView:(id)arg1 didTapOccurrence:(id)arg2 onDay:(id)arg3 ;
-(void)largeMonthWeekView:(id)arg1 didDoubleTapOnDay:(id)arg2 ;
-(void)didCompleteBackgroundOccurrenceRenderingForLargeMonthWeekView:(id)arg1 ;
-(void)showDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 showComments:(BOOL)arg4 ;
-(void)updatePalette:(id)arg1 ;
-(int)supportedToggleMode;
-(void)updateNavigationBarDisplayedDateString;
-(BOOL)isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
-(void)setIsWaitingForBackgroundLoadingOfSelectedEventOccurrenceView:(BOOL)arg1 ;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(void)weekNumbersPrefChanged;
-(double)heightForSubviewWithCalendarDate:(id)arg1 ;
-(double)decelerationDistanceThresholdForPreferringMonthBoundary;
-(void)didEndScrolling;
-(id)pushedWeekViewControllerWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(double)subviewBufferExtensionMultiplier;
-(double)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned long long)maximumCachedReusableViews;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)_displayedOccurrencesChanged:(id)arg1 ;
-(void)_editorUpdated:(id)arg1 ;
-(void)_closeEventPresentationAnimated:(BOOL)arg1 ;
-(id)_weekViewForEKCalendarDate:(id)arg1 ;
-(void)setActiveDateDuringSizeChange:(EKCalendarDate *)arg1 ;
-(void)_updateDraggingView;
-(EKCalendarDate *)activeDateDuringSizeChange;
-(void)_layoutVerticalLines;
-(id)shownEventEditViewController;
-(void)_removeDraggingOccurrenceAnimated:(BOOL)arg1 ;
-(void)_removeAllWeekHighlights;
-(void)_selectOccurrence:(id)arg1 inWeek:(id)arg2 ;
-(id)_createLargeMonthWeekViewForDate:(id)arg1 ;
-(void)_showEventDetailsForOccurrence:(id)arg1 inWeek:(id)arg2 onDay:(id)arg3 animatedScrollToVisible:(BOOL)arg4 showComments:(BOOL)arg5 ;
-(void)_updateDayHeaderFrames;
-(id)shownEventViewController;
-(void)_showEventDetailsForOccurrence:(id)arg1 inWeek:(id)arg2 onDay:(id)arg3 ;
-(void)_scrubWithTouches:(id)arg1 ;
-(id)_weekViewAtPoint:(CGPoint)arg1 pointInWeek:(CGPoint*)arg2 ;
-(id)_dateAtPoint:(CGPoint)arg1 ;
-(id)_occurrenceAtPoint:(CGPoint)arg1 ;
-(void)_scrubAtPoint:(CGPoint)arg1 ;
-(BOOL)isReadyToShowViewControllersInsideEnqueueableManagedNavigationController:(id)arg1 ;
-(void)_scrollToWeekView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_startingFrameForEvent:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_event:(id)arg1 wasCancelledAtPoint:(CGPoint)arg2 ;
-(void)_updateDraggingOffsetTimesForPoint:(CGPoint)arg1 ;
-(void)_updateWeekHighlightsForDragPoint:(CGPoint)arg1 ;
-(CGRect)_mainFrameForEvent:(id)arg1 atLastPosition:(BOOL)arg2 atPoint:(CGPoint)arg3 ;
-(void)_animateDraggingOccurrenceToDate:(id)arg1 atLastPosition:(BOOL)arg2 dropPoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveDraggedEventWithSpan:(long long)arg1 ;
-(void)enqueuableNavigationController:(id)arg1 requestsDeferShowViewControllerUntilReady:(/*^block*/id)arg2 ;
-(void)enqueueableManagedNavigationController:(id)arg1 requestsConfigurationOfPropertiesForPopoverPresentationController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isEventAllInOneWeek:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)didScroll;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(CGRect)frameForTodayHighlight;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)touchTrackingViewForEventGestureController:(id)arg1 ;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1 ;
-(BOOL)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1 ;
-(BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(int)editorShowTransition;
-(int)editorHideTransition;
-(void)eventGestureController:(id)arg1 setUpAtPoint:(CGPoint)arg2 ;
-(void)eventGestureController:(id)arg1 updateToPoint:(CGPoint)arg2 ;
-(void)eventGestureControllerCancelled:(id)arg1 ;
-(void)eventGestureController:(id)arg1 commitToPoint:(CGPoint)arg2 ;
-(void)eventGestureControllerScrollTimerFired:(id)arg1 ;
-(BOOL)isDraggingOccurrence;
-(id)_palette;
@end
