/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;

}
+(id)allSources;
+(id)_setOfAllSources;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)attachmentForURL:(id)arg1 ;
-(BOOL)setAttachment:(id)arg1 forURL:(id)arg2 ;
-(void)removeAttachmentForURL:(id)arg1 ;
@end

