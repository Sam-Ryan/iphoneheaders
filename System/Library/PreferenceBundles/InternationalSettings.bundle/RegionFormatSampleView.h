/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel;

@interface RegionFormatSampleView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	double _sized;
	double _labelTopPadding[4];

}
-(void)setTextForRegionExample:(id)arg1 ;
-(id)generateRegionSampleLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_accessibilityLabels;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

