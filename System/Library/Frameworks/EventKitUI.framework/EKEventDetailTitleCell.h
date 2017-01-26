/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKEventDetailTitleCellDelegate;
@class UILabel, EKTextViewWithLabelTextMetrics, UIImage, UIImageView, NSMutableArray, UIButton, NSObject;

@interface EKEventDetailTitleCell : EKEventDetailCell {

	UILabel* _titleView;
	EKTextViewWithLabelTextMetrics* _locationView;
	UIImage* _locationStatusImage;
	UIImageView* _locationStatusView;
	UILabel* _travelTimeView;
	NSMutableArray* _dateTimeViews;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	UIButton* _editButton;
	unsigned _visibleItems;
	BOOL _observingLocaleChanges;
	BOOL _hasLocationStatus;
	long long _locationStatus;
	NSObject*<EKEventDetailTitleCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<EKEventDetailTitleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_titleFont;
+(void)_invalidateCachedFonts;
+(void)_geocodeEventIfNeeded:(id)arg1 ;
+(id)_largeTitleFont;
+(id)_locationStringForStructuredLocation:(id)arg1 ;
+(id)_mapsURLForLocationOnEvent:(id)arg1 ;
+(id)_locationFont;
+(void)_registerForInvalidation;
-(void)setDelegate:(NSObject*<EKEventDetailTitleCellDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(NSObject*<EKEventDetailTitleCellDelegate>)delegate;
-(id)_titleView;
-(void)setColor:(id)arg1 ;
-(BOOL)update;
-(void)setLocation:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(void)setRecurrenceString:(id)arg1 ;
-(BOOL)_useLargeFonts;
-(id)_locationView;
-(id)_locationStatusView;
-(id)_dateTimeViewForLine:(unsigned long long)arg1 ;
-(id)_travelTimeView;
-(id)_recurrenceView;
-(id)_statusView;
-(void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2 ;
-(void)setTravelTimeString:(id)arg1 ;
-(void)setStatusString:(id)arg1 ;
-(void)editButtonTapped;
-(id)_editButton;
-(void)setPrimaryTextColor:(id)arg1 ;
@end

