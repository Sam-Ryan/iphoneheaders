/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIButtonBar, NSLayoutConstraint, _UIButtonBarButtonVisualProvider, NSArray;

@interface _UIGroupedBar : UIView {

	_UIButtonBar* _leftBar;
	_UIButtonBar* _centerBar;
	_UIButtonBar* _rightBar;
	NSLayoutConstraint* _centeringConstraint;
	NSLayoutConstraint* _leadingLimitConstraint;
	NSLayoutConstraint* _trailingLimitConstraint;
	BOOL _independentGroupSizes;
	double _margin;
	double _minimumInterItemSpace;
	double _minimumInterGroupSpace;
	double _leadingBarSizeLimit;
	double _trailingBarSizeLimit;
	_UIButtonBarButtonVisualProvider* _visualProvider;

}

@property (nonatomic,copy) NSArray * leadingBarButtonGroups; 
@property (nonatomic,copy) NSArray * centerBarButtonGroups; 
@property (nonatomic,copy) NSArray * trailingBarButtonGroups; 
@property (assign,nonatomic) BOOL independentGroupSizes;                                   //@synthesize independentGroupSizes=_independentGroupSizes - In the implementation block
@property (assign,nonatomic) double margin;                                                //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpace;                                 //@synthesize minimumInterItemSpace=_minimumInterItemSpace - In the implementation block
@property (assign,nonatomic) double minimumInterGroupSpace;                                //@synthesize minimumInterGroupSpace=_minimumInterGroupSpace - In the implementation block
@property (assign,nonatomic) double leadingBarSizeLimit;                                   //@synthesize leadingBarSizeLimit=_leadingBarSizeLimit - In the implementation block
@property (assign,nonatomic) double trailingBarSizeLimit;                                  //@synthesize trailingBarSizeLimit=_trailingBarSizeLimit - In the implementation block
@property (nonatomic,copy) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(void)didMoveToSuperview;
-(void)validateAllItems;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(void)_updateBarMargins;
-(void)_updateVisualProvider;
-(NSArray *)leadingBarButtonGroups;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(NSArray *)centerBarButtonGroups;
-(void)setCenterBarButtonGroups:(NSArray *)arg1 ;
-(NSArray *)trailingBarButtonGroups;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(void)setIndependentGroupSizes:(BOOL)arg1 ;
-(void)setMargin:(double)arg1 ;
-(void)setMinimumInterGroupSpace:(double)arg1 ;
-(void)setLeadingBarSizeLimit:(double)arg1 ;
-(void)setTrailingBarSizeLimit:(double)arg1 ;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(void)_setButtonAlpha:(double)arg1 ;
-(id)_debug;
-(BOOL)independentGroupSizes;
-(double)margin;
-(double)minimumInterItemSpace;
-(double)minimumInterGroupSpace;
-(double)leadingBarSizeLimit;
-(double)trailingBarSizeLimit;
@end

