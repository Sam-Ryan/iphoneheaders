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
#import <MobileCal/CalendarMessageCellDelegate.h>

@protocol UIViewControllerPreviewing, InboxRepliedSectionViewControllerDelegate;
@class CalendarModel, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface InboxRepliedSectionViewController : UITableViewController <InboxTableViewDelegate, CalendarMessageCellDelegate> {

	CalendarModel* _model;
	NSArray* _occurrenceInfos;
	NSMutableArray* _itemCache;
	BOOL _needsRefresh;
	double _minimumContentHeight;
	BOOL _viewIsVisible;
	NSMutableDictionary* _pendingComments;
	id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
	id<InboxRepliedSectionViewControllerDelegate> _inboxRepliedSectionDelegate;

}

@property (assign,nonatomic,__weak) id<InboxRepliedSectionViewControllerDelegate> inboxRepliedSectionDelegate;              //@synthesize inboxRepliedSectionDelegate=_inboxRepliedSectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inboxWillDismiss;
-(void)messageCell:(id)arg1 committedComment:(id)arg2 ;
-(void)performAction:(long long)arg1 forCell:(id)arg2 ;
-(void)_savePendingComments;
-(id)eventStoreForCell:(id)arg1 ;
-(id)noContentStringForInboxTableView:(id)arg1 ;
-(id)_eventForIndexPath:(id)arg1 ;
-(void)setInboxRepliedSectionDelegate:(id<InboxRepliedSectionViewControllerDelegate>)arg1 ;
-(void)_updateCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_saveStatus:(long long)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)_notificationForIndexPath:(id)arg1 ;
-(id)_itemForIndexPath:(id)arg1 ;
-(id)_eventForItem:(id)arg1 ;
-(id<InboxRepliedSectionViewControllerDelegate>)inboxRepliedSectionDelegate;
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)title;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_refreshIfNeeded;
-(void)_eventStoreChanged:(id)arg1 ;
@end

