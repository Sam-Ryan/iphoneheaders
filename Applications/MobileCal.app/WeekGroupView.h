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
#import <MobileCal/WeekViewDelegate.h>

@protocol WeekGroupViewDelegate;
@class WeekView, UIView, NSDateComponents, NSCalendar, NSTimeZone, NSString;

@interface WeekGroupView : UIView <UIScrollViewDelegate, WeekViewDelegate> {

	WeekView* _weekView;
	UIView* _gutterView;
	BOOL _showsTimeMarker;
	id<WeekGroupViewDelegate> _delegate;

}

@property (nonatomic,copy) NSDateComponents * weekStartDate; 
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,__weak) id<WeekGroupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WeekView * weekView;                                  //@synthesize weekView=_weekView - In the implementation block
@property (assign,nonatomic) BOOL showsTimeMarker;                                   //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)standardWidthForOrientation:(long long)arg1 ;
+(double)offsetForDayIntoWeek:(int)arg1 forOrientation:(long long)arg2 ;
-(void)showOverlayMonthInCellAtOffset:(double)arg1 animated:(BOOL)arg2 ;
-(void)weekViewDidLayout:(id)arg1 ;
-(NSDateComponents *)weekStartDate;
-(id)viewForEvent:(id)arg1 ;
-(void)weekViewDidBeginDragging:(id)arg1 ;
-(void)weekViewDidScroll:(id)arg1 ;
-(void)weekViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)weekViewDidEndDecelerating:(id)arg1 ;
-(void)weekView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2 ;
-(void)weekViewAllDaySectionDidScroll:(id)arg1 ;
-(id)weekViewForWeekBefore:(id)arg1 ;
-(id)weekViewForWeekAfter:(id)arg1 ;
-(id)dateForXOffset:(double)arg1 ;
-(void)emptySpaceClickedOnDate:(id)arg1 ;
-(void)setWeekStartDate:(NSDateComponents *)arg1 ;
-(void)adjustForVisibleRect:(CGRect)arg1 ;
-(WeekView *)weekView;
-(void)emptySpaceClick;
-(double)computeXDragOffsetForCurrentX:(double)arg1 startX:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WeekGroupViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WeekGroupViewDelegate>)delegate;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(double)gutterWidth;
-(BOOL)containsDate:(id)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(BOOL)showsTimeMarker;
-(long long)_secondAtPosition:(double)arg1 ;
-(void)setHourHeightScale:(double)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtDate:(id)arg1 isAllDay:(BOOL)arg2 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2 ;
@end

