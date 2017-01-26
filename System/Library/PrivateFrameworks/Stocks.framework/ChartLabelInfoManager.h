/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	BOOL _use24hrTime;

}
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1 ;
+(void)clearSharedManager;
+(id)chartLabelFont;
-(void)dealloc;
-(id)init;
-(void)resetLocale;
-(id)labelInfoForYAxis;
-(id)monthLabelInfoArrayForLabelLength:(long long)arg1 ;
-(id)labelInfoWithUnsignedInteger:(unsigned long long)arg1 ;
-(BOOL)use24hrTime;
-(id)labelInfoWithString:(id)arg1 ;
@end
