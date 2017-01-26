/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/FitnessUI.axbundle/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface FUBarAccessibilityElement : UIAccessibilityElement {

	id _barSeries;
	unsigned long long _index;
	CGPoint _barPoint;

}

@property (assign,nonatomic) CGPoint barPoint;                      //@synthesize barPoint=_barPoint - In the implementation block
@property (nonatomic,retain) id barSeries;                          //@synthesize barSeries=_barSeries - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)accessibilityElementsForBarSeries:(id)arg1 ;
-(id)barSeries;
-(void)setBarPoint:(CGPoint)arg1 ;
-(CGPoint)barPoint;
-(void)setBarSeries:(id)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 barSeries:(id)arg2 index:(unsigned long long)arg3 plotPoint:(id)arg4 ;
-(id)accessibilityLabel;
-(unsigned long long)index;
-(CGRect)accessibilityFrame;
-(void)setIndex:(unsigned long long)arg1 ;
@end

