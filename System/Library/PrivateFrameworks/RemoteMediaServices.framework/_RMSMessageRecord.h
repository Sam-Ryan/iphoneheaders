/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _RMSMessageRecord : NSObject {

	unsigned short _messageType;
	id _responseBlock;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) id responseBlock;                        //@synthesize responseBlock=_responseBlock - In the implementation block
-(id)responseBlock;
-(void)setMessageType:(unsigned short)arg1 ;
-(unsigned short)messageType;
-(void)setResponseBlock:(id)arg1 ;
@end

