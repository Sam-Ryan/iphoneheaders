/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/_SBFVibrantView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _SBFVibrantSettings, _UILegibilitySettings, UIImage, NSString, UIView, UILabel, UIImageView, SBUILegibilityView, SBUILegibilityLabel;

@interface SBUIVibrantButton : UIControl <_SBFVibrantView, SBUILegibility> {

	_SBFVibrantSettings* _vibrantSettings;
	_UILegibilitySettings* _legibilitySettings;
	UIImage* _glyphImage;
	NSString* _title;
	double _minimumTitleScaleFactor;
	UIView* _vibrantMaskView;
	UILabel* _vibrantMaskLabel;
	UIImageView* _vibrantMaskGlyphView;
	UIView* _vibrantGlyph;
	UIView* _vibrantGlyphBackgroundView;
	UIView* _vibrantGlyphTintView;
	UIView* _nonVibrantGlyph;
	SBUILegibilityView* _nonVibrantGlyphLegibilityView;
	SBUILegibilityLabel* _nonVibrantLegibilityLabel;
	BOOL _vibrancyAllowed;

}

@property (assign,getter=isVibrancyAllowed,nonatomic) BOOL vibrancyAllowed;              //@synthesize vibrancyAllowed=_vibrancyAllowed - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                       //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double minimumTitleScaleFactor;                             //@synthesize minimumTitleScaleFactor=_minimumTitleScaleFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;                      //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
+(id)_labelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2 ;
-(void)_setUpForCurrentVibrancy;
-(BOOL)_shouldUseVibrancy;
-(CGSize)_sizeThatFitsWithVibrancy;
-(CGSize)_sizeThatFitsWithoutVibrancy;
-(void)_layoutVibrantSubviews;
-(void)_layoutNonVibrantSubviews;
-(void)_updateForState;
-(BOOL)isVibrancyAllowed;
-(CGSize)_sizeThatFitsForLabelView:(id)arg1 ;
-(CGRect)_labelFrameForSize:(CGSize)arg1 baselineOffset:(double)arg2 inRect:(CGRect)arg3 ;
-(CGRect)_glyphFrameForSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
-(double)_alphaForState;
-(id)_lazyGlyphLegibilityView;
-(void)setVibrancyAllowed:(BOOL)arg1 ;
-(void)setMinimumTitleScaleFactor:(double)arg1 ;
-(double)minimumTitleScaleFactor;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(UIImage *)glyphImage;
@end

