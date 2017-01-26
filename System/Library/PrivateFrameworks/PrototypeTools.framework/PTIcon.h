/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString, _UILegibilityLabel, _UILegibilityView, UIImageView, PTIconSettings;

@interface PTIcon : UIView {

	UIImage* _image;
	NSString* _title;
	_UILegibilityLabel* _label;
	_UILegibilityView* _iconLegibilityView;
	UIImageView* _imageView;
	PTIconSettings* _iconSettings;
	CFRunLoopObserverRef _runLoopObserver;
	SCD_Struct_PT1 _imageStatistics;

}

@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) _UILegibilityView * iconLegibilityView;              //@synthesize iconLegibilityView=_iconLegibilityView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PTIconSettings * iconSettings;                       //@synthesize iconSettings=_iconSettings - In the implementation block
@property (assign,nonatomic) SCD_Struct_PT1 imageStatistics;                      //@synthesize imageStatistics=_imageStatistics - In the implementation block
@property (assign,nonatomic) CFRunLoopObserverRef runLoopObserver;                //@synthesize runLoopObserver=_runLoopObserver - In the implementation block
+(id)iconWithImage:(id)arg1 title:(id)arg2 ;
+(id)iconWithImageName:(id)arg1 title:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UIImageView *)imageView;
-(_UILegibilityLabel *)label;
-(void)setLabel:(_UILegibilityLabel *)arg1 ;
-(CGRect)labelFrame;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImageStatistics:(SCD_Struct_PT1)arg1 ;
-(SCD_Struct_PT1)imageStatistics;
-(_UILegibilityView *)iconLegibilityView;
-(void)setIconLegibilityView:(_UILegibilityView *)arg1 ;
-(PTIconSettings *)iconSettings;
-(void)setIconSettings:(PTIconSettings *)arg1 ;
-(CFRunLoopObserverRef)runLoopObserver;
-(void)setRunLoopObserver:(CFRunLoopObserverRef)arg1 ;
@end
