/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>

@class EnqueueableManagedNavigationController, UINavigationController, NSString, UITraitCollection;

@interface MainViewController : UIViewController <MainViewControllerOptionalMethods> {

	EnqueueableManagedNavigationController* _managedNavigationController;

}

@property (nonatomic,readonly) UINavigationController * managedNavigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) BOOL isTransitioningTraitCollection; 
@property (assign,nonatomic) BOOL isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) BOOL shouldAdaptEventViewControllers; 
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 showComments:(BOOL)arg4 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldAdaptEventViewControllers;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(void)setupUIForTraitCollection:(id)arg1 ;
-(UINavigationController *)managedNavigationController;
-(BOOL)shouldModallyPresentFirstShownViewController;
-(id)shownEventEditViewController;
-(void)invalidateManagedNavigationController;
-(id)shownEventViewController;
-(Class)managedNavigationControllerType;
-(void)_setManagedNavigationControllerModalPresentationDelegates;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2 ;
@end

