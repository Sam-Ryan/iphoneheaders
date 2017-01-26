/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLDownloadDelegate.h>

@class NSString;

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {

	id realDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadDidBegin:(id)arg1 ;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)download:(id)arg1 didCreateDestination:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setRealDelegate:(id)arg1 ;
@end

