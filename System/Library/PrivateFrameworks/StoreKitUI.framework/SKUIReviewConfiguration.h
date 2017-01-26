/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKUIReviewConfiguration : NSObject {

	NSString* _allVersionsURLString;
	NSString* _currentVersionURLString;
	NSString* _pageNumberQueryParameter;
	NSString* _ratingURLString;

}

@property (nonatomic,readonly) NSString * allVersionsURLString;                  //@synthesize allVersionsURLString=_allVersionsURLString - In the implementation block
@property (nonatomic,readonly) NSString * currentVersionURLString;               //@synthesize currentVersionURLString=_currentVersionURLString - In the implementation block
@property (nonatomic,readonly) NSString * pageNumberQueryParameter;              //@synthesize pageNumberQueryParameter=_pageNumberQueryParameter - In the implementation block
@property (nonatomic,readonly) NSString * ratingURLString;                       //@synthesize ratingURLString=_ratingURLString - In the implementation block
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(NSString *)allVersionsURLString;
-(NSString *)currentVersionURLString;
-(NSString *)pageNumberQueryParameter;
-(NSString *)ratingURLString;
@end

