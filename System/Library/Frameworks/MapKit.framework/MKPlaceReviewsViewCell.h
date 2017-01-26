/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, MKStarRatingView, UILabel, NSDate, NSLayoutConstraint, UIImage, NSString;

@interface MKPlaceReviewsViewCell : UITableViewCell {

	UIImageView* _pictureView;
	MKStarRatingView* _starView;
	UILabel* _authorLabel;
	UILabel* _dateLabel;
	UILabel* _reviewLabel;
	NSDate* _date;
	NSLayoutConstraint* _authorLabelBaselineConstraint;
	NSLayoutConstraint* _dateLabelBaselineConstraint;
	NSLayoutConstraint* _reviewLabelBaselineConstraint;
	NSLayoutConstraint* _reviewLabelToBottomConstraint;
	NSLayoutConstraint* _reviewLabelHeightConstraint;

}

@property (assign,nonatomic,__weak) UIImage * picture; 
@property (assign,nonatomic,__weak) NSString * author; 
@property (assign,nonatomic,__weak) NSDate * date; 
@property (assign,nonatomic,__weak) NSString * reviewText; 
@property (assign,nonatomic) unsigned long long rating; 
+(id)reuseIdentifier;
+(double)intrinsicContentHeight;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)updateConstraints;
-(void)setDate:(NSDate *)arg1 ;
-(void)setRating:(unsigned long long)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(id)fontForAuthor;
-(void)setReviewText:(NSString *)arg1 ;
-(void)contentSizeDidChange;
-(void)setPicture:(UIImage *)arg1 ;
-(void)refreshMarginConstraints;
@end

