/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl, UIKBThemedView, UISegmentedControl;

@interface UIKeyboardCandidateSortControl : UIView {

	UIKeyboardCandidateBarSegmentControl* _segmentedControl;
	int _candidatesVisualStyle;
	BOOL _legacyAlertAppearance;
	UIKBThemedView* _themedView;

}

@property (readonly) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UIKBThemedView * themedView;                //@synthesize themedView=_themedView - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(id)initWithFrame:(CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(BOOL)arg3 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSortControlTitles:(id)arg1 ;
-(void)selectPreviousSegment;
-(void)selectNextSegment;
-(void)updateTitleTextAttributes;
-(void)addSegmentedControlWithFrame:(CGRect)arg1 ;
-(BOOL)needsToUpdateSortControlForTitles:(id)arg1 ;
@end

