/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSArray, UICollectionView, NSMutableIndexSet, NSString, SKUISwooshView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _bricks;
	UICollectionView* _collectionView;
	BOOL _delegateWantsWillDisplay;
	NSMutableIndexSet* _hiddenImageIndexSet;
	SCD_Struct_SK16 _metrics;
	BOOL _showBrickTitles;
	NSString* _swooshTitle;
	SKUISwooshView* _swooshView;

}

@property (nonatomic,copy) NSArray * bricks;                        //@synthesize bricks=_bricks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)indexPathsForVisibleItems;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(NSArray *)bricks;
-(void)setBricks:(NSArray *)arg1 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)deselectAllItems;
-(id)initWithSwoosh:(id)arg1 ;
-(SCD_Struct_SK16)_brickSwooshMetrics;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setColorScheme:(id)arg1 ;
@end

