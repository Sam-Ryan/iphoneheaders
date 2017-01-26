/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIImageView, NSArray, NSMapTable, NSIndexPath, MPUExtrasViewElementViewController, NSString;

@interface MPUExtrasListTemplateViewController : MPUExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	BOOL _tableViewLeft;
	UIImageView* _vignetteView;
	BOOL _relatedContentEmbedded;
	NSArray* _masterViewConstraints;
	NSArray* _detailViewConstraints;
	NSMapTable* _relatedContentViewControllerMap;
	NSIndexPath* _autohighlightIndexPath;
	MPUExtrasViewElementViewController* _relatedContentViewController;

}

@property (nonatomic,retain) MPUExtrasViewElementViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relatedContentViewControllerForElement:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)showsPlaceholder;
-(id)templateElement;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)_prepareLayout;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_updateForTemplate:(id)arg1 ;
-(void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2 ;
-(void)_embedRelatedContentViewController;
-(void)_unembedRelatedContent;
-(void)_pushRelatedViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDetailContraints;
-(void)_setRelatedContentEmbedded:(BOOL)arg1 ;
-(void)_addConstraintsToTableView:(id)arg1 ;
-(void)_configureVignette:(BOOL)arg1 ;
-(void)_setNavigationConstraints;
-(void)setRelatedContentViewController:(MPUExtrasViewElementViewController *)arg1 ;
-(MPUExtrasViewElementViewController *)relatedContentViewController;
@end

