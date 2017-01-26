/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUContinuation.h>

@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation {

	id _purchase;
	SUPurchaseManager* _purchaseManager;

}

@property (nonatomic,readonly) id purchase;                                           //@synthesize purchase=_purchase - In the implementation block
@property (assign,nonatomic,__weak) SUPurchaseManager * purchaseManager;              //@synthesize purchaseManager=_purchaseManager - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)start;
-(SUPurchaseManager *)purchaseManager;
-(id)initWithPurchase:(id)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(id)purchase;
@end

