/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol ChartUpdaterDelegate;
@class Stock, StockChartData;

@interface ChartUpdater : YQLRequest {

	Stock* _stock;
	long long _interval;
	StockChartData* _currentChartData;
	/*^block*/id _updateCompletionHandler;
	id<ChartUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ChartUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_rangeStringForInterval:(long long)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<ChartUpdaterDelegate>)arg1 ;
-(id<ChartUpdaterDelegate>)delegate;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)parseDataSeriesDictionary:(id)arg1 ;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 ;
-(void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2 ;
-(id)dataSeries;
@end

