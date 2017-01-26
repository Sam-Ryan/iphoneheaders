/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UILAConfigurationHistory.h>
#import <UIKit/_UIOLAPropertySource.h>

@class NSString, NSSet;

@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource> {

	BOOL _baselineRelativeArrangement;
	BOOL _itemOrderingChanged;
	BOOL _itemFittingSizeChanged;
	BOOL _hasEstablishedOrderingValues;
	BOOL _inOrderedArrangementUpdateSection;
	double _spacing;
	long long _distribution;
	double _proportionalFillDenominator;

}

@property (assign,nonatomic) BOOL hasEstablishedOrderingValues;                                                              //@synthesize hasEstablishedOrderingValues=_hasEstablishedOrderingValues - In the implementation block
@property (assign,getter=isInOrderedArrangementUpdateSection,nonatomic) BOOL inOrderedArrangementUpdateSection;              //@synthesize inOrderedArrangementUpdateSection=_inOrderedArrangementUpdateSection - In the implementation block
@property (assign,nonatomic) double proportionalFillDenominator;                                                             //@synthesize proportionalFillDenominator=_proportionalFillDenominator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (assign,nonatomic) double spacing;                                                                                 //@synthesize spacing=_spacing - In the implementation block
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement;                          //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,nonatomic) long long distribution;                                                                         //@synthesize distribution=_distribution - In the implementation block
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged;                                      //@synthesize itemOrderingChanged=_itemOrderingChanged - In the implementation block
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged;                                //@synthesize itemFittingSizeChanged=_itemFittingSizeChanged - In the implementation block
-(void)setDistribution:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(long long)distribution;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)_setItemOrderingChanged:(BOOL)arg1 ;
-(void)setHasEstablishedOrderingValues:(BOOL)arg1 ;
-(void)setInOrderedArrangementUpdateSection:(BOOL)arg1 ;
-(void)setProportionalFillDenominator:(double)arg1 ;
-(void)_setItemFittingSizeChanged:(BOOL)arg1 ;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(BOOL)hasEstablishedOrderingValues;
-(BOOL)isInOrderedArrangementUpdateSection;
-(double)proportionalFillDenominator;
@end

