/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@protocol UIAccessibilityElementMockViewDelegateProtocol;
@class UIView;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {

	UIView* _view;
	id<UIAccessibilityElementMockViewDelegateProtocol> _delegate;
	long long _subviewIndex;

}

@property (nonatomic,retain) UIView * view;                                                            //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) id<UIAccessibilityElementMockViewDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long subviewIndex;                                                   //@synthesize subviewIndex=_subviewIndex - In the implementation block
-(void)setDelegate:(id<UIAccessibilityElementMockViewDelegateProtocol>)arg1 ;
-(void)dealloc;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)description;
-(id<UIAccessibilityElementMockViewDelegateProtocol>)delegate;
-(UIView *)view;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)setView:(UIView *)arg1 ;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityIdentification;
-(long long)accessibilityCompareGeometry:(id)arg1 ;
-(NSRange)accessibilityRowRange;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityUserTestingChildren;
-(int)_accessibilityScannerGroupTraits;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)_accessibilityIsScannerElement;
-(void)_accessibilitySetValue:(id)arg1 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)accessibilityContainerElements;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityScrollToVisible;
-(long long)subviewIndex;
-(void)setSubviewIndex:(long long)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(long long)arg1 ;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(long long)_accessibilityPageCount;
-(long long)_accessibilityPageIndex;
-(id)_accessibilityScrollAncestor;
-(void)revalidate;
-(id)_accessibilityUserTestingParent;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(id)_accessibilityUserTestingElementType;
@end

