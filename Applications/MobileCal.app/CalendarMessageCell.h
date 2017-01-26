/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/EKUIEventStatusButtonsViewDelegate.h>

@protocol CalendarMessageCellDelegate;
@class NSArray, MessageCellColorBarView, UIView, EKUIEventStatusButtonsView, UITextField, NSLayoutConstraint, NSMutableArray, EKCalendarNotification, NSIndexSet, NSString;

@interface CalendarMessageCell : UITableViewCell <EKUIEventStatusButtonsViewDelegate> {

	NSArray* _titleLabels;
	NSArray* _bodyLabels;
	MessageCellColorBarView* _colorBar;
	UIView* _disclosureIndicatorView;
	EKUIEventStatusButtonsView* _responseButtons;
	UITextField* _commentPrompt;
	BOOL _showsCommentPrompt;
	BOOL _didSetupColorBarConstraints;
	BOOL _didSetupLabelConstraints;
	BOOL _didSetupDisclosureConstraints;
	NSLayoutConstraint* _firstTitleLabelToContentViewTopConstraint;
	NSLayoutConstraint* _lastTitleLabelToFirstBodyLabelConstraint;
	NSLayoutConstraint* _lastBodyLabelToResponseButtonsConstraint;
	NSLayoutConstraint* _responseButtonsToCommentLabelConstraint;
	NSLayoutConstraint* _bottomMostViewToContentViewBottomConstraint;
	NSMutableArray* _titleLabelConstraints;
	NSMutableArray* _bodyLabelConstraints;
	BOOL _hasDisclosure;
	EKCalendarNotification* _notification;
	id<CalendarMessageCellDelegate> _delegate;
	NSIndexSet* _indexSetOfTruncatedTitleStrings;
	NSIndexSet* _indexSetOfTruncatedBodyStrings;
	NSArray* _labelRelatedConstraints;
	NSArray* _colorBarConstraints;
	NSArray* _disclosureConstraints;
	NSArray* _commentPromptRelatedConstraints;

}

@property (nonatomic,retain) EKCalendarNotification * notification;                        //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id<CalendarMessageCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long accessoryType; 
@property (assign,nonatomic) BOOL hasDisclosure;                                           //@synthesize hasDisclosure=_hasDisclosure - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetOfTruncatedTitleStrings;               //@synthesize indexSetOfTruncatedTitleStrings=_indexSetOfTruncatedTitleStrings - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetOfTruncatedBodyStrings;                //@synthesize indexSetOfTruncatedBodyStrings=_indexSetOfTruncatedBodyStrings - In the implementation block
@property (nonatomic,retain) NSArray * labelRelatedConstraints;                            //@synthesize labelRelatedConstraints=_labelRelatedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * colorBarConstraints;                                //@synthesize colorBarConstraints=_colorBarConstraints - In the implementation block
@property (nonatomic,retain) NSArray * disclosureConstraints;                              //@synthesize disclosureConstraints=_disclosureConstraints - In the implementation block
@property (nonatomic,retain) NSArray * commentPromptRelatedConstraints;                    //@synthesize commentPromptRelatedConstraints=_commentPromptRelatedConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)numberOfLinesForTitleLabels;
+(long long)numberOfLinesForBodyLabels;
+(Class)cellClassForNotification:(id)arg1 ;
+(id)layoutMetrics;
+(double)defaultRowHeight;
-(BOOL)showAsCancelledOrDeclined;
-(void)setHasDisclosure:(BOOL)arg1 ;
-(NSIndexSet *)indexSetOfTruncatedTitleStrings;
-(id)titleStrings;
-(id)bodyStrings;
-(void)_removeColorBarConstraintsIfNeeded;
-(void)setColorBarConstraints:(NSArray *)arg1 ;
-(NSArray *)colorBarConstraints;
-(void)_removeLabelRelatedConstraintsIfNeeded;
-(id)_responseButtons;
-(void)setLabelRelatedConstraints:(NSArray *)arg1 ;
-(NSArray *)labelRelatedConstraints;
-(void)_removeDisclosureConstraintsIfNeeded;
-(void)setDisclosureConstraints:(NSArray *)arg1 ;
-(NSArray *)disclosureConstraints;
-(void)_removeCommentPromptRelatedConstraintsIfNeeded;
-(void)setCommentPromptRelatedConstraints:(NSArray *)arg1 ;
-(NSArray *)commentPromptRelatedConstraints;
-(void)_commentPromptDone:(id)arg1 ;
-(void)updateSelectedResponseButton;
-(void)setupCommentPromptConstraintsIfNeeded;
-(void)setupLabelConstraintsIfNeeded;
-(void)setupColorBarConstraintsIfNeeded;
-(long long)selectedResponseButton;
-(void)_updateResponseButtons;
-(void)_updateColorBar;
-(void)setupDisclosureConstraintsIfNeeded;
-(void)setShowsCommentPrompt:(BOOL)arg1 animated:(BOOL)arg2 initialValue:(id)arg3 ;
-(BOOL)hasDisclosure;
-(NSIndexSet *)indexSetOfTruncatedBodyStrings;
-(void)setDelegate:(id<CalendarMessageCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CalendarMessageCellDelegate>)delegate;
-(id)actions;
-(EKCalendarNotification *)notification;
-(void)prepareForReuse;
-(id)color;
-(id)comment;
-(void)setNotification:(EKCalendarNotification *)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(void)_updateLabels;
@end

