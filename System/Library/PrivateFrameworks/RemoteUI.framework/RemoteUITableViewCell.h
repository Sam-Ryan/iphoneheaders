/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView, UIButton, UIColor;

@interface RemoteUITableViewCell : UITableViewCell {

	UIImageView* _invalidRowView;
	BOOL _leftAlignDetailLabel;
	long long _remoteUIAccessoryType;
	UIView* _remoteUIAccessoryView;
	UIButton* _detailLinkButton;
	/*^block*/id _detailLinkHandler;
	UIColor* _accessoryColor;
	BOOL _forceFullSizeDetailLabel;

}

@property (assign,nonatomic) BOOL forceFullSizeDetailLabel;                //@synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL leftAlignDetailLabel;                    //@synthesize leftAlignDetailLabel=_leftAlignDetailLabel - In the implementation block
@property (assign,nonatomic) long long remoteUIAccessoryType;              //@synthesize remoteUIAccessoryType=_remoteUIAccessoryType - In the implementation block
@property (nonatomic,retain) UIView * remoteUIAccessoryView;               //@synthesize remoteUIAccessoryView=_remoteUIAccessoryView - In the implementation block
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(void)setDetailLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setRemoteUIAccessoryView:(UIView *)arg1 ;
-(void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2 ;
-(void)_accessoriesChanged;
-(void)_detailLinkPressed;
-(void)setRemoteUIAccessoryType:(long long)arg1 ;
-(void)setRowInvalid:(BOOL)arg1 ;
-(BOOL)forceFullSizeDetailLabel;
-(void)setForceFullSizeDetailLabel:(BOOL)arg1 ;
-(BOOL)leftAlignDetailLabel;
-(void)setLeftAlignDetailLabel:(BOOL)arg1 ;
-(long long)remoteUIAccessoryType;
-(UIView *)remoteUIAccessoryView;
@end

