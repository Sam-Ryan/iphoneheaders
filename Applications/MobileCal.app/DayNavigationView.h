/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/DayNavigationWeekScrollViewDelegate.h>

@protocol DayNavigationViewDelegate;
@class NSCalendar, NSTimeZone, NSDate, ScrollSpringFactory, DayNavigationWeekScrollView, DayTwoPartLabel, UILabel, UIView, NSString;

@interface DayNavigationView : UIView <UIScrollViewDelegate, DayNavigationWeekScrollViewDelegate> {

	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _selectedDate;
	NSDate* _currentWeekDayLabelDate;
	ScrollSpringFactory* _springFactory;
	DayNavigationWeekScrollView* _weekScrollView;
	DayTwoPartLabel* _weekDayLabel;
	DayTwoPartLabel* _fadingWeekDayLabel;
	UILabel* _weekNumberLabel;
	UILabel* _fadingWeekNumberLabel;
	UIView* _weekNumberLabelBackgroundView;
	BOOL _smallWeekdayLabelFontNeeded;
	BOOL _showWeekNumber;
	BOOL _showOverlayCalendar;
	id<DayNavigationViewDelegate> _delegate;
	double _sideMargin;

}

@property (assign,nonatomic,__weak) id<DayNavigationViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) DayNavigationWeekScrollView * weekScrollView; 
@property (nonatomic,readonly) DayTwoPartLabel * weekDayLabel; 
@property (nonatomic,readonly) UILabel * weekNumberLabel; 
@property (assign,nonatomic) BOOL showWeekNumber;                                         //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
@property (assign,nonatomic) BOOL showOverlayCalendar;                                    //@synthesize showOverlayCalendar=_showOverlayCalendar - In the implementation block
@property (assign,nonatomic) double sideMargin;                                           //@synthesize sideMargin=_sideMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_weekdayFont;
+(id)_smallWeekdayFont;
+(id)_normalWeekdayFont;
+(id)_weekNumberFont;
-(void)pulseToday;
-(DayTwoPartLabel *)weekDayLabel;
-(UILabel *)weekNumberLabel;
-(id)_animateView:(id)arg1 toPosition:(CGPoint)arg2 setDelegate:(BOOL)arg3 ;
-(BOOL)showOverlayCalendar;
-(void)setSelectedDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowOverlayCalendar:(BOOL)arg1 ;
-(void)_dayTimeViewHourWidthChanged;
-(double)_weekNumberRightEdge;
-(double)sideMargin;
-(CGRect)_frameForWeekDayLabel:(id)arg1 ;
-(void)_updateFontSizes;
-(void)_updateLabelsWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_stopPulsingToday;
-(BOOL)canAnimateToDate:(id)arg1 ;
-(void)_animateView:(id)arg1 toAlpha:(double)arg2 ;
-(BOOL)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;
-(void)dayNavigationWeekScrollViewFailedToSelectDate;
-(void)dayNavigationWeekScrollView:(id)arg1 selectedDateChanged:(id)arg2 ;
-(id)initWithCalendar:(id)arg1 selectedDate:(id)arg2 cellFactory:(id)arg3 showWeekdayLabel:(BOOL)arg4 ;
-(DayNavigationWeekScrollView *)weekScrollView;
-(void)setSideMargin:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<DayNavigationViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<DayNavigationViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(void)_updateLabels:(long long)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(BOOL)showWeekNumber;
-(void)significantTimeChangeOccurred;
@end

