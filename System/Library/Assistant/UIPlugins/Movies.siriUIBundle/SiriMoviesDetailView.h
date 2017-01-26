/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class SAMovieV2MovieDetailSnippet, SiriMoviesMovieCreditsView, SiriMoviesMovieInfoView, SiriUIDownloadableImageView, SiriUIKeyline, UIImageView, UILabel, SiriMoviesChevronButton, SiriUIChevronButton, UIButton, SiriUIContentButton;

@interface SiriMoviesDetailView : UIView {

	SAMovieV2MovieDetailSnippet* _snippet;
	SiriMoviesMovieCreditsView* _movieCreditsView;
	SiriMoviesMovieInfoView* _movieInfoView;
	SiriUIDownloadableImageView* _posterImageView;
	SiriUIKeyline* _keylineAboveReviewsButton;
	UIImageView* _trailerPlayImageView;
	UILabel* _synopsisLabel;
	int _style;
	SiriMoviesChevronButton* _showtimesButton;
	SiriUIChevronButton* _reviewsButton;
	UIButton* _watchTrailerButton;

}

@property (nonatomic,readonly) SiriMoviesChevronButton * showtimesButton;              //@synthesize showtimesButton=_showtimesButton - In the implementation block
@property (nonatomic,readonly) SiriUIChevronButton * reviewsButton;                    //@synthesize reviewsButton=_reviewsButton - In the implementation block
@property (nonatomic,readonly) UIButton * watchTrailerButton;                          //@synthesize watchTrailerButton=_watchTrailerButton - In the implementation block
@property (nonatomic,readonly) SiriUIContentButton * buyOnITunesButton; 
@property (nonatomic,readonly) SiriUIContentButton * rentOnITunesButton; 
@property (assign,nonatomic) int style;                                                //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 movieDetailSnippet:(id)arg2 ;
-(SiriUIChevronButton *)reviewsButton;
-(double)_posterHeight;
-(UIButton *)watchTrailerButton;
-(BOOL)_hasShowtimes;
-(double)_posterWidth;
-(SiriUIContentButton *)rentOnITunesButton;
-(SiriMoviesChevronButton *)showtimesButton;
-(SiriUIContentButton *)buyOnITunesButton;
-(double)_reviewsButtonContentLeftInset;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(BOOL)arg2 ;
-(CGRect)_layoutTrailerButtonForPosterFrame:(CGRect)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(double)_leftInset;
-(double)_rightInset;
-(UIEdgeInsets)defaultViewInsets;
@end

