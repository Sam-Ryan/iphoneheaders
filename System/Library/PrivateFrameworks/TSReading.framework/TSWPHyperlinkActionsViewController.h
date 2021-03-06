/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class TSWPHyperlinkField, TSWPHyperlinkSettingsViewController, NSString;

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	TSWPHyperlinkField* _hyperlink;
	BOOL _readOnly;
	TSWPHyperlinkSettingsViewController* _hyperlinkSettingsViewController;

}

@property (nonatomic,retain) TSWPHyperlinkField * hyperlink;              //@synthesize hyperlink=_hyperlink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHyperlink:(TSWPHyperlinkField *)arg1 ;
-(id)initWithHyperlink:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)hyperlinkSettingsViewController;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(TSWPHyperlinkField *)hyperlink;
@end

