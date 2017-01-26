/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFAttachmentDataProviderProtocol <NSObject>
@required
-(id)fetchLocalDataForAttachment:(id)arg1;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3;
-(id)messageForAttachment:(id)arg1;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
