/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSArray;

@interface PurchaseHistoryOperation : ISOperation {

	SSAuthenticationContext* _authenticationContext;
	NSArray* _inputItems;
	NSArray* _outputItems;

}

@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) NSArray * purchaseHistoryItems; 
@property (readonly) NSArray * purchasedItems; 
-(id)_newURLOperation;
-(id)initWithPurchaseHistoryItems:(id)arg1 authenticationContext:(id)arg2 ;
-(NSArray *)purchasedItems;
-(void)_setOutputItemsWithMapping:(id)arg1 ;
-(NSArray *)purchaseHistoryItems;
-(void)dealloc;
-(id)init;
-(void)run;
-(SSAuthenticationContext *)authenticationContext;
@end
