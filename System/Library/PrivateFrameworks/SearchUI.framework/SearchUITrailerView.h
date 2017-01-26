/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SKUIPlayButton, NSURL, SearchUICardViewController;

@interface SearchUITrailerView : UIView {

	UILabel* _titleLabel;
	SKUIPlayButton* _playButton;
	NSURL* _url;
	SearchUICardViewController* _controller;

}

@property (retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) SKUIPlayButton * playButton;                          //@synthesize playButton=_playButton - In the implementation block
@property (retain) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (__weak) SearchUICardViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSURL *)url;
-(UILabel *)titleLabel;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(SearchUICardViewController *)controller;
-(void)setController:(SearchUICardViewController *)arg1 ;
-(void)playTrailer;
-(SKUIPlayButton *)playButton;
-(id)initWithTitle:(id)arg1 image:(id)arg2 url:(id)arg3 controller:(id)arg4 ;
-(void)setPlayButton:(SKUIPlayButton *)arg1 ;
@end

