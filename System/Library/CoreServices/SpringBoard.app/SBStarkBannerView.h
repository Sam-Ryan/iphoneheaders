/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBStarkBannerItemObserver.h>
#import <SpringBoard/SBDateLabelDelegate.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBStarkSessionConfiguring, NCNotificationDateLabel;
@class SBUIBannerContext, SBStarkBannerItem, UIImageView, UILabel, SBStarkBannerViewButton, NSString;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {

	id<SBStarkSessionConfiguring> _configuration;
	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	double _titleAscender;
	UILabel* _subTitleLabel;
	double _subTitleAscender;
	SBStarkBannerViewButton* _okButton;
	SBStarkBannerViewButton* _actionButton;
	UIEdgeInsets _contentInsets;
	UILabel*<NCNotificationDateLabel> _relevanceDateLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(BOOL)shouldBorrowScreen;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(id)_defaultRelevanceDateFont;
-(void)_setRelevanceDate:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 ;
-(BOOL)_hasSubtitle;
-(BOOL)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_categoryImageInsets;
-(UIEdgeInsets)_contentInsetsForActionType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(id)_titleFont;
-(void)dateLabelDidChange:(id)arg1 ;
@end

