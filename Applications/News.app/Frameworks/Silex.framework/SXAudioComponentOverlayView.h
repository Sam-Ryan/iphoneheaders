/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIImageView.h>

@protocol SXVideoOverlayButton;
@class UIView, UIImage, UIActivityIndicatorView;

@interface SXAudioComponentOverlayView : UIImageView {

	UIView*<SXVideoOverlayButton> _playButton;
	UIImage* _audioIndicatorImage;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) UIView*<SXVideoOverlayButton> playButton;                 //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,readonly) UIImage * audioIndicatorImage;                            //@synthesize audioIndicatorImage=_audioIndicatorImage - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIImage *)audioIndicatorImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)image;
-(UIActivityIndicatorView *)activityIndicator;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;
-(UIView*<SXVideoOverlayButton>)playButton;
@end

