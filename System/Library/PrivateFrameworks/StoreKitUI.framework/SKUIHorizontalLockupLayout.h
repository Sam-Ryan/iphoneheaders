/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUIHorizontalLockupLayout : NSObject {

	NSMutableArray* _columns;
	double _imageMarginRight;
	UIEdgeInsets _metadataColumnEdgeInsets;
	double _metadataColumnMinHeight;
	double _tallestNonMetadataColumnHeight;

}

@property (nonatomic,readonly) NSArray * columns;                                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets metadataColumnEdgeInsets;              //@synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets - In the implementation block
+(id)fontForButtonViewElement:(id)arg1 context:(id)arg2 ;
+(id)fontForLabelViewElement:(id)arg1 context:(id)arg2 ;
+(id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2 ;
-(CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(NSArray *)columns;
-(double)topPaddingForViewElement:(id)arg1 ;
-(double)bottomPaddingForViewElement:(id)arg1 ;
-(id)initWithLockup:(id)arg1 context:(id)arg2 ;
-(void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2 ;
-(double)columnSpacingForColumnIdentifier:(long long)arg1 ;
-(UIEdgeInsets)metadataColumnEdgeInsets;
-(CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3 ;
@end

