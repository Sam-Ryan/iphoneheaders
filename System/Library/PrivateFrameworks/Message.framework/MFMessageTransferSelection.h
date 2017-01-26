/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFMessageTransferSelection : NSObject {

	NSArray* _messages;
	long long _type;

}

@property (nonatomic,copy) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
+(id)selectAllWithKnownMessages:(id)arg1 ;
+(id)selectMessages:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(long long)type;
-(id)initWithType:(long long)arg1 messages:(id)arg2 ;
-(NSArray *)messages;
-(void)enumerateSelectionsByStoreUsingBlock:(/*^block*/id)arg1 ;
-(void)setMessages:(NSArray *)arg1 ;
@end

