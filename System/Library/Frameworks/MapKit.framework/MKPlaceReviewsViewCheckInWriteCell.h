/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol MKPlaceReviewsViewCheckInWriteCellDelegate;
@class UILabel, NSMutableArray, NSArray, NSAttributedString;

@interface MKPlaceReviewsViewCheckInWriteCell : UITableViewCell {

	UILabel* _checkInLabel;
	UILabel* _writeReviewLabel;
	id<MKPlaceReviewsViewCheckInWriteCellDelegate> _delegate;
	NSMutableArray* _scaledConstraints;
	NSArray* _marginConstraints;

}

@property (nonatomic,retain) NSAttributedString * checkInTitle; 
@property (nonatomic,retain) NSAttributedString * writeReviewTitle; 
@property (assign,nonatomic,__weak) id<MKPlaceReviewsViewCheckInWriteCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * scaledConstraints;                                          //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                                                 //@synthesize marginConstraints=_marginConstraints - In the implementation block
+(id)reuseIdentifier;
+(double)intrinsicContentHeight;
-(void)setDelegate:(id<MKPlaceReviewsViewCheckInWriteCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MKPlaceReviewsViewCheckInWriteCellDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)setCheckInTitle:(NSAttributedString *)arg1 ;
-(NSArray *)marginConstraints;
-(void)setWriteReviewTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)writeReviewTitle;
-(NSMutableArray *)scaledConstraints;
-(void)contentSizeDidChange;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)refreshMarginConstraints;
-(id)newLabel;
-(id)updatedAttributedString:(id)arg1 onlyUpdateColor:(BOOL)arg2 ;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(NSAttributedString *)checkInTitle;
-(void)cellTapped:(id)arg1 ;
@end

