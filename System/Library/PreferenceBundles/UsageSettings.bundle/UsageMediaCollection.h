/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface UsageMediaCollection : NSObject {

	NSMutableArray* _items;
	NSMutableArray* _itemSizes;
	BOOL _grouped;
	float _totalSize;

}

@property (assign,getter=isGrouped,nonatomic) BOOL grouped;              //@synthesize grouped=_grouped - In the implementation block
@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * itemSizes;                          //@synthesize itemSizes=_itemSizes - In the implementation block
@property (assign,nonatomic) float totalSize;                            //@synthesize totalSize=_totalSize - In the implementation block
-(void)sortItemsByMediaKey:(id)arg1 ;
-(void)setItemSizes:(NSArray *)arg1 ;
-(NSArray *)itemSizes;
-(BOOL)isGrouped;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(float)totalSize;
-(void)setGrouped:(BOOL)arg1 ;
-(void)setTotalSize:(float)arg1 ;
@end

