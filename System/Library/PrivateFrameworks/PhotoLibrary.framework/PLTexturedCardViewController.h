/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLModalDimmingContained.h>

@class UIImageView, UIView, UINavigationBar, UINavigationController;

@interface PLTexturedCardViewController : UIViewController <PLModalDimmingContained> {

	UIImageView* _decorationView;
	UIImageView* _innerShadowView;
	UIView* _wrapperView;
	UINavigationBar* _navigationBar;
	UINavigationController* _navigationController;

}
-(void)dealloc;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_updateNavigationBarToOrientation:(long long)arg1 ;
-(void)_updateWrapperViewToOrientation:(long long)arg1 ;
-(CGSize)preferredSizeInParentViewController;
-(CGPoint)preferredOffsetInParentViewController;
@end

