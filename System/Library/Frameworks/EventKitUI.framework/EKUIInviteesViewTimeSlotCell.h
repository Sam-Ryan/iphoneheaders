/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSDictionary, UILabel, UITextView, UIView, UIImageView, UIButton, NSArray, NSMutableDictionary, NSLayoutConstraint, NSDate, UITapGestureRecognizer, UIColor;

@interface EKUIInviteesViewTimeSlotCell : UITableViewCell {

	BOOL _checked;
	BOOL _updateFontBasedConstraints;
	BOOL _updateTimeText;
	BOOL _updateParticipantsText;
	BOOL _showAllParticipants;
	/*^block*/id _showPreviewOfEventAtTime;
	/*^block*/id _showAllConflictedParticipantsTapped;
	NSDictionary* _andMoreStringCache;
	UILabel* _labelForTextSizeTesting;
	UITextView* _textViewForTextSizeTesting;
	UILabel* _topTimeLabel;
	UILabel* _bottomTimeLabel;
	UIView* _andMoreDebugOverlay;
	UITextView* _participantsTextView;
	UIImageView* _checkmarkImageView;
	UIButton* _showPreviewButton;
	NSArray* _persistentConstraints;
	NSMutableDictionary* _colorToBusyImageAttributedString;
	NSLayoutConstraint* _topTimeLabelToTopContentViewConstraint;
	NSLayoutConstraint* _bottomTimeLabelToTopTimeLabelConstraint;
	NSLayoutConstraint* _participantsViewToBottomTimeLabelConstraint;
	NSLayoutConstraint* _participantsViewToContentViewConstraint;
	NSLayoutConstraint* _topTimeLabelHeightConstraint;
	NSLayoutConstraint* _bottomTimeLabelHeightConstraint;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _busyParticipants;
	UITapGestureRecognizer* _tappedMoreRecognizer;
	CGRect _andMoreBoundingRect;

}

