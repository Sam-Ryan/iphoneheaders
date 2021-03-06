/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSAttributedString, NSString;

@interface TopBarTitleView : UIView {

	BOOL _allowsVeryLowMinimumScale;
	UIView* _clippingView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _extraDetailLabel;
	double _availableHeight;
	int _style;
	BOOL _isTitleAttributed;
	BOOL _isDetailAttributed;
	BOOL _isExtraDetailAttributed;
	BOOL _isMini;
	BOOL _isDimmed;
	BOOL _isUIDark;
	CGRect _idealBounds;
	CGRect _maxBounds;

}

@property (nonatomic,copy) NSAttributedString * attributedTitleLabelText; 
@property (nonatomic,copy) NSString * titleLabelText; 
@property (nonatomic,copy) NSString * accessibilityTitleLabelText; 
@property (nonatomic,copy) NSAttributedString * attributedDetailLabelText; 
@property (nonatomic,copy) NSString * detailLabelText; 
@property (nonatomic,copy) NSString * accessibilityDetailLabelText; 
@property (nonatomic,copy) NSAttributedString * attributedExtraDetailLabelText; 
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                        //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,getter=isMini,nonatomic) BOOL mini; 
@property (assign,nonatomic) BOOL allowsVeryLowMinimumScale;                                 //@synthesize allowsVeryLowMinimumScale=_allowsVeryLowMinimumScale - In the implementation block
@property (assign,nonatomic) int style;                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGRect idealBounds;                                             //@synthesize idealBounds=_idealBounds - In the implementation block
@property (assign,nonatomic) CGRect maxBounds;                                               //@synthesize maxBounds=_maxBounds - In the implementation block
+(int)titleStyleForActivity:(int)arg1 ;
-(id)newContainingBarButtonItem;
-(BOOL)allowsVeryLowMinimumScale;
-(NSString *)accessibilityTitleLabelText;
-(void)_updateAfterTextChange;
-(BOOL)isTitleLabelTextEmpty;
-(void)setTitleLabelText:(NSString *)arg1 ;
-(void)setAccessibilityTitleLabelText:(NSString *)arg1 ;
-(void)setDetailLabelText:(NSString *)arg1 ;
-(NSString *)titleLabelText;
-(id)initWithFrame:(CGRect)arg1 titleStyle:(int)arg2 ;
-(void)setTitle:(id)arg1 detail:(id)arg2 extraDetail:(id)arg3 ;
-(BOOL)isMini;
-(void)refreshStyle;
-(NSString *)detailLabelText;
-(void)crossFadeLabels;
-(void)setAttributedDetailLabelText:(NSAttributedString *)arg1 ;
-(NSString *)accessibilityDetailLabelText;
-(BOOL)isDetailLabelTextEmpty;
-(NSAttributedString *)attributedTitleLabelText;
-(NSAttributedString *)attributedExtraDetailLabelText;
-(void)_setFramesForBounds:(CGRect)arg1 ;
-(double)_paddingForLabels;
-(NSAttributedString *)attributedDetailLabelText;
-(id)defaultTitleFontWithDetail:(BOOL)arg1 ;
-(void)setAllowsVeryLowMinimumScale:(BOOL)arg1 ;
-(void)setShowsDimmedDisplay:(BOOL)arg1 darkUI:(BOOL)arg2 animation:(id)arg3 ;
-(void)setAttributedExtraDetailLabelText:(NSAttributedString *)arg1 ;
-(BOOL)_reduceFrameHeightForMultiLine:(CGRect)arg1 titleFont:(id)arg2 titleFrame:(CGRect*)arg3 detailFrame:(CGRect*)arg4 ;
-(void)setAccessibilityDetailLabelText:(NSString *)arg1 ;
-(void)_updateEstimatesDisplayGuidanceState:(int)arg1 eta:(id)arg2 isCompact:(BOOL)arg3 isDimmed:(BOOL)arg4 isUIDark:(BOOL)arg5 destinationDisplayName:(id)arg6 expandedCountdownTime:(id)arg7 distanceString:(id)arg8 countdownNumber:(id)arg9 countdownType:(unsigned long long)arg10 ;
-(void)_repositionLabelsSkipRepositioningIfUnchanged:(BOOL)arg1 ;
-(void)_centerLabelsIfPossible:(CGRect*)arg1 detailFrame:(CGRect*)arg2 ;
-(void)_setFramesForSingleLine:(CGRect*)arg1 detailFrame:(CGRect*)arg2 extraDetailFrame:(CGRect*)arg3 ;
-(void)_repositionLabelsOnSameLineForIPad;
-(CGRect)maxBounds;
-(id)initWithFrame:(CGRect)arg1 activity:(int)arg2 ;
-(id)defaultDetailFont;
-(void)setIdealBounds:(CGRect)arg1 ;
-(void)setAvailableHeight:(double)arg1 ;
-(void)updateEstimatesDisplayGuidanceState:(int)arg1 eta:(id)arg2 isCompact:(BOOL)arg3 isDimmed:(BOOL)arg4 isUIDark:(BOOL)arg5 destinationDisplayName:(id)arg6 expandedTravelTime:(id)arg7 distanceString:(id)arg8 ;
-(void)setMaxBounds:(CGRect)arg1 ;
-(CGRect)idealBounds;
-(void)setAttributedTitleLabelText:(NSAttributedString *)arg1 ;
-(void)updateTransitEstimatesDisplayGuidanceState:(int)arg1 eta:(id)arg2 isCompact:(BOOL)arg3 isDimmed:(BOOL)arg4 isUIDark:(BOOL)arg5 distanceString:(id)arg6 countdownNumber:(id)arg7 countdownType:(unsigned long long)arg8 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(UILabel *)titleLabel;
-(id)textColor;
-(id)titleFont;
-(UILabel *)detailLabel;
@end

