/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/WAAnswer.siriUIBundle/WAAnswer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WAAnswer/WAAnswer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@protocol WAAttributionViewDelegate;
@class UIImage, UIButton;

@interface WAAttributionView : SiriUIContentCollectionViewCell {

	UIImage* _logoImage;
	UIButton* _attributionButton;
	id<WAAttributionViewDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * attributionButton;                               //@synthesize attributionButton=_attributionButton - In the implementation block
@property (assign,nonatomic,__weak) id<WAAttributionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAttributionButton:(UIButton *)arg1 ;
-(UIButton *)attributionButton;
-(void)attributionButtonTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAAttributionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WAAttributionViewDelegate>)delegate;
@end

