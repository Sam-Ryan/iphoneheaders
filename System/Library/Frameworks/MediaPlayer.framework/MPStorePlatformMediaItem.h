/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem {

	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MPStoreItemMetadata * storeItemMetadata;              //@synthesize storeItemMetadata=_storeItemMetadata - In the implementation block
+(id)defaultPropertyValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setStoreItemMetadata:(MPStoreItemMetadata *)arg1 ;
-(id)_valueFromMetadataForProperty:(id)arg1 ;
-(MPStoreItemMetadata *)storeItemMetadata;
-(id)artworkCatalog;
-(id)initWithStoreItemMetadata:(id)arg1 ;
@end

