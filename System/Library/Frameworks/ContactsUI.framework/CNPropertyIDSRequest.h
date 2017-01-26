/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSArray, NSString;

@interface CNPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {

	NSArray* _propertyItems;
	NSString* _listenerID;
	NSString* _service;
	/*^block*/id _requestResultBlock;
	/*^block*/id _idQueryResultHandler;

}

@property (nonatomic,retain) NSArray * propertyItems;               //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) NSString * listenerID;                 //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,retain) NSString * service;                    //@synthesize service=_service - In the implementation block
@property (copy) id requestResultBlock;                             //@synthesize requestResultBlock=_requestResultBlock - In the implementation block
@property (nonatomic,copy) id idQueryResultHandler;                 //@synthesize idQueryResultHandler=_idQueryResultHandler - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkQueue;
-(void)cancel;
-(BOOL)cancelled;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(BOOL)arg3 resultBlock:(/*^block*/id)arg4 ;
-(NSArray *)propertyItems;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)setListenerID:(NSString *)arg1 ;
-(void)setRequestResultBlock:(id)arg1 ;
-(NSString *)listenerID;
-(void)_requestStatusOnMainQueue:(BOOL)arg1 ;
-(void)cleanupDelegate;
-(void)setIdQueryResultHandler:(id)arg1 ;
-(id)requestResultBlock;
-(id)idQueryResultHandler;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
@end

