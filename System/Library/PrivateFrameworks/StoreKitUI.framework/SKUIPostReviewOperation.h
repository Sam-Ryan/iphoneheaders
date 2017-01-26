/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation {

	NSDictionary* _responseDictionary;
	SKUIReviewMetadata* _review;

}

@property (readonly) NSDictionary * responseDictionary; 
-(void)run;
-(id)initWithReviewMetadata:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)_httpBody;
@end
