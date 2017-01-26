/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentLibraryDataProvider.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSMutableDictionary, NSString;

@interface MFMailDropAttachmentDataProvider : MFAttachmentLibraryDataProvider <NSURLSessionDownloadDelegate> {

	NSMutableDictionary* _attachments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_defaultDownloadSessionForAttachment:(id)arg1 ;
-(void)contentDirectoryOfAttachment:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)downloadMainEntryOfAttachment:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

