/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mobileassetd/ASDownloadConsumer.h>

@class SZExtractor, NSString;

@interface ASStreamingZipDownloadConsumer : ASDownloadConsumer {

	SZExtractor* _extractor;
	NSString* _expectedHash;
	long long _expectedSize;

}
-(void)resumeAtOffset:(long long)arg1 ;
-(BOOL)consumeData:(id)arg1 error:(id*)arg2 ;
-(id)_hashToString:(id)arg1 ;
-(void)_createExtractor;
-(id)initWithURL:(id)arg1 downloadSize:(long long)arg2 expectedHash:(id)arg3 ;
-(void)dealloc;
-(void)suspend;
-(void)finish;
@end

