/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class UIButton, SearchUICardDetailsView, NSLayoutConstraint;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView {

	UIButton* _moreButton;
	SearchUICardDetailsView* _detailsView;
	NSLayoutConstraint* _moreButtonHorizontalInsetConstraint;

}

@property (retain) UIButton * moreButton;                                                 //@synthesize moreButton=_moreButton - In the implementation block
@property (retain) SearchUICardDetailsView * detailsView;                                 //@synthesize detailsView=_detailsView - In the implementation block
@property (retain) NSLayoutConstraint * moreButtonHorizontalInsetConstraint;              //@synthesize moreButtonHorizontalInsetConstraint=_moreButtonHorizontalInsetConstraint - In the implementation block
-(void)layoutSubviews;
-(UIButton *)moreButton;
-(void)setDetailsView:(SearchUICardDetailsView *)arg1 ;
-(SearchUICardDetailsView *)detailsView;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(void)setMoreButtonHorizontalInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)moreButtonHorizontalInsetConstraint;
-(void)moreButtonPressed;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

