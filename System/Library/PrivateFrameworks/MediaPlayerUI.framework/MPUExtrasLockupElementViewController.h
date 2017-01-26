/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/MPUExtrasViewElementViewController.h>

@class MPUExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, MPUContentSizeLayoutConstraint, IKLockupElement, NSString;

@interface MPUExtrasLockupElementViewController : MPUExtrasViewElementViewController {

	MPUExtrasConstrainedArtworkContainerView* _artworkContainerView;
	UIView* _textContainmentView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _artworkContainerTopConstraint;
	NSLayoutConstraint* _artworkContainerXConstraint;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	CGSize _artworkSize;
	NSLayoutConstraint* _textTopConstraint;
	NSLayoutConstraint* _textHeightConstraint;
	NSLayoutConstraint* _textCenterYConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	NSLayoutConstraint* _textTrailingConstraint;
	NSLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _titleVerticalConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	MPUContentSizeLayoutConstraint* _descriptionBaselineConstraint;

}

@property (readonly) IKLockupElement * viewElement; 
@property (readonly) NSString * descriptionTextStyle; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithViewElement:(id)arg1 ;
-(void)_prepareLayout;
-(void)_configureTitleLabelForTextElement:(id)arg1 ;
-(void)_configureSubtitleLabelForTextElement:(id)arg1 ;
-(void)_configureDescriptionLabelForTextElement:(id)arg1 ;
-(void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2 ;
-(NSString *)descriptionTextStyle;
-(void)_handlePress:(id)arg1 ;
@end

