/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSDate, UIView;

@interface WeekAllDayDayContainerAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _children;
	NSDate* _date;
	unsigned long long _dayIndex;
	UIView* _allDayView;

}

@property (nonatomic,readonly) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
@property (assign,nonatomic) UIView * allDayView;                      //@synthesize allDayView=_allDayView - In the implementation block
-(unsigned long long)dayIndex;
-(void)setDayIndex:(unsigned long long)arg1 ;
-(void)setAllDayView:(UIView *)arg1 ;
-(void)dealloc;
-(NSDate *)date;
-(id)accessibilityLabel;
-(void)setDate:(NSDate *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(id)_accessibilityParentForFindingScrollParent;
-(UIView *)allDayView;
-(id)accessibilityContainerElements;
-(NSMutableArray *)children;
@end
