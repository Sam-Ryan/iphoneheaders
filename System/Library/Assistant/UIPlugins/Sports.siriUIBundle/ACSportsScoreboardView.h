/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsDomainObjectView.h>

@protocol ACSportsScoreboardViewDelegate;
@class SiriUIContentLabel, ACSportsLoadingImageView, UITapGestureRecognizer, SiriUIKeyline, UILabel, SASportsMatchup;

@interface ACSportsScoreboardView : ACSportsDomainObjectView {

	SiriUIContentLabel* _headerLabel;
	SiriUIContentLabel* _subtitleLabel;
	ACSportsLoadingImageView* _firstEntityLogoImageView;
	ACSportsLoadingImageView* _secondEntityLogoImageView;
	UITapGestureRecognizer* _firstEntityPunchOutGestureRecognizer;
	UITapGestureRecognizer* _secondEntityPunchOutGestureRecognizer;
	SiriUIKeyline* _topKeyline;
	UILabel* _venueNameLabel;
	SASportsMatchup* _matchup;
	id<ACSportsScoreboardViewDelegate> _delegate;

}

@property (nonatomic,retain) SASportsMatchup * matchup;                                       //@synthesize matchup=_matchup - In the implementation block
@property (assign,nonatomic,__weak) id<ACSportsScoreboardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)scoreboardViewWithMatchup:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(void)didChangeMatchupFromMatchup:(id)arg1 ;
-(void)_handlePunchOutGesture:(id)arg1 ;
-(void)_didChangeMatchupFromMatchup:(id)arg1 ;
-(id)_tapGestureRecognizerForLogo:(id)arg1 existingGestureRecognizer:(id)arg2 entity:(id)arg3 ;
-(BOOL)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(id)_addedLogoImageViewWithFrame:(CGRect)arg1 ;
-(double)lineScoreHeight;
-(void)setMatchup:(SASportsMatchup *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ACSportsScoreboardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ACSportsScoreboardViewDelegate>)delegate;
-(SASportsMatchup *)matchup;
@end

