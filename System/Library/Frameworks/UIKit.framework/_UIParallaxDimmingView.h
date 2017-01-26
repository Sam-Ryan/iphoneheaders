/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIColor, UIView;

@interface _UIParallaxDimmingView : UIView {

	UIImageView* leftEdgeFade;
	BOOL _backgroundIsDimmed;
	UIColor* _dimmingColor;
	UIView* _addingSubview;

}

@property (nonatomic,retain) UIColor * dimmingColor;               //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL backgroundIsDimmed;              //@synthesize backgroundIsDimmed=_backgroundIsDimmed - In the implementation block
@property (nonatomic,retain) UIView * addingSubview;               //@synthesize addingSubview=_addingSubview - In the implementation block
+(id)newDimmingViewWithFrame:(CGRect)arg1 ;
+(id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(BOOL)arg3 ;
+(id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setBackgroundIsDimmed:(BOOL)arg1 ;
-(void)_updateLeftEdgeFade:(BOOL)arg1 ;
-(void)crossFade;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(UIColor *)dimmingColor;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 shouldReverseLayoutDirection:(BOOL)arg3 ;
-(void)setAddingSubview:(UIView *)arg1 ;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 ;
-(UIView *)addingSubview;
-(BOOL)backgroundIsDimmed;
-(id)defaultBorderColor;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
@end

