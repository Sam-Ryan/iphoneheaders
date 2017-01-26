/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UITableViewController.h>
#import <MobileCal/InboxTableViewDelegate.h>
#import <MobileCal/InboxTableViewGroupControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>

@protocol UIViewControllerPreviewing, InboxNewSectionViewControllerDelegate;
@class CalendarModel, NSArray, NSString;

@interface InboxNewSectionViewController : UITableViewController <InboxTableViewDelegate, InboxTableViewGroupControllerDelegate, UIViewControllerPreviewingDelegate_Deprecated> {

	CalendarModel* _model;
	BOOL _isRefreshing;
	double _minimumContentHeight;
	id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
	BOOL _viewIsVisible;
	id<InboxNewSectionViewControllerDelegate> _inboxNewSectionDelegate;
	NSArray* _allGroups;
	NSArray* _visibleGroups;
	long long _refreshCounter;

}

@property (assign,nonatomic,__weak) id<InboxNewSectionViewControllerDelegate> inboxNewSectionDelegate;              //@synthesize inboxNewSectionDelegate=_inboxNewSectionDelegate - In the implementation block
@property (retain) NSArray * allGroups;                                                                             //@synthesize allGroups=_allGroups - In the implementation block
@property (retain) NSArray * visibleGroups;                                                                         //@synthesize visibleGroups=_visibleGroups - In the implementation block
@property (assign,nonatomic) BOOL viewIsVisible;                                                                    //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) long long refreshCounter;                                                              //@synthesize refreshCounter=_refreshCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inboxWillDismiss;
-(void)inboxTableViewGroupController:(id)arg1 addedRows:(id)arg2 removedRows:(id)arg3 updatedRows:(id)arg4 ;
-(void)inboxTableViewGroupController:(id)arg1 inspectEvent:(id)arg2 ;
-(void)inboxTableViewGroupController:(id)arg1 viewCommentsForEvent:(id)arg2 ;
-(id)parentTableViewControllerForGroupController:(id)arg1 ;
-(id)noContentStringForInboxTableView:(id)arg1 ;
-(void)setInboxNewSectionDelegate:(id<InboxNewSectionViewControllerDelegate>)arg1 ;
-(NSArray *)visibleGroups;
-(void)_updateGroupVisibility;
-(void)_delegateShouldClose;
-(void)setVisibleGroups:(NSArray *)arg1 ;
-(id)_groupForSection:(long long)arg1 ;
-(id)_groupForIndexPath:(id)arg1 ;
-(id<InboxNewSectionViewControllerDelegate>)inboxNewSectionDelegate;
-(void)setAllGroups:(NSArray *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(NSArray *)allGroups;
-(void)_refreshIfNeeded;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(BOOL)viewIsVisible;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(void)_syncCompletedGracePeriodExpired;
-(void)refresh:(id)arg1 ;
-(void)_pulledToRefresh:(id)arg1 ;
-(BOOL)_canEnableRefresh;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_cancelSyncCompletedTimeout;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_beginSyncCompletedTimeout;
-(void)_syncDidStart;
-(void)_syncDidEnd;
-(long long)refreshCounter;
-(void)setRefreshCounter:(long long)arg1 ;
@end
