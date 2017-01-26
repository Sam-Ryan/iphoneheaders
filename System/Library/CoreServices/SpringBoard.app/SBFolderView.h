/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconListPageControlDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBIconScrollViewDelegate.h>

@protocol SBFolderViewDelegate;
@class NSMutableArray, NSMutableSet, SBIconListView, SBIconViewMap, SBAppStatusBarSettingsAssertion, SBIconListPageControl, SBIconScrollView, SBFolderTitleTextField, UIView, SBFakeStatusBarView, UISwipeGestureRecognizer, UITapGestureRecognizer, SBFolder, _UILegibilitySettings, NSArray, NSString;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SBIconScrollViewDelegate> {

	NSMutableArray* _iconListViews;
	NSMutableSet* _scrollingDisabledReasons;
	SBIconListView* _rotatingIconList;
	long long _minVisibleListViewIndex;
	long long _maxVisibleListViewIndex;
	long long _minAnimatingListViewIndex;
	long long _maxAnimatingListViewIndex;
	long long _disableUpdatingCurrentIconListCount;
	long long _firstDisplayedColumnOnCurrentList;
	BOOL _animatedScrolling;
	BOOL _scalingViewIsBorrowed;
	SBIconViewMap* _viewMap;
	NSMutableArray* _scrollFrames;
	unsigned long long _scrollFrameCount;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	unsigned long long _ignoreScrollingDidEndNotificationsCount;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	UIView* _scalingView;
	SBFakeStatusBarView* _reachabilityStatusBar;
	UISwipeGestureRecognizer* _swipeToCancelReachabilityGestureRecognizer;
	UISwipeGestureRecognizer* _swipeToRevealNotificationCenterGestureRecognizer;
	UITapGestureRecognizer* _tapToCancelReachabilityGestureRecognizer;
	BOOL _isEditing;
	BOOL _isScrolling;
	BOOL _rotating;
	long long _currentPageIndex;
	double _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder* _folder;
	long long _orientation;
	_UILegibilitySettings* _legibilitySettings;
	long long _animatingToOrientation;
	UIEdgeInsets _reachabilityStatusBarEdgeInsets;

}

@property (assign,nonatomic,__weak) id<SBFolderViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                         //@synthesize folder=_folder - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                           //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,getter=isScrolling,nonatomic) BOOL scrolling;                         //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) long long orientation;                                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long currentPageIndex;                              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews;                            //@synthesize iconListViews=_iconListViews - In the implementation block
@property (nonatomic,readonly) unsigned long long iconListViewCount; 
@property (nonatomic,readonly) SBIconViewMap * viewMap; 
@property (assign,nonatomic) double statusBarHeight;                                    //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) long long animatingToOrientation;                          //@synthesize animatingToOrientation=_animatingToOrientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets reachabilityStatusBarEdgeInsets;              //@synthesize reachabilityStatusBarEdgeInsets=_reachabilityStatusBarEdgeInsets - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                           //@synthesize rotating=_rotating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)handleRevealNotificationCenterGesture:(id)arg1 ;
-(id)currentIconListView;
-(SBIconViewMap *)viewMap;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(unsigned long long)iconListViewCount;
-(void)resetIconListViews;
-(void)updateIconListViews;
-(NSArray *)iconListViews;
-(void)_updateIconListFrames;
-(void)_updatePageControlToIndex:(long long)arg1 ;
-(void)_setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_newPageControl;
-(double)_offsetToCenterPageControlInSpaceForPageControl;
-(BOOL)shouldInstallFocusGuides;
-(void)prepareToOpen;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)noteUserIsInteractingWithIcons;
-(void)handleReachabilityActivated:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)resetContentOffsetToCurrentPage;
-(void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2 ;
-(BOOL)_scrollViewThinksItsScrolling;
-(void)didAnimate;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(void)prepareForZoomAnimation;
-(void)cleanUpAfterZoomAnimation;
-(BOOL)doesPageContainIconListView:(long long)arg1 ;
-(void)willAnimateWithSettings:(id)arg1 ;
-(void)setIconPageIndicatorImageSetCache:(id)arg1 ;
-(double)_titleFontSize;
-(void)_addIconListView:(id)arg1 ;
-(void)_removeIconListView:(id)arg1 ;
-(unsigned long long)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
-(CGRect)_frameForScalingView;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_currentPageIndexDidChange;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)_updateScalingViewFrame;
-(void)repositionForReachabilityActivated:(BOOL)arg1 animated:(BOOL)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(BOOL)_showsTitle;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(double)reachabilityYOffset;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)tearDownListViews;
-(BOOL)_updatesWallpaperRelativeCenter;
-(void)updateIconListIndexAndVisibility:(BOOL)arg1 ;
-(long long)_pageIndexForOffset:(double)arg1 ;
-(double)_pageWidth;
-(double)_scrollOffsetForFirstListView;
-(double)_scrollOffsetForPageAtIndex:(long long)arg1 ;
-(unsigned long long)_minusPageCount;
-(void)_purgeListViews;
-(void)_setAnimatedScrolling:(BOOL)arg1 ;
-(void)_endScrollingTest;
-(void)_endSpotlightScrollingTest;
-(void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(BOOL)arg2 ;
-(BOOL)_isValidPageIndex:(long long)arg1 ;
-(void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_setCurrentPageIndex:(long long)arg1 ;
-(void)_ignoreScrollingDidEndNotifications;
-(void)_unignoreScrollingDidEndNotifications;
-(id)_iconListViewAtIndex:(unsigned long long)arg1 ;
-(id)_createIconListViewForList:(id)arg1 ;
-(void)_addIconListViewsForModels:(id)arg1 ;
-(id)_iconListViewForList:(id)arg1 ;
-(CGSize)_scrollViewContentSize;
-(void)_resetIconListViews;
-(void)_updateIconListViews;
-(void)updateIconListIndexAndVisibility;
-(BOOL)_shouldDisableUpdatingCurrentIconList;
-(long long)lowestVisibleIconListIndexAndColumn:(long long*)arg1 columnsOnScreen:(long long*)arg2 totalLists:(unsigned long long)arg3 columnsPerList:(unsigned long long)arg4 ;
-(void)_pushDisableUpdateCurrentIconListCount;
-(id)_currentIconListView;
-(void)_popDisableUpdateCurrentIconListCount;
-(BOOL)_shouldIgnoreScrollingDidEndNotifications;
-(void)_setFolderName:(id)arg1 ;
-(void)_updateTitleLegibilitySettings;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg1 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(void)iconScrollView:(id)arg1 willSetContentOffset:(inout CGPoint*)arg2 ;
-(CGRect)scalingViewFrame;
-(BOOL)_hasMinusPages;
-(void)noteUserHasGrabbedIcon:(BOOL)arg1 ;
-(void)cleanupAfterClosing;
-(long long)animatingToOrientation;
-(void)setAnimatingToOrientation:(long long)arg1 ;
-(UIEdgeInsets)reachabilityStatusBarEdgeInsets;
-(void)setReachabilityStatusBarEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setScrolling:(BOOL)arg1 ;
-(void)setDelegate:(id<SBFolderViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBFolderViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)statusBarHeight;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(id)scrollView;
-(BOOL)isRotating;
-(id)_interactionTintColor;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setRotating:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(void)_orientationDidChange:(long long)arg1 ;
-(long long)currentPageIndex;
-(void)_layoutSubviews;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(void)setPageControlHidden:(BOOL)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
@end

