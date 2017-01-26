/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, EKCalendarDate, UIFont;

@interface YearViewYearHeader : UIView {

	UILabel* _yearNumber;
	UIView* _thinLine;
	BOOL _showingOverlayLegend;
	UIView* _overlayLegendYearStartLine;
	UIView* _overlayLegendMonthStartLine;
	UILabel* _overlayLegendYearStartLabel;
	UILabel* _overlayLegendMonthStartLabel;
	EKCalendarDate* _calendarDate;
	UIFont* _yearNumberFont;
	double _yearNumberKerning;
	UIFont* _overlayLegendFont;
	double _overlayLegendRightInset;
	double _overlayLegendYearBaseline;
	double _overlayLegendMonthBaseline;
	double _overlayLegendSpacing;
	double _overlayLegendLineLength;
	double _overlayLegendYearLineThickness;
	double _overlayLegendMonthLineThickness;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                         //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) UIFont * yearNumberFont;                             //@synthesize yearNumberFont=_yearNumberFont - In the implementation block
@property (nonatomic,readonly) double yearNumberKerning;                            //@synthesize yearNumberKerning=_yearNumberKerning - In the implementation block
@property (nonatomic,readonly) double heightBetweenLineAndNumber; 
@property (nonatomic,readonly) UIFont * overlayLegendFont;                          //@synthesize overlayLegendFont=_overlayLegendFont - In the implementation block
@property (nonatomic,readonly) double overlayLegendRightInset;                      //@synthesize overlayLegendRightInset=_overlayLegendRightInset - In the implementation block
@property (nonatomic,readonly) double overlayLegendYearBaseline;                    //@synthesize overlayLegendYearBaseline=_overlayLegendYearBaseline - In the implementation block
@property (nonatomic,readonly) double overlayLegendMonthBaseline;                   //@synthesize overlayLegendMonthBaseline=_overlayLegendMonthBaseline - In the implementation block
@property (nonatomic,readonly) double overlayLegendSpacing;                         //@synthesize overlayLegendSpacing=_overlayLegendSpacing - In the implementation block
@property (nonatomic,readonly) double overlayLegendLineLength;                      //@synthesize overlayLegendLineLength=_overlayLegendLineLength - In the implementation block
@property (nonatomic,readonly) double overlayLegendYearLineThickness;               //@synthesize overlayLegendYearLineThickness=_overlayLegendYearLineThickness - In the implementation block
@property (nonatomic,readonly) double overlayLegendMonthLineThickness;              //@synthesize overlayLegendMonthLineThickness=_overlayLegendMonthLineThickness - In the implementation block
+(id)_headerBackgroundColor;
+(double)headerYInset;
+(double)middleHeight;
+(double)headerDaySpacing;
+(double)height;
-(void)_reloadYearNumberLabel;
-(void)_initializeThinLine;
-(void)_updateOverlayLegend;
-(void)_layoutYearNumber;
-(void)_layoutThinLine;
-(void)_layoutOverlayLegend;
-(id)_thinLineColor;
-(UIFont *)yearNumberFont;
-(double)yearNumberKerning;
-(UIFont *)overlayLegendFont;
-(double)heightBetweenLineAndNumber;
-(double)overlayLegendLineLength;
-(double)overlayLegendRightInset;
-(double)overlayLegendSpacing;
-(double)overlayLegendYearBaseline;
-(double)overlayLegendMonthBaseline;
-(double)overlayLegendYearLineThickness;
-(double)overlayLegendMonthLineThickness;
-(id)initWithCalendarDate:(id)arg1 ;
-(double)yearNumberHeaderFontSize;
-(EKCalendarDate *)calendarDate;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)localeChanged;
-(void)setCalendarDate:(EKCalendarDate *)arg1 ;
@end
