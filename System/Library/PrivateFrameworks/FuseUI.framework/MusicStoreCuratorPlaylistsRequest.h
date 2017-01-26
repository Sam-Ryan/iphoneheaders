/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicStoreModelRequest.h>

@class MusicStoreCuratorPlaylistsResponse;

@interface MusicStoreCuratorPlaylistsRequest : MusicStoreModelRequest {

	long long _curatorStoreAdamID;
	unsigned long long _requestType;

}

@property (assign) long long curatorStoreAdamID; 
@property (nonatomic,retain) MusicStoreCuratorPlaylistsResponse * previousResponse; 
@property (nonatomic,copy) id responseHandler; 
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)init;
-(id)configurationForLoadingModelDataWithStoreBag:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)curatorStoreAdamID;
-(void)_produceInitialResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_produceIncrementalResponseWithLoadedItemMetadataResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCuratorStoreAdamID:(long long)arg1 ;
@end
