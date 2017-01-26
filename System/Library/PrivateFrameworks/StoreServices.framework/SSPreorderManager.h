/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class SSXPCConnection, NSObject, NSArray;

@interface SSPreorderManager : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _itemKinds;
	SSXPCConnection* _observerConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	CFArrayRef _observers;
	NSArray* _preorders;

}

@property (readonly) NSArray * itemKinds; 
@property (readonly) NSArray * preorders; 
+(id)bookStoreItemKinds;
+(id)musicStoreItemKinds;
-(NSArray *)preorders;
-(void)_connectAsObserver;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendMessageToObservers:(SEL)arg1 ;
-(void)_registerAsObserver;
-(void)cancelPreorders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSArray *)itemKinds;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithItemKinds:(id)arg1 ;
-(void)reloadFromServer;
@end

