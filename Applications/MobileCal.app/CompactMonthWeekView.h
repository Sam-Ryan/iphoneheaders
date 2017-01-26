/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <MobileCal/InfiniteScrollViewSubview.h>

@class EKCalendarDate, NSCalendar, UIView, UILabel, NSArray, CompactMonthWeekDayNumber, CompactMonthWeekDayOverlay, EKUITodayCirclePulseView;

@interface CompactMonthWeekView : UIView <InfiniteScrollViewSubview> {

	EKCalendarDate* _startCalendarDate;
	EKCalendarDate* _endCalendarDate;
	NSCalendar* _calendar;
	long long _cellToStartDrawingIn;
	BOOL _containsFirstDayOfMonth;
	UIView* _grayLine;
	UILabel* _monthNameLabel;
	NSArray* _dayNumbers;
	NSArray* _dayNumberOverlays;
	NSArray* _eventMarkers;
	CompactMonthWeekDayNumber* _todayDayNumber;
	CGSize _monthNameLabelFittingSize;
	CompactMonthWeekDayNumber* _selectedWeekNumber;
	CompactMonthWeekDayOverlay* _todayDayNumberOverlay;
	CompactMonthWeekDayOverlay* _selectedDayNumberOverlay;
	EKUITodayCirclePulseView* _todayPulse;
	BOOL _containsToday;
	UILabel* _weekNumberLabel;
	BOOL _darkBackgroundMode;
	BOOL _compressedVerticalMode;
	BOOL _compressedHorizontalMode;
	BOOL _enableLayerAnimationsDuringLayout;
	BOOL _disableTodayPulse;
	BOOL _showWeekNumber;
	BOOL _temporarilyHideWeekNumber;
	NSArray* _eventCounts;

}

