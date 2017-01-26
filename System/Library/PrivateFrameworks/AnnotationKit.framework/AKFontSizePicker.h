/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UILabel, UIStepper, UISlider, UICollectionView, NSArray, NSString;

@interface AKFontSizePicker : UIControl <UICollectionViewDataSource, UICollectionViewDelegate> {

	double _value;
	long long _style;
	UILabel* _label;
	UIStepper* _stepper;
	UISlider* _slider;
	UICollectionView* _sizeList;
	NSArray* _sizeListValues;

}

@property (assign,nonatomic) double value;                             //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIStepper * stepper;                      //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UISlider * slider;                        //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UICollectionView * sizeList;              //@synthesize sizeList=_sizeList - In the implementation block
@property (nonatomic,retain) NSArray * sizeListValues;                 //@synthesize sizeListValues=_sizeListValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CGSize)_itemSizeInContainer;
-(UIStepper *)stepper;
-(UICollectionView *)sizeList;
-(void)_handleValueChanged:(id)arg1 ;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)setSizeList:(UICollectionView *)arg1 ;
-(void)_decreaseSize:(id)arg1 ;
-(void)_increaseSize:(id)arg1 ;
-(void)_selectSizeInList;
-(NSArray *)sizeListValues;
-(void)setSizeListValues:(NSArray *)arg1 ;
-(void)setSlider:(UISlider *)arg1 ;
-(UISlider *)slider;
@end

