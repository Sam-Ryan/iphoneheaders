/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>
#import <libobjc.A.dylib/SUCellConfigurationView.h>

@class UIButton, NSString;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {

	UIButton* _leftButton;
	UIButton* _rightButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_reloadButtons;
-(void)setConfiguration:(id)arg1 ;
-(id)_newButton;
-(void)reloadView;
-(void)_buttonAction:(id)arg1 ;
@end

