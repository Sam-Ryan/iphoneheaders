/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/StockUpdaterDelegate.h>

@class NSMutableArray, NSHashTable, NSString;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {

	BOOL _postingRemoteUpdateNotification;
	NSMutableArray* _activeUpdaters;
	NSMutableArray* _inactiveUpdaters;
	NSHashTable* _updateObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)reset;
-(BOOL)isLoading;
-(void)failWithError:(id)arg1 ;
-(void)_stocksDidReload;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hadError;
-(id)availableStockUpdater;
-(void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(BOOL)arg3 forceUpdate:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)updateStockComprehensive:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStockComprehensive:(id)arg1 forced:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateAllStocksBasicWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateStocksBasic:(id)arg1 forced:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updaterDidCancelOrFinish:(id)arg1 ;
-(void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(BOOL)arg3 ;
-(void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3 ;
-(void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(BOOL)arg4 ;
-(void)stocksDidUpdateRemotely;
-(void)addUpdateObserver:(id)arg1 ;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)resetUpdaters;
-(void)updateStocksComprehensive:(id)arg1 ;
-(void)updateStockComprehensive:(id)arg1 ;
-(void)updateAllStocksBasic;
-(void)updateAllStocksBasic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStaleStocksBasicWithCompletion:(/*^block*/id)arg1 ;
@end

