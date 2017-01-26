/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:18:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAEventsAttachmentDownloadConsumer;
@class NSString;

@interface MobileCalDAVDownloadContext : NSObject {

	id<DAEventsAttachmentDownloadConsumer> _consumer;
	NSString* _attachmentUUID;

}

@property (assign,nonatomic,__weak) id<DAEventsAttachmentDownloadConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSString * attachmentUUID;                                           //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
+(id)contextWithAttachmentUUID:(id)arg1 consumer:(id)arg2 ;
-(void)setConsumer:(id<DAEventsAttachmentDownloadConsumer>)arg1 ;
-(id<DAEventsAttachmentDownloadConsumer>)consumer;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(id)initWithAttachmentUUID:(id)arg1 consumer:(id)arg2 ;
@end

