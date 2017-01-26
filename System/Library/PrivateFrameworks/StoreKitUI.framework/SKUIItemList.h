/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSSet, NSArray, NSMutableDictionary;

@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying> {

	NSMutableArray* _items;
	NSString* _seeAllTitle;
	NSString* _seeAllURLString;
	NSString* _title;
	NSSet* _unavailableItemIdentifiers;

}

@property (nonatomic,copy) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * seeAllTitle;                                     //@synthesize seeAllTitle=_seeAllTitle - In the implementation block
@property (nonatomic,copy) NSString * seeAllURLString;                                 //@synthesize seeAllURLString=_seeAllURLString - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSSet * unavailableItemIdentifiers;                         //@synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(BOOL)isUnavailableItemIdentifier:(id)arg1 ;
-(void)setUnavailableItemIdentifiers:(NSSet *)arg1 ;
-(NSString *)seeAllTitle;
-(NSString *)seeAllURLString;
-(void)setSeeAllTitle:(NSString *)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(void)setSeeAllURLString:(NSString *)arg1 ;
-(NSSet *)unavailableItemIdentifiers;
@end

