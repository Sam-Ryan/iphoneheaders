/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, TSPLazyReferenceArray, NSArray;

@interface TSPUnknownMessage : NSObject {

	MessageInfo* _messageInfo;
	NSObject*<OS_dispatch_data> _messageData;
	TSPLazyReferenceArray* _objects;
	NSArray* _datas;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> messageData;              //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,retain) TSPLazyReferenceArray * objects;                        //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSArray * datas;                                        //@synthesize datas=_datas - In the implementation block
-(const MessageInfo*)messageInfo;
-(id)initWithMessageInfo:(const MessageInfo*)arg1 data:(id)arg2 ;
-(id)init;
-(void)setDatas:(NSArray *)arg1 ;
-(NSArray *)datas;
-(TSPLazyReferenceArray *)objects;
-(NSObject*<OS_dispatch_data>)messageData;
-(void)setObjects:(TSPLazyReferenceArray *)arg1 ;
@end

