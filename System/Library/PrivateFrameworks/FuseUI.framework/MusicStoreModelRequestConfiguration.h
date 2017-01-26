/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSArray;

@interface MusicStoreModelRequestConfiguration : NSObject {

	NSURLRequest* _URLRequest;
	NSArray* _requestedItemIdentifiers;
	unsigned long long _itemMetadataRequestReason;
	long long _type;

}

@property (nonatomic,readonly) NSURLRequest * URLRequest;                                 //@synthesize URLRequest=_URLRequest - In the implementation block
@property (nonatomic,readonly) NSArray * requestedItemIdentifiers;                        //@synthesize requestedItemIdentifiers=_requestedItemIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long itemMetadataRequestReason;              //@synthesize itemMetadataRequestReason=_itemMetadataRequestReason - In the implementation block
@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
-(long long)type;
-(id)initWithURLRequest:(id)arg1 ;
-(NSURLRequest *)URLRequest;
-(id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 ;
-(NSArray *)requestedItemIdentifiers;
-(unsigned long long)itemMetadataRequestReason;
@end

