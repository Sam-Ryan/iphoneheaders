/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxFetchMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@protocol MFRequestQueueResponseConsumerDAMailAccountStreamConsumerFactory;
@class MFDAMessageStore, MFMessage, MFMimePart;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {

	id<MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;
	MFDAMessageStore* store;
	MFMessage* message;
	MFMimePart* part;
	int format;
	BOOL partial;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isUserRequested;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
-(BOOL)shouldSend;
@end
