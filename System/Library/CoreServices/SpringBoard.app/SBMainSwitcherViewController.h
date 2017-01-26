/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <SpringBoard/SBMainAppSwitcherContentViewControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol SBMainAppSwitcherContentViewControlling;
@class NSMutableArray, SBAppSwitcherServiceSet, SBAppSwitcherRemoteAlertSet, SBBestAppSuggestion, UIViewController, SBSwitcherContainerView, SBDisplayItem, SBMainDisplayLayoutState, NSMutableDictionary, SBAppSwitcherSettings, NSMutableSet, _UILegibilitySettings, SBAppStatusBarSettingsAssertion, FBUIApplicationSceneDeactivationAssertion, NSString;

@interface SBMainSwitcherViewController : SBLayoutElementViewController <SBMainAppSwitcherContentViewControllerDelegate, _UISettingsKeyObserver> {

	NSMutableArray* _displayItems;
	SBAppSwitcherServiceSet* _switcherServices;
	SBAppSwitcherRemoteAlertSet* _switcherRemoteAlerts;
	SBBestAppSuggestion* _bestAppSuggestion;
	UIViewController*<SBMainAppSwitcherContentViewControlling> _contentViewController;
	SBSwitcherContainerView* _contentView;
	SBDisplayItem* _returnToDisplayItem;
	SBDisplayItem* _returnToSideDisplayItem;
	SBDisplayItem* _initialDisplayItem;
	SBMainDisplayLayoutState* _initialLayoutState;
	NSMutableDictionary* _otherReturnToElementsByRole;
	BOOL _visible;
	SBAppSwitcherSettings* _settings;
	Class _contentViewControllerClass;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	NSMutableSet* _appsHostedForTermination;
	_UILegibilitySettings* _legibilitySettings;
	SBAppStatusBarSettingsAssertion* _showStatusBarForSwitcherAssertion;
	FBUIApplicationSceneDeactivationAssertion* _appSwitcherResignActiveAssertion;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem;                                    //@synthesize returnToDisplayItem=_returnToDisplayItem - In the implementation block
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem;                            //@synthesize returnToSideDisplayItem=_returnToSideDisplayItem - In the implementation block
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem;                                      //@synthesize initialDisplayItem=_initialDisplayItem - In the implementation block
@property (setter=_setInitialLayoutState:,nonatomic,copy) SBMainDisplayLayoutState * _initialLayoutState;                           //@synthesize initialLayoutState=_initialLayoutState - In the implementation block
@property (setter=_setOtherReturnToElementsByRole:,nonatomic,copy) NSMutableDictionary * _otherReturnToElementsByRole;              //@synthesize otherReturnToElementsByRole=_otherReturnToElementsByRole - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)toggleSwitcherNoninteractively;
-(double)scaleForDownscaledSnapshotGeneration;
-(BOOL)activateSwitcherNoninteractively;
-(void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3 ;
-(SBDisplayItem *)_returnToDisplayItem;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(SBDisplayItem *)_initialDisplayItem;
-(id)_displayItemFromLayoutElement:(id)arg1 ;
-(void)switcherContentController:(id)arg1 selectedItem:(id)arg2 ;
-(BOOL)switcherContentController:(id)arg1 canDeleteItem:(id)arg2 ;
-(void)switcherContentController:(id)arg1 deletedItem:(id)arg2 ;
-(void)endInteractionWithCommitment:(BOOL)arg1 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(id)nextDisplayItem;
-(void)endTransitionWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setReturnToDisplayItem:(id)arg1 ;
-(void)_setReturnToSideDisplayItem:(id)arg1 ;
-(void)_setInitialDisplayItem:(id)arg1 ;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1 ;
-(id)pageForDisplayItem:(id)arg1 ;
-(void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2 ;
-(void)_appActivationStateDidChange:(id)arg1 ;
-(BOOL)canTransitionWithTranslation;
-(void)startTransitionPresenting:(BOOL)arg1 withRequest:(id)arg2 ;
-(void)performPresentationAnimationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)supportsReuse;
-(void)_switcherModelChanged:(id)arg1 ;
-(void)_updateContentViewControllerClassFromSettings;
-(void)_warmAppInfoForAppsInList;
-(/*^block*/id)_activateSwitcherValidatorWithEventLabel:(id)arg1 transactionProvider:(/*^block*/id)arg2 ;
-(/*^block*/id)_dismissSwitcherValidatorWithEventLabel:(id)arg1 transactionProvider:(/*^block*/id)arg2 ;
-(/*^block*/id)_toggleSwitcherTransitionValidator;
-(void)_quitAppRepresentedByDisplayItem:(id)arg1 forReason:(long long)arg2 ;
-(void)_insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_displayItemFromAlert:(id)arg1 ;
-(id)_entityForDisplayItem:(id)arg1 ;
-(NSMutableDictionary *)_otherReturnToElementsByRole;
-(void)_configureRequestForDismissal:(id)arg1 withEventLabel:(id)arg2 ;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg1 ;
-(void)_switcherServiceRemoved:(id)arg1 ;
-(void)_switcherServiceAdded:(id)arg1 ;
-(void)_switcherRemoteAlertRemoved:(id)arg1 ;
-(void)_switcherRemoteAlertAdded:(id)arg1 ;
-(void)_continuityAppSuggestionChanged:(id)arg1 ;
-(void)_rebuildAppListCache;
-(void)_updateBestAppSuggestion;
-(void)_lockOrientationForSwitcher;
-(void)_releaseSwitcherOrientationLock;
-(void)_disableContextHostingForApp:(id)arg1 ;
-(void)_destroyAppListCache;
-(void)_insertSwitcherService:(id)arg1 atIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg1 ;
-(void)_cacheAppList;
-(void)_removeDisplayItem:(id)arg1 updateScrollPosition:(BOOL)arg2 forReason:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_temporarilyHostAppForQuitting:(id)arg1 ;
-(void)setReturnToDisplayItem:(id)arg1 ;
-(void)performDismissAnimationForTransitionRequest:(id)arg1 toDisplayItem:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_setPreviousLayoutState:(id)arg1 withTopAlert:(id)arg2 ;
-(void)_insertApp:(id)arg1 atIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertRemoteAlertPlaceholder:(id)arg1 atIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeRemoteAlertPlaceholder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setOtherReturnToElementsByRole:(id)arg1 ;
-(id)_initWithDisplay:(id)arg1 ;
-(void)dealloc;
-(id)view;
-(void)loadView;
-(void)prepareForReuse;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_contentViewController;
-(id)initWithDisplay:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)dismissSwitcherNoninteractively;
@end

