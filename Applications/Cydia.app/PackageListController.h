/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class Database;

@interface PackageListController : CyteViewController <UITableViewDataSource, UITableViewDelegate> {

	Database* database_;
	unsigned era_;
	MenesObjectHandle<NSArray, 0> packages_;
	MenesObjectHandle<NSArray, 0> sections_;
	MenesObjectHandle<UITableView, 2> list_;
	MenesObjectHandle<NSArray, 0> thumbs_;
	vector<int, std::allocator<int> >* offset_;
	MenesObjectHandle<NSString, 0> title_;
	unsigned reloading_;

}
-(void)releaseSubviews;
-(void)resizeForKeyboardBounds:(CGRect)arg1 duration:(double)arg2 curve:(int)arg3 ;
-(void)resizeForKeyboardBounds:(CGRect)arg1 duration:(double)arg2 ;
-(void)getKeyboardCurve:(int*)arg1 duration:(double*)arg2 forNotification:(id)arg3 ;
-(void)resizeForKeyboardBounds:(CGRect)arg1 ;
-(void)deselectWithAnimation:(char)arg1 ;
-(id)referrerURL;
-(id)packageAtIndexPath:(id)arg1 ;
-(BOOL)isSummarized;
-(void)didSelectPackage:(id)arg1 ;
-(void)updateHeight;
-(BOOL)shouldYield;
-(BOOL)shouldBlock;
-(id)_reloadPackages;
-(BOOL)showsSections;
-(id)sectionsForPackages:(id)arg1 ;
-(void)resetCursor;
-(id)initWithDatabase:(id)arg1 title:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_reloadData;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)clearData;
@end

