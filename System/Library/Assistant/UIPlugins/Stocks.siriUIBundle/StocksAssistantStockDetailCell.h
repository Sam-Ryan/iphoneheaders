/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Stocks.siriUIBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <Stocks/StocksAssistantStockCell.h>
#import <Stocks/ChartUpdaterDelegate.h>

@class StocksAssistantChartView, NSMutableArray, UILabel, SiriUIKeyline, ChartUpdater;

@interface StocksAssistantStockDetailCell : StocksAssistantStockCell <ChartUpdaterDelegate> {

	StocksAssistantChartView* _stockChart;
	NSMutableArray* _titleLabels;
	NSMutableArray* _valueLabels;
	UILabel* _priceLabel;
	UILabel* _changeLabel;
	SiriUIKeyline* _chartTopKeyline;
	SiriUIKeyline* _chartBottomKeyline;
	SiriUIKeyline* _infoKeylines[5];
	ChartUpdater* _chartUpdater;

}
+(id)infoLabelFont;
-(void)layoutInfoLabelArray:(id)arg1 atPoint:(CGPoint)arg2 columnOrRowOffset:(double)arg3 maxLabelWidth:(double)arg4 horizontally:(BOOL)arg5 step:(double)arg6 ;
-(BOOL)shouldCenterInfoLabelViews;
-(void)resetInfoLabelColors;
-(id)infoLabelWithText:(id)arg1 ;
-(void)setStockObject:(id)arg1 ;
-(void)centerInfoLabelViews;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)chartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
@end

