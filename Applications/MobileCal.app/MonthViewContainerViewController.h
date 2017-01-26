/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MainViewControllerContainer.h>

@class CompactWidthMonthViewController, MultiColumnMonthViewController, LargeMonthViewController;

@interface MonthViewContainerViewController : MainViewControllerContainer {

	CompactWidthMonthViewController* _compactWidthController;
	MultiColumnMonthViewController* _compactHeightController;
	LargeMonthViewController* _regularController;

}

@property (nonatomic,retain) CompactWidthMonthViewController * compactWidthController;              //@synthesize compactWidthController=_compactWidthController - In the implementation block
@property (nonatomic,retain) MultiColumnMonthViewController * compactHeightController;              //@synthesize compactHeightController=_compactHeightController - In the implementation block
@property (nonatomic,retain) LargeMonthViewController * regularController;                          //@synthesize regularController=_regularController - In the implementation block
-(id)currentChildViewController;
-(id)childViewControllerForCompactWidthRegularHeight;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(BOOL)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(BOOL)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(CompactWidthMonthViewController *)compactWidthController;
-(void)setCompactWidthController:(CompactWidthMonthViewController *)arg1 ;
-(MultiColumnMonthViewController *)compactHeightController;
-(void)setCompactHeightController:(MultiColumnMonthViewController *)arg1 ;
-(LargeMonthViewController *)regularController;
-(void)setRegularController:(LargeMonthViewController *)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
@end
