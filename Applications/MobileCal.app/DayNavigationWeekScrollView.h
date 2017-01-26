/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIScrollView.h>
#import <MobileCal/DayNavigationViewCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol DayNavigationViewCellFactory, DayNavigationWeekScrollViewDelegate;
@class NSObject, NSMutableArray, NSCalendar, NSDate, NSString;

@interface DayNavigationWeekScrollView : UIScrollView <DayNavigationViewCellDelegate, UIGestureRecognizerDelegate> {

	NSObject*<DayNavigationViewCellFactory> _cellFactory;
	NSMutableArray* _cells;
	double _cellWidth;
	double _firstCellX;
	double _pageAlignment;
	double _targetX;
	BOOL _isScrolling;
	BOOL _needToLayoutCells;
	BOOL _needToHighlightCellAfterScrolling;
	BOOL _recentering;
	double _contentOffsetBeforeResizeInCellWidths;
	NSCalendar* _calendar;
	NSDate* _today;
	NSDate* _selectedDate;
	long long _selectedIndex;
	long long _sideViews;
	long long _maxBufferViews;
	long long _weekLength;
	BOOL _decelerationWasLastInput;
	id<DayNavigationWeekScrollViewDelegate> _navDelegate;

}

@property (nonatomic,readonly) NSDate * selectedDate; 
@property (nonatomic,readonly) NSDate * startDateOfSelectedWeek; 
@property (nonatomic,readonly) long long cellsDisplayed; 
@property (nonatomic,readonly) NSObject*<DayNavigationViewCellFactory> cellFactory; 
@property (assign,nonatomic,__weak) id<DayNavigationWeekScrollViewDelegate> navDelegate;              //@synthesize navDelegate=_navDelegate - In the implementation block
@property (nonatomic,readonly) CGSize cellSize; 
@property (nonatomic,readonly) long long firstVisibleDayOffsetFromSelectedDay; 
@property (nonatomic,retain) NSDate * today; 
@property (nonatomic,readonly) long long sideViews; 
@property (nonatomic,readonly) long long maxBufferViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dayNavigationCellTouchUpOccurred:(id)arg1 ;
-(void)pulseToday;
-(void)willBeginDragging;
-(NSObject*<DayNavigationViewCellFactory>)cellFactory;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 selectedDate:(id)arg3 cellFactory:(id)arg4 ;
-(void)setNavDelegate:(id<DayNavigationWeekScrollViewDelegate>)arg1 ;
-(void)setSelectedDate:(id)arg1 animated:(BOOL)arg2 ;
-(long long)cellsDisplayed;
-(id)selectedDateAfterScrollingToPoint:(CGPoint)arg1 ;
-(void)setSelectedDateWithoutScrolling:(id)arg1 ;
-(void)updateHighlightIfNeeded;
-(void)willEndDraggingTargetX:(double)arg1 ;
-(void)updateOverlays;
-(BOOL)canAnimateToDate:(id)arg1 ;
-(void)stopPulsingToday;
-(NSDate *)startDateOfSelectedWeek;
-(id)_weekStartForDate:(id)arg1 ;
-(void)_createSubviewsWithFirstVisibleDate:(id)arg1 ;
-(long long)sideViews;
-(long long)_firstVisibleIndex;
-(long long)_lastVisibleIndex;
-(long long)_indexForDate:(id)arg1 ;
-(void)_addNewLeftCell;
-(void)_addNewRightCell;
-(void)_setCell:(id)arg1 highlight:(BOOL)arg2 animated:(BOOL)arg3 ;
-(long long)_indexOfCellToScrollToForDateAndBuildIfNeeded:(id)arg1 ;
-(double)_alignXToPage:(double)arg1 ;
-(void)_setOffscreenCellsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_didFinishDecelerating;
-(long long)_cellIndexForX:(double)arg1 ;
-(double)_cellWidth;
-(void)_setCell:(id)arg1 toDate:(id)arg2 ;
-(long long)_firstVisibleIndexInView;
-(void)_adjustContentOffsetIfNeeded;
-(id<DayNavigationWeekScrollViewDelegate>)navDelegate;
-(void)_adjustCellsIfNeeded;
-(long long)_loadedBufferViewsLeft;
-(long long)maxBufferViews;
-(long long)_loadedBufferViewsRight;
-(double)_offsetAllViews:(double)arg1 ;
-(id)_selectedDateAsCalendarDate;
-(BOOL)_isDateWeekend:(id)arg1 ;
-(void)setFirstVisibleDate:(id)arg1 ;
-(void)setToSelectedDateAtLocation:(CGPoint)arg1 ;
-(long long)firstVisibleDayOffsetFromSelectedDay;
-(void)setToday:(NSDate *)arg1 ;
-(NSDate *)today;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)sizeToFit;
-(void)_layoutCells;
-(void)setCalendar:(id)arg1 ;
-(void)didScroll;
-(CGSize)cellSize;
-(void)didFinishScrolling;
-(void)significantTimeChangeOccurred;
-(NSDate *)selectedDate;
@end

