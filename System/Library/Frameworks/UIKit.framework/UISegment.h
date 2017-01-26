/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, _UISegmentedControlAppearanceStorage, _UIFloatingContentView, NSString, _UIBadgeView, NSArray;

@interface UISegment : UIImageView {

	UIView* _info;
	_UISegmentedControlAppearanceStorage* _appearanceStorage;
	_UIFloatingContentView* _floatingContentView;
	double _width;
	CGSize _contentOffset;
	long long _barStyle;
	unsigned long long _rightSegmentState;
	NSString* _badgeValue;
	_UIBadgeView* _badgeView;
	id _objectValue;
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
		unsigned wasSelected : 1;
		unsigned needsBackgroundAndContentViewUpdate : 1;
	}  _segmentFlags;
	NSArray* _infoConstraints;
	double _requestedScaleFactor;

}

@property (setter=_setInfoConstraints:,nonatomic,copy) NSArray * _infoConstraints;              //@synthesize infoConstraints=_infoConstraints - In the implementation block
@property (getter=isSelected) BOOL selected; 
@property (getter=isMomentary) BOOL momentary; 
@property (assign) int controlSize; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (readonly) UIView * badgeView; 
@property (assign,nonatomic) double requestedScaleFactor;                                       //@synthesize requestedScaleFactor=_requestedScaleFactor - In the implementation block
+(id)_backgroundImageWithStorage:(id)arg1 style:(long long)arg2 mini:(BOOL)arg3 state:(unsigned long long)arg4 position:(unsigned)arg5 drawMode:(int*)arg6 defaultBlock:(/*^block*/id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(BOOL)useBlockyMagnificationInClassic;
-(id)_tintColorArchivingKey;
-(id)_encodableSubviews;
-(void)setTintColor:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tintColorDidChange;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setContentOffset:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(BOOL)isHighlighted;
-(int)controlSize;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(void)insertDividerView;
-(void)_updateTextColors;
-(void)setObjectValue:(id)arg1 ;
-(void)_commonSegmentInit;
-(id)_effectiveContentView;
-(id)objectValue;
-(BOOL)_isInMiniBar;
-(unsigned long long)_segmentState;
-(BOOL)_shouldUsePadMomentaryAppearance;
-(void)setNeedsBackgroundAndContentViewUpdate;
-(id)_dividerImageIsCustom:(BOOL*)arg1 ;
-(id)_dividerImage;
-(void)_updateBackgroundAndContentViews;
-(void)updateDividerViewForChangedSegment:(id)arg1 ;
-(void)_positionInfo;
-(BOOL)isMomentary;
-(BOOL)_hasSelectedColor;
-(void)updateMasking;
-(id)_attributedTextForState:(unsigned long long)arg1 selected:(BOOL)arg2 ;
-(id)disabledTextColor;
-(id)_currentOptionsStyleTextColor;
-(id)_currentOptionsStyleTextShadowColor;
-(void)_setEnabledAppearance:(BOOL)arg1 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_floatingContentView;
-(void)_invalidateInfoConstraints;
-(UIEdgeInsets)_paddingInsets;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(CGSize)_maximumTextSize;
-(double)_barHeight;
-(void)_setInfoConstraints:(id)arg1 ;
-(CGRect)contentRect;
-(void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(BOOL)arg4 ;
-(id)viewForLastBaselineLayout;
-(void)_updateBackgroundAndContentViewsIfNeeded;
-(id)initWithInfo:(id)arg1 style:(long long)arg2 size:(int)arg3 barStyle:(long long)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned)arg7 autosizeText:(BOOL)arg8 ;
-(void)updateForAppearance:(id)arg1 style:(int)arg2 ;
-(void)setWasSelected:(BOOL)arg1 ;
-(void)setAutosizeText:(BOOL)arg1 ;
-(UIView *)badgeView;
-(void)setMomentary:(BOOL)arg1 ;
-(BOOL)showDivider;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)animateAdd:(BOOL)arg1 ;
-(void)animateRemoveForWidth:(double)arg1 ;
-(void)_positionInfoWithoutAnimation;
-(id)label;
-(void)setRequestedScaleFactor:(double)arg1 ;
-(void)_forceInfoDisplay;
-(id)infoName;
-(double)_idealWidth;
-(NSArray *)_infoConstraints;
-(double)requestedScaleFactor;
@end

