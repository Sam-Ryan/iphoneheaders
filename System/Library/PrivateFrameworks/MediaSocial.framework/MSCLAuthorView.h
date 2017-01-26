/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, UILabel, NSString, UIControl;

@interface MSCLAuthorView : UIView {

	UIButton* _authorNameButton;
	UIView* _bottomSeparatorView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * authorName; 
@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,readonly) UIControl * authorNameButton;              //@synthesize authorNameButton=_authorNameButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
-(UIControl *)authorNameButton;
@end

