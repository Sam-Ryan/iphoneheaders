/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/Reminders.axbundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/__RemindersCardStackViewAccessibility_super.h>

@interface RemindersCardStackViewAccessibility : __RemindersCardStackViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)cardViewPanDidBegin:(id)arg1 ;
-(double)_axIdealYPositionForCardView:(id)arg1 ;
-(void)_tileCardsForState:(int)arg1 eager:(BOOL)arg2 ;
-(double)_axCardSpacing;
-(id)_accessibilityPresentedCard;
-(void)cardViewPanDidEnd:(id)arg1 ;
-(int)_accessibilityCardStackViewState;
-(id)_accessibilityFirstViewInPileAtBottom;
-(void)_animateCardView:(id)arg1 toIndex:(long long)arg2 referenceView:(id)arg3 orderAbove:(BOOL)arg4 reorderAfter:(double)arg5 ;
-(id)_axListControllerForCardController:(id)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
-(BOOL)_accessibilityScrollingEnabled;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(void)setPresentationState:(int)arg1 animated:(BOOL)arg2 ;
@end

