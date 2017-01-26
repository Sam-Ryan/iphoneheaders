/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ETSettingsPeopleViewControllerDelegate;
@class UIPageViewController, FKFriendsManager, ETSettingsPeopleViewController, UILongPressGestureRecognizer, ETPersonView, NSTimer, FKPerson, NSString;

@interface ETPeopleViewCell : PSTableCell <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate> {

	UIPageViewController* _pageViewController;
	BOOL _shouldUsePageViewController;
	FKFriendsManager* _friendsManager;
	unsigned long long _currentPageIndex;
	ETSettingsPeopleViewController* _currentPeopleViewController;
	UILongPressGestureRecognizer* _reorderGestureRecognizer;
	ETPersonView* _draggedPersonView;
	double _draggedViewOffsetX;
	double _draggedViewOffsetY;
	NSTimer* _reorderDwellTimer;
	NSTimer* _marginDwellTimer;
	unsigned long long _lastValidMovePosition;
	ETSettingsPeopleViewController* _lastValidMovePeopleController;
	FKPerson* _selectedPersonAtStartOfMove;
	id<ETSettingsPeopleViewControllerDelegate> _peopleViewControllerDelegate;

}

@property (assign,nonatomic) id<ETSettingsPeopleViewControllerDelegate> peopleViewControllerDelegate;              //@synthesize peopleViewControllerDelegate=_peopleViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)peopleViewCellHeight;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)_groupListChanged:(id)arg1 ;
-(void)_reorderGestureRecognized:(id)arg1 ;
-(id<ETSettingsPeopleViewControllerDelegate>)peopleViewControllerDelegate;
-(void)_stopReorderDwellTimer;
-(void)_startReorderDwellTimer;
-(void)_stopMarginDwellTimer;
-(BOOL)_shouldStartMarginDwellTimer;
-(void)_marginDwellTimerFired;
-(void)_reorderDwellTimerFired;
-(unsigned long long)_convertToDialIndex:(unsigned long long)arg1 ;
-(id)_viewControllerForPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_closestOpenPositionToPosition:(unsigned long long)arg1 biasClockwise:(BOOL)arg2 numberOfMoves:(unsigned long long*)arg3 clockwiseDirection:(BOOL*)arg4 ;
-(void)_startMarginDwellTimerIfNecessary;
-(void)_reorderPersonIfPossible:(id)arg1 biasClockwise:(BOOL)arg2 ;
-(void)setPeopleViewControllerDelegate:(id<ETSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(long long)presentationCountForPageViewController:(id)arg1 ;
-(long long)presentationIndexForPageViewController:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

