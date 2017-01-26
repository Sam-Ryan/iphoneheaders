/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject {

	BOOL _wantsArtwork;
	MPMediaQuery* _albumItemsQuery;
	unsigned long long _tokenID;
	/*^block*/id _responseBlock;
	NSNumber* _storeLookupID;

}

@property (nonatomic,readonly) MPMediaQuery * albumItemsQuery;              //@synthesize albumItemsQuery=_albumItemsQuery - In the implementation block
@property (nonatomic,readonly) BOOL wantsArtwork;                           //@synthesize wantsArtwork=_wantsArtwork - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenID;                  //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,copy,readonly) id responseBlock;                       //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,readonly) NSNumber * storeLookupID;                    //@synthesize storeLookupID=_storeLookupID - In the implementation block
@property (nonatomic,readonly) NSString * storeLookupIDString; 
+(id)storeLookupIDForAlbumItemsQuery:(id)arg1 ;
-(id)_specificationForArtworkSizesToRequest;
-(id)lookupRequestForStorePlaylistIdentifier:(id)arg1 ;
-(NSString *)storeLookupIDString;
-(id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(BOOL)arg3 responseBlock:(/*^block*/id)arg4 ;
-(id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1 ;
-(id)newLookupRequest;
-(MPMediaQuery *)albumItemsQuery;
-(unsigned long long)tokenID;
-(id)responseBlock;
-(NSNumber *)storeLookupID;
-(BOOL)wantsArtwork;
@end

