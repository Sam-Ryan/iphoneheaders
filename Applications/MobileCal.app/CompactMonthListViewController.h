/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing, CompactMonthListViewControllerDelegate;
@class CalendarModel, NSMutableArray, UIView, EKUIRecurrenceAlertController, NSObject, NSString;

@interface CompactMonthListViewController : UITableViewController <UIViewControllerPreviewingDelegate> {

	CalendarModel* _model;
	NSMutableArray* _selectedDayOccurrences;
	BOOL _loadingOccurrenceCache;
	BOOL _willFlashOccurrenceTableScrollIndicators;
	UIView* _noEventsView;
	double _cachedRowHeight;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
	BOOL _disabled;
	NSObject*<CompactMonthListViewControllerDelegate> _compactMonthListViewDelegate;

}

@property (assign,nonatomic) NSObject*<CompactMonthListViewControllerDelegate> compactMonthListViewDelegate;              //@synthesize compactMonthListViewDelegate=_compactMonthListViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                                               //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_eventForRowAtIndexPath:(id)arg1 ;
-(void)_deleteEventAtIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_selectedDateChanged:(id)arg1 ;
-(void)_reloadOccurrenceData;
-(void)_occurrencesChanged:(id)arg1 ;
-(void)_flashOccurrenceTableScrollIndicators;
-(void)_adjustNoEventsLabelFrame;
-(void)_updateOccurrenceTable;
-(void)_updateOccurrenceTableWithForce:(BOOL)arg1 ;
-(id)_createNoEventsView;
-(NSObject*<CompactMonthListViewControllerDelegate>)compactMonthListViewDelegate;
-(double)_rowHeight;
-(void)_purgeCachedOccurrence:(id)arg1 ;
-(void)deselectAllRowsAnimated:(BOOL)arg1 ;
-(void)setCompactMonthListViewDelegate:(NSObject*<CompactMonthListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)forceUpdate;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_contentCategorySizeChanged:(id)arg1 ;
@end
