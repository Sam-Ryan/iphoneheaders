/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIActivityItemProvider.h>

@class SKUIProductPageItem, SKUIClientContext;

@interface SKUIURLActivityItemProvider : UIActivityItemProvider {

	SKUIProductPageItem* _item;
	SKUIClientContext* _clientContext;

}
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2 ;
@end

