/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, NSLayoutConstraint, MPUContentSizeLayoutConstraint, IKLockupElement, UILabel, MPUExtrasConstrainedArtworkContainerView;

@interface MPUExtrasGridCollectionViewCell : UICollectionViewCell {

	UIView* _spacerView;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	MPUContentSizeLayoutConstraint* _topLineHeight;
	MPUContentSizeLayoutConstraint* _subtitleLineHeight;
	NSLayoutConstraint* _spacerHeight;
	NSLayoutConstraint* _spacerTop;
	IKLockupElement* _lockupElement;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	MPUExtrasConstrainedArtworkContainerView* _artworkContainer;

}

@property (assign,nonatomic,__weak) IKLockupElement * lockupElement;                                     //@synthesize lockupElement=_lockupElement - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) MPUExtrasConstrainedArtworkContainerView * artworkContainer;              //@synthesize artworkContainer=_artworkContainer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(IKLockupElement *)lockupElement;
-(void)setLockupElement:(IKLockupElement *)arg1 ;
-(MPUExtrasConstrainedArtworkContainerView *)artworkContainer;
-(void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(BOOL)arg3 ;
-(void)configureForLockup:(id)arg1 cellStyle:(id)arg2 ;
@end