@property (nonatomic,retain) NSArray * eventCounts;                               //@synthesize eventCounts=_eventCounts - In the implementation block
@property (assign,nonatomic) BOOL darkBackgroundMode;                             //@synthesize darkBackgroundMode=_darkBackgroundMode - In the implementation block
@property (assign,nonatomic) BOOL compressedVerticalMode;                         //@synthesize compressedVerticalMode=_compressedVerticalMode - In the implementation block
@property (assign,nonatomic) BOOL compressedHorizontalMode;                       //@synthesize compressedHorizontalMode=_compressedHorizontalMode - In the implementation block
@property (assign,nonatomic) BOOL enableLayerAnimationsDuringLayout;              //@synthesize enableLayerAnimationsDuringLayout=_enableLayerAnimationsDuringLayout - In the implementation block
@property (assign,nonatomic) BOOL disableTodayPulse;                              //@synthesize disableTodayPulse=_disableTodayPulse - In the implementation block
@property (nonatomic,readonly) BOOL containsFirstDayOfMonth; 
@property (assign,nonatomic) BOOL showWeekNumber;                                 //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
@property (assign,nonatomic) BOOL temporarilyHideWeekNumber;                      //@synthesize temporarilyHideWeekNumber=_temporarilyHideWeekNumber - In the implementation block
+(double)heightForViewWithCalendarDate:(id)arg1 compressed:(BOOL)arg2 ;
+(double)topInsetForViewWithCalendarDate:(id)arg1 calendar:(id)arg2 ;
+(double)cellHeightWithVerticalCompression:(BOOL)arg1 ;
+(double)heightForViewThatContainsFirstDayOfMonth:(BOOL)arg1 compressed:(BOOL)arg2 ;
+(double)circleDiameterWithOverlayLarge;
+(double)circleDiameterWithOverlay;
+(double)circleDiameterCompressed;
+(id)weekNumberFont;
+(double)eventMarkerDiameter:(BOOL)arg1 ;
+(id)_monthNameFont;
+(UIEdgeInsets)layoutMarginsForBounds:(CGRect)arg1 ;
+(CGRect)_boundsInsetWithMarginsForBounds:(CGRect)arg1 ;
+(double)weekNumbersInset:(BOOL)arg1 ;
+(double)columnWidthForViewWithBounds:(CGRect)arg1 onWeekend:(BOOL)arg2 weekNumbersInsetEnabled:(BOOL)arg3 ;
+(double)_topOfMonthNameLabelToGrayLineDistance;
+(double)_grayLineHeight;
+(double)_firstColumnXOriginForBounds:(CGRect)arg1 weekNumbersInsetEnabled:(BOOL)arg2 ;
+(double)_dayNumberBaselineToGrayLineDistance:(BOOL)arg1 ;
+(CGPoint)eventMarkerPositionForIndex:(long long)arg1 compressed:(BOOL)arg2 showingOverlay:(BOOL)arg3 showingWeekNumbers:(BOOL)arg4 withBoundsWidth:(double)arg5 ;
+(double)_topInsetForViewThatContainsFirstDayOfMonth:(BOOL)arg1 cellToStartDrawingIn:(long long)arg2 ;
+(BOOL)_viewForCalendarDateContainsFirstDayOfMonth:(id)arg1 ;
+(long long)_cellToStartDrawingInForViewWithCalendarDate:(id)arg1 calendar:(id)arg2 ;
+(double)_spaceBelowGrayLineHeight:(BOOL)arg1 ;
+(id)weekNumberColorForThisWeek:(BOOL)arg1 ;
+(id)eventMarkerColor;
+(double)_monthNameLabelBaselineToGrayLineDistance;
+(double)headerHeight;
+(double)circleDiameter;
-(id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 compressed:(BOOL)arg3 darkBackgroundMode:(BOOL)arg4 ;
-(void)setCompressedVerticalMode:(BOOL)arg1 ;
-(void)setDarkBackgroundMode:(BOOL)arg1 ;
-(void)setEventCounts:(NSArray *)arg1 ;
-(void)setEventCounts:(id)arg1 animated:(BOOL)arg2 ;
-(void)setGrayLineAlpha:(double)arg1 ;
-(id)dayNumberCellFrames;
-(CGRect)rectForCells;
-(BOOL)isTodayHighlightVisible;
-(NSArray *)eventCounts;
-(void)resetTodayBits;
-(id)dayForPoint:(CGPoint)arg1 ;
-(void)haltTodayPulse;
-(void)adjustHighlight:(id)arg1 forDay:(id)arg2 ;
-(void)setSelectedDay:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTemporarilyHideWeekNumber:(BOOL)arg1 ;
-(void)setDisableTodayPulse:(BOOL)arg1 ;
-(void)setEnableLayerAnimationsDuringLayout:(BOOL)arg1 ;
-(BOOL)containsFirstDayOfMonth;
-(void)_initializeGrayLine;
-(void)_initializeDayNumbers;
-(void)_updateDayNumberOverlays;
-(void)_updateWeekNumberAnimated:(BOOL)arg1 ;
-(unsigned long long)_daysInAWeek;
-(BOOL)compressedVerticalMode;
-(BOOL)darkBackgroundMode;
-(BOOL)enableLayerAnimationsDuringLayout;
-(CGPoint)positionOfCircleInCellWithWidth:(double)arg1 circleSize:(CGSize)arg2 ;
-(BOOL)disableTodayPulse;
-(double)_circleYOffsetFromTopForDiameter:(double)arg1 ;
-(void)_clearTodayHighlight;
-(void)_reloadMonthNameLabel;
-(void)_initializeEventMarkers;
-(void)_initializeMonthNameLabel;
-(unsigned long long)_monthLabelColumnIndex;
-(id)monthNameLabel;
-(BOOL)compressedHorizontalMode;
-(void)setCompressedHorizontalMode:(BOOL)arg1 ;
-(BOOL)temporarilyHideWeekNumber;
-(id)calendarDate;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)indexForPoint:(CGPoint)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(long long)daysInMonth;
-(void)setCalendarDate:(id)arg1 ;
-(void)pulseTodayCircle;
-(CGRect)frameForTodayHighlight;
-(BOOL)showWeekNumber;
-(id)endCalendarDate;
-(double)topInset;
@end

