/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, MPStoreRedownloadProductItemAsset, NSString;

@interface MPStoreRedownloadProductItem : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSArray * allFlavors; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * asset; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * firstAsset; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
-(MPStoreRedownloadProductItemAsset *)asset;
-(void)_enumerateAssetDictionariesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)allFlavors;
-(MPStoreRedownloadProductItemAsset *)firstAsset;
-(id)assetForFlavor:(id)arg1 ;
-(NSString *)fileExtension;
-(id)_initWithResponseDictionary:(id)arg1 ;
@end

