/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/_UIBackdropViewObserver.h>

@class UIImageView, _UIBackdropView;

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver> {

	UIImageView* _titleMaskImageView;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) UIImageView * titleMaskImageView;              //@synthesize titleMaskImageView=_titleMaskImageView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                //@synthesize backdropView=_backdropView - In the implementation block
+(id)autoLayoutCommonWallpaperButtonWithStyle:(long long)arg1 ;
+(id)autoLayoutCommonWallpaperButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)_setupBackdropView;
-(UIImageView *)titleMaskImageView;
-(void)setTitleMaskImageView:(UIImageView *)arg1 ;
@end

