/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
-(void)configureFileWrapper:(id)arg1 ;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)htmlContent;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
@end

