/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CKAttachmentView.h>
@class CKMediaObject, UIImageView;


@protocol CKAttachmentView <NSObject>
@property (nonatomic,retain) CKMediaObject * mediaObject; 
@property (nonatomic,readonly) UIImageView * iconImageView; 
@required
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(UIImageView *)iconImageView;
-(void)setMediaObject:(id)arg1;
-(CKMediaObject *)mediaObject;

@end


@class CKMediaObject, UIImageView, UILabel, NSString;

@interface CKAttachmentView : UIView <CKAttachmentView> {

	CKMediaObject* _mediaObject;
	UIImageView* _iconImageView;
	UILabel* _actionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                    //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)action;
-(id)title;
-(UILabel *)titleLabel;
-(void)setAction:(id)arg1 ;
-(void)prepareForReuse;
-(id)subtitle;
-(UILabel *)subtitleLabel;
-(void)setIcon:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)prepareForDisplay;
-(id)icon;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)mediaObject;
@end

