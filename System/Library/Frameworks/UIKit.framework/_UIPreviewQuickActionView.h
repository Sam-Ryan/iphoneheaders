/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIPreviewAction, UIImageView, UILabel;

@interface _UIPreviewQuickActionView : UIView {

	BOOL _selected;
	UIPreviewAction* _quickAction;
	UIImageView* _backgroundViewImage;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,retain) UIPreviewAction * quickAction;                         //@synthesize quickAction=_quickAction - In the implementation block
@property (assign,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * backgroundViewImage;              //@synthesize backgroundViewImage=_backgroundViewImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)centerYAnchor;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)selected;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_updateCircleBackgroundImage;
-(void)updateFromQuickAction;
-(UIPreviewAction *)quickAction;
-(UIImageView *)backgroundViewImage;
-(void)setQuickAction:(UIPreviewAction *)arg1 ;
-(void)setBackgroundViewImage:(UIImageView *)arg1 ;
@end

