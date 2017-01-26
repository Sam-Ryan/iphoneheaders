/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIView;

@interface VOTUICaptionPanelViewController : UIViewController {

	UILabel* _captionPanelLanguage;
	UILabel* _captionPanelText;
	UIView* _lineView;
	double _captionTextOffset;

}

@property (nonatomic,retain) UILabel * captionPanelLanguage;              //@synthesize captionPanelLanguage=_captionPanelLanguage - In the implementation block
@property (nonatomic,retain) UILabel * captionPanelText;                  //@synthesize captionPanelText=_captionPanelText - In the implementation block
@property (nonatomic,retain) UIView * lineView;                           //@synthesize lineView=_lineView - In the implementation block
@property (assign,nonatomic) double captionTextOffset;                    //@synthesize captionTextOffset=_captionTextOffset - In the implementation block
-(UILabel *)captionPanelLanguage;
-(void)setCaptionPanelLanguage:(UILabel *)arg1 ;
-(void)setCaptionTextOffset:(double)arg1 ;
-(UILabel *)captionPanelText;
-(double)captionTextOffset;
-(void)parseMessage:(id)arg1 ;
-(void)setCaptionPanelText:(UILabel *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_layoutSubviews;
-(UIView *)lineView;
@end

