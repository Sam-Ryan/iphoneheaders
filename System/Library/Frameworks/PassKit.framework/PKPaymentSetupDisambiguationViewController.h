/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PKPaymentSetupDisambiguationViewControllerDelegate;
@class NSArray, UIBarButtonItem, PKTableHeaderView, PKDisambiguationFooterView, PKPaymentSetupProduct, NSString;

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate> {

	NSArray* _products;
	UIBarButtonItem* _nextBarButtonItem;
	PKTableHeaderView* _headerView;
	PKDisambiguationFooterView* _footerView;
	id<PKPaymentSetupDisambiguationViewControllerDelegate> _delegate;
	PKPaymentSetupProduct* _selectedProduct;
	NSString* _enteredCardNumber;

}

@property (assign,nonatomic) id<PKPaymentSetupDisambiguationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * products;                                                           //@synthesize products=_products - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupProduct * selectedProduct;                             //@synthesize selectedProduct=_selectedProduct - In the implementation block
@property (nonatomic,copy) NSString * enteredCardNumber;                                                   //@synthesize enteredCardNumber=_enteredCardNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKPaymentSetupDisambiguationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<PKPaymentSetupDisambiguationViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)_popToCameraCapture:(id)arg1 ;
-(void)_setupLater:(id)arg1 ;
-(id)_productAtIndexPath:(id)arg1 ;
-(void)_updateSelectedProduct:(id)arg1 ;
-(PKPaymentSetupProduct *)selectedProduct;
-(void)_notifyDelegateDidSelectProduct:(id)arg1 ;
-(id)initWithProducts:(id)arg1 context:(long long)arg2 ;
-(void)setEnteredCardNumber:(NSString *)arg1 ;
-(void)setProducts:(NSArray *)arg1 ;
-(void)clearSelectedProduct;
-(NSArray *)products;
-(NSString *)enteredCardNumber;
@end