@property (nonatomic,copy) id showPreviewOfEventAtTime;                                                     //@synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime - In the implementation block
@property (nonatomic,copy) id showAllConflictedParticipantsTapped;                                          //@synthesize showAllConflictedParticipantsTapped=_showAllConflictedParticipantsTapped - In the implementation block
@property (assign,nonatomic) BOOL checked;                                                                  //@synthesize checked=_checked - In the implementation block
@property (nonatomic,readonly) UIColor * participantsTextColor; 
@property (nonatomic,readonly) UIColor * timeTextColor; 
@property (nonatomic,retain) NSDictionary * andMoreStringCache;                                             //@synthesize andMoreStringCache=_andMoreStringCache - In the implementation block
@property (nonatomic,retain) UILabel * labelForTextSizeTesting;                                             //@synthesize labelForTextSizeTesting=_labelForTextSizeTesting - In the implementation block
@property (nonatomic,retain) UITextView * textViewForTextSizeTesting;                                       //@synthesize textViewForTextSizeTesting=_textViewForTextSizeTesting - In the implementation block
@property (nonatomic,retain) UILabel * topTimeLabel;                                                        //@synthesize topTimeLabel=_topTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * bottomTimeLabel;                                                     //@synthesize bottomTimeLabel=_bottomTimeLabel - In the implementation block
@property (nonatomic,retain) UIView * andMoreDebugOverlay;                                                  //@synthesize andMoreDebugOverlay=_andMoreDebugOverlay - In the implementation block
@property (nonatomic,retain) UITextView * participantsTextView;                                             //@synthesize participantsTextView=_participantsTextView - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkImageView;                                              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,retain) UIButton * showPreviewButton;                                                  //@synthesize showPreviewButton=_showPreviewButton - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                                               //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorToBusyImageAttributedString;                        //@synthesize colorToBusyImageAttributedString=_colorToBusyImageAttributedString - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topTimeLabelToTopContentViewConstraint;                   //@synthesize topTimeLabelToTopContentViewConstraint=_topTimeLabelToTopContentViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomTimeLabelToTopTimeLabelConstraint;                  //@synthesize bottomTimeLabelToTopTimeLabelConstraint=_bottomTimeLabelToTopTimeLabelConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * participantsViewToBottomTimeLabelConstraint;              //@synthesize participantsViewToBottomTimeLabelConstraint=_participantsViewToBottomTimeLabelConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * participantsViewToContentViewConstraint;                  //@synthesize participantsViewToContentViewConstraint=_participantsViewToContentViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topTimeLabelHeightConstraint;                             //@synthesize topTimeLabelHeightConstraint=_topTimeLabelHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomTimeLabelHeightConstraint;                          //@synthesize bottomTimeLabelHeightConstraint=_bottomTimeLabelHeightConstraint - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                              //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL updateFontBasedConstraints;                                               //@synthesize updateFontBasedConstraints=_updateFontBasedConstraints - In the implementation block
@property (assign,nonatomic) BOOL updateTimeText;                                                           //@synthesize updateTimeText=_updateTimeText - In the implementation block
@property (assign,nonatomic) BOOL updateParticipantsText;                                                   //@synthesize updateParticipantsText=_updateParticipantsText - In the implementation block
@property (assign,nonatomic) BOOL showAllParticipants;                                                      //@synthesize showAllParticipants=_showAllParticipants - In the implementation block
@property (nonatomic,retain) NSArray * busyParticipants;                                                    //@synthesize busyParticipants=_busyParticipants - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tappedMoreRecognizer;                                 //@synthesize tappedMoreRecognizer=_tappedMoreRecognizer - In the implementation block
@property (assign,nonatomic) CGRect andMoreBoundingRect;                                                    //@synthesize andMoreBoundingRect=_andMoreBoundingRect - In the implementation block
+(double)_leftBuffer;
+(void)_setRequiredHuggingAndCompression:(id)arg1 ;
+(id)_generateParticipantTextView;
+(double)_rightBuffer;
+(id)_timeLabelFont;
+(id)_participantsTextViewFont;
+(id)_interParticipantSpacing;
+(id)_andMoreLeftSpacing;
+(id)_generateAndMoreStringWithCount:(unsigned long long)arg1 attributes:(id)arg2 ;
+(BOOL)_layoutManagerReportsExcessLines:(id)arg1 ;
+(id)_replaceSpacesWithNonBreakingSpaces:(id)arg1 ;
+(id)_nonBreakingSpace;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)updateConstraints;
-(double)_preferredMaxLayoutWidth;
-(BOOL)checked;
-(UIColor *)participantsTextColor;
-(UIColor *)timeTextColor;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)setShowPreviewOfEventAtTime:(id)arg1 ;
-(void)setAndMoreBoundingRect:(CGRect)arg1 ;
-(void)setTopTimeLabel:(UILabel *)arg1 ;
-(void)setBottomTimeLabel:(UILabel *)arg1 ;
-(void)setLabelForTextSizeTesting:(UILabel *)arg1 ;
-(void)setParticipantsTextView:(UITextView *)arg1 ;
-(void)setTextViewForTextSizeTesting:(UITextView *)arg1 ;
-(void)_showPreviewButtonTapped:(id)arg1 ;
-(void)setShowPreviewButton:(UIButton *)arg1 ;
-(void)_andMoreTapped:(id)arg1 ;
-(void)setTappedMoreRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setAndMoreDebugOverlay:(UIView *)arg1 ;
-(void)_resetFonts;
-(void)_resetPreferredMaxLayoutWidths;
-(void)setUpdateFontBasedConstraints:(BOOL)arg1 ;
-(UITapGestureRecognizer *)tappedMoreRecognizer;
-(UILabel *)topTimeLabel;
-(UILabel *)bottomTimeLabel;
-(UITextView *)participantsTextView;
-(UIButton *)showPreviewButton;
-(void)setTopTimeLabelToTopContentViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topTimeLabelToTopContentViewConstraint;
-(void)setBottomTimeLabelToTopTimeLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomTimeLabelToTopTimeLabelConstraint;
-(void)setParticipantsViewToBottomTimeLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantsViewToBottomTimeLabelConstraint;
-(void)setParticipantsViewToContentViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantsViewToContentViewConstraint;
-(void)setTopTimeLabelHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topTimeLabelHeightConstraint;
-(void)setBottomTimeLabelHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomTimeLabelHeightConstraint;
-(BOOL)updateFontBasedConstraints;
-(CGRect)andMoreBoundingRect;
-(void)setBusyParticipants:(NSArray *)arg1 ;
-(void)setShowAllParticipants:(BOOL)arg1 ;
-(void)_resetTimeTextIfNeeded;
-(void)_resetParticipantsTextIfNeeded;
-(void)setUpdateTimeText:(BOOL)arg1 ;
-(void)setUpdateParticipantsText:(BOOL)arg1 ;
-(UIView *)andMoreDebugOverlay;
-(id)showPreviewOfEventAtTime;
-(id)showAllConflictedParticipantsTapped;
-(UILabel *)labelForTextSizeTesting;
-(UITextView *)textViewForTextSizeTesting;
-(BOOL)updateTimeText;
-(BOOL)_textWillFit:(id)arg1 ;
-(BOOL)updateParticipantsText;
-(BOOL)_everyoneCanAttend;
-(NSArray *)busyParticipants;
-(BOOL)showAllParticipants;
-(id)_generateStringForAllParticipants:(id)arg1 ;
-(id)_generateStringForSomeParticipantsAndStampMoreBoundingRect:(id)arg1 ;
-(id)_textForParticipant:(id)arg1 color:(id)arg2 ;
-(id)_busyImageAttributedStringForColor:(id)arg1 ;
-(NSMutableDictionary *)colorToBusyImageAttributedString;
-(void)setColorToBusyImageAttributedString:(NSMutableDictionary *)arg1 ;
-(void)updateWithStartDate:(id)arg1 endDate:(id)arg2 busyParticipants:(id)arg3 showAllParticipants:(BOOL)arg4 checked:(BOOL)arg5 ;
-(void)setShowAllConflictedParticipantsTapped:(id)arg1 ;
-(NSDictionary *)andMoreStringCache;
-(void)setAndMoreStringCache:(NSDictionary *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
@end

