/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPStoreCompletionOfferResponse, MPMediaQuery, MPStoreCollectionCompletionOffering, NSURL, MPStoreOfferMediaItemCollection;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {

	long long _preferredStoreOfferVariant;
	MPStoreCompletionOfferResponse* _storeOfferResponse;
	MPMediaQuery* _localItemsQuery;
	MPStoreCollectionCompletionOffering* _collectionWithCompletionItemsOffering;
	long long _presentationStyle;
	NSURL* _storeURL;

}

@property (assign,nonatomic) long long preferredStoreOfferVariant; 
@property (nonatomic,readonly) long long presentationStyle;                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeURL;                                                        //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * collectionWithCompletionItems; 
+(long long)defaultOfferVariant;
+(void)setDefaultOfferVariant:(long long)arg1 ;
+(id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)presentationStyle;
-(id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2 ;
-(void)_loadOfferingData;
-(id)copyByInvalidatingCalculatedContent;
-(void)setPreferredStoreOfferVariant:(long long)arg1 ;
-(long long)preferredStoreOfferVariant;
-(MPStoreOfferMediaItemCollection *)collectionWithCompletionItems;
-(NSURL *)storeURL;
@end

