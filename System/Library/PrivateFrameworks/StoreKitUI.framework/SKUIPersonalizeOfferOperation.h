/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject;

@interface SKUIPersonalizeOfferOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _itemID;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2 ;
@end

