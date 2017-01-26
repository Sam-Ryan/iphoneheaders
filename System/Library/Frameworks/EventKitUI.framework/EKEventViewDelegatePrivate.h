/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKEventViewDelegatePrivate <EKEventViewDelegate>
@optional
-(void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1;
-(BOOL)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1;
-(BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(BOOL)arg3;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(BOOL)arg3;
-(void)eventViewController:(id)arg1 didDismissEditViewController:(id)arg2 deleted:(BOOL)arg3;
-(void)eventViewControllerDidBeginEditingEventWithEditViewController:(id)arg1;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(BOOL)arg2;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;
-(BOOL)eventViewControllerShouldHideInlineEditButton;
-(BOOL)eventViewControllerShouldHandleInlineEdit:(id)arg1;
-(void)eventViewControllerInlineEditButtonWasTapped:(id)arg1;
-(BOOL)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1;
-(BOOL)eventViewControllerShouldHideDeleteButton;
-(BOOL)eventViewControllerPresentationWantsHiddenNavBarForSingleController;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
-(BOOL)eventViewControllerShouldDismissSelf:(id)arg1;
-(void)eventViewControllerWillDisappear:(id)arg1;
-(BOOL)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(id)arg1;

@end

