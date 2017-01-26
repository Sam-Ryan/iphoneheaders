/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSError;

@interface RestorePodcastItemsResponse : NSObject {

	NSMutableDictionary* _itemErrors;
	NSArray* _requestItems;
	NSArray* _responseDownloads;
	NSError* _responseError;

}

@property (nonatomic,copy) NSArray * requestItems;                   //@synthesize requestItems=_requestItems - In the implementation block
@property (nonatomic,copy) NSArray * responseDownloads;              //@synthesize responseDownloads=_responseDownloads - In the implementation block
@property (nonatomic,retain) NSError * responseError;                //@synthesize responseError=_responseError - In the implementation block
-(id)errorForItemIdentifier:(id)arg1 ;
-(NSArray *)requestItems;
-(void)setRequestItems:(NSArray *)arg1 ;
-(NSArray *)responseDownloads;
-(void)setResponseDownloads:(NSArray *)arg1 ;
-(void)setError:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)dealloc;
-(NSError *)responseError;
-(void)setResponseError:(NSError *)arg1 ;
@end
