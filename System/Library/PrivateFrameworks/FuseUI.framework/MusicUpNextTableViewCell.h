/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicEntityHorizontalLockupTableViewCell.h>

@protocol MusicUpNextReorderLayoutDelegate;
@class UIView;

@interface MusicUpNextTableViewCell : MusicEntityHorizontalLockupTableViewCell {

	UIView* _hairlineView;
	id<MusicUpNextReorderLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<MusicUpNextReorderLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
-(id<MusicUpNextReorderLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MusicUpNextReorderLayoutDelegate>)arg1 ;
@end

