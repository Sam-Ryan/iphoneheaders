/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PKPaymentTransaction, UITableViewCell, NSDictionary;

@interface PKTransactionDetailsViewController : UITableViewController {

	PKPaymentTransaction* _transaction;
	UITableViewCell* _mapsCell;
	NSDictionary* _transactionDetails;
	NSDictionary* _merchantDetails;

}

@property (nonatomic,retain) NSDictionary * transactionDetails;              //@synthesize transactionDetails=_transactionDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * merchantDetails;                 //@synthesize merchantDetails=_merchantDetails - In the implementation block
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(BOOL)_hasMUID;
-(id)initWithTransaction:(id)arg1 ;
-(NSDictionary *)transactionDetails;
-(NSDictionary *)merchantDetails;
-(id)_transactionInfoCellForIndex:(long long)arg1 ;
-(id)_merchantInfoCellForIndex:(long long)arg1 ;
-(void)_didSelectMap;
-(id)_stringForTransactionStatus:(long long)arg1 ;
-(id)_stringForTransactionType:(long long)arg1 ;
-(id)_stringForTechnologyType:(long long)arg1 ;
-(id)_stringForTransactionSource:(unsigned long long)arg1 ;
-(id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2 ;
-(id)_mapsCell;
-(void)setTransactionDetails:(NSDictionary *)arg1 ;
-(void)setMerchantDetails:(NSDictionary *)arg1 ;
@end

