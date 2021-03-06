/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNCColumnViewController.h>
#import <SpringBoard/SBWidgetHandling.h>
#import <SpringBoard/SBWidgetViewControllerDelegate.h>
#import <SpringBoard/SBNotificationCenterWidgetHost.h>
#import <libobjc.A.dylib/NCWidgetDataSourceObserver.h>
#import <SpringBoard/SBTodayViewSettingsViewControllerDelegate.h>

@protocol SBWidgetViewControllerDelegate, SBWidgetHandlingNCColumnViewControllerDelegate;
@class NSSet, NSMutableDictionary, NSArray, NSMutableSet, NSString;

@interface SBWidgetHandlingNCColumnViewController : SBNCColumnViewController <SBWidgetHandling, SBWidgetViewControllerDelegate, SBNotificationCenterWidgetHost, NCWidgetDataSourceObserver, SBTodayViewSettingsViewControllerDelegate> {

	NSMutableDictionary* _identifiersToWidgetSections;
	NSArray* _topLevelInterfaceItemIdentifierOrder;
	NSMutableSet* _defaultEnabledIDs;
	/*^block*/id _pendingVisibleWidgetCompletion;
	CGSize _cachedContentSize;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;
	id<SBWidgetHandlingNCColumnViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBWidgetHandlingNCColumnViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * visibleWidgetIDs; 
@property (assign,nonatomic,__weak) id<SBWidgetViewControllerDelegate> widgetDelegate;                        //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
+(id)interfaceItemForDatum:(id)arg1 fromDataSourceWithIdentifier:(id)arg2 ;
-(void)enableAllWidgets:(/*^block*/id)arg1 ;
-(void)_invokeBlockWithAllWidgets:(/*^block*/id)arg1 ;
-(BOOL)_isWidgetWithIdentifierEnabled:(id)arg1 ;
-(id)_sectionAfterSection:(id)arg1 inCollection:(id)arg2 ;
-(BOOL)_replaceWithWidgetRowIfPossible:(id)arg1 ;
-(BOOL)_insertWidgetRowIfPossible:(id)arg1 ;
-(BOOL)_removeWidgetRowIfPossible:(id)arg1 ;
-(BOOL)_replaceWithWidgetDatum:(id)arg1 ;
-(BOOL)_removeWidgetDatum:(id)arg1 ;
-(void)_sortInterfaceItems:(id)arg1 usingGuide:(id)arg2 ;
-(void)invalidateContentLayout;
-(void)remoteViewControllerDidConnectForWidget:(id)arg1 ;
-(void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2 ;
-(id<SBWidgetViewControllerDelegate>)widgetDelegate;
-(BOOL)shouldRequestWidgetRemoteViewControllers;
-(NSSet *)visibleWidgetIDs;
-(id)_widgetHandlingBulletinViewController;
-(void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1 ;
-(void)setWidgetDelegate:(id<SBWidgetViewControllerDelegate>)arg1 ;
-(void)_enableWidgetsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)widgetWithIdentifier:(id)arg1 ;
-(void)_refreshWidget:(id)arg1 launchStats:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(id)_orderedEnabledInterfaceItems;
-(void)reloadSortOrder;
-(void)updateWidgetsWithIdentifiers:(id)arg1 launchStats:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(/*^block*/id)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1 ;
-(BOOL)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)arg1 ;
-(long long)activeLayoutModeForWidget:(id)arg1 ;
-(id)extensionForWidget:(id)arg1 ;
-(CGSize)maxSizeForWidget:(id)arg1 ;
-(UIEdgeInsets)marginInsetsForWidget:(id)arg1 ;
-(long long)layoutModeForTodayViewSettingsViewController:(id)arg1 ;
-(id)todayViewSettingsViewController:(id)arg1 interfaceItemsForGroup:(id)arg2 ;
-(void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3 ;
-(Class)tableViewControllerClass;
-(id)_representedGroup;
-(id)_sectionInfoForDatum:(id)arg1 ;
-(void)insertAppropriateViewWithContent;
-(void)transitionToContentUnavailableViewIfNecessary;
-(void)invalidateDataAndRepopulateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)canRemoveViewOnDismissal:(id)arg1 ;
-(void)setDelegate:(id<SBWidgetHandlingNCColumnViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBWidgetHandlingNCColumnViewControllerDelegate>)delegate;
-(CGSize)contentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_invalidate;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(int)_nextSequenceNumber;
-(void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)widgetDataSource:(id)arg1 removeDatum:(id)arg2 ;
@end

