/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView {

	double _reflectionHeight;
	double _spacing;
	double _reflectionAlpha;
	BOOL _useImageSize;
	unsigned _nonSquareImage : 1;
	UIImageView* _imageView;
	SUReflectionView* _reflection;

}

@property (assign,nonatomic) double reflectionSpacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) BOOL nonSquareImage; 
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2 ;
-(BOOL)nonSquareImage;
-(void)setNonSquareImage:(BOOL)arg1 ;
-(void)setReflectionAlphaWhenVisible:(double)arg1 ;
-(void)setReflectionVisible:(BOOL)arg1 ;
-(void)setUseImageSize:(BOOL)arg1 ;
-(double)reflectionSpacing;
-(void)setReflectionSpacing:(double)arg1 ;
@end

