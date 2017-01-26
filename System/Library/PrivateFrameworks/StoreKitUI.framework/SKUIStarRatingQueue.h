/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext, NSOperationQueue, SKUIReviewConfiguration, UIWindow;

@interface SKUIStarRatingQueue : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _queue;
	SKUIReviewConfiguration* _reviewConfiguration;
	UIWindow* _window;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
-(UIWindow *)window;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2 ;
-(void)setRating:(long long)arg1 forItem:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setRating:(long long)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

