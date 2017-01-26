/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface UIMainPrinterUtilityCell : UITableViewCell {

	NSArray* _supplyLevelViews;
	double textLabelY;
	double detailTextLabelY;
	BOOL _showSupplyDataUnderPrinterName;
	NSArray* _supplies;

}

@property (nonatomic,retain) NSArray * supplies;                               //@synthesize supplies=_supplies - In the implementation block
@property (assign,nonatomic) BOOL showSupplyDataUnderPrinterName;              //@synthesize showSupplyDataUnderPrinterName=_showSupplyDataUnderPrinterName - In the implementation block
-(void)layoutSubviews;
-(BOOL)showSupplyDataUnderPrinterName;
-(void)setSupplies:(NSArray *)arg1 ;
-(NSArray *)supplies;
-(void)setShowSupplyDataUnderPrinterName:(BOOL)arg1 ;
@end

