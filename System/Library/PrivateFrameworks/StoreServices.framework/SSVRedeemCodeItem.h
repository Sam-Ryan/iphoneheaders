/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface SSVRedeemCodeItem : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier; 
-(NSDictionary *)redeemCodeDictionary;
-(id)initWithLookupItem:(id)arg1 ;
-(long long)itemIdentifier;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
@end

