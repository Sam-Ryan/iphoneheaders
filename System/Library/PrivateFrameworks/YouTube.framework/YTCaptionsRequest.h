/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTCaptionsRequestDelegate;
@class NSMutableArray, YTVideo;

@interface YTCaptionsRequest : YTXMLHTTPRequest {

	id<YTCaptionsRequestDelegate> _delegate;
	NSMutableArray* _captions;
	YTVideo* _video;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)didAuthenticate:(id)arg1 ;
-(void)_requestCaptionsFromURL:(id)arg1 ;
-(id)initRequestingCaptionsForVideo:(id)arg1 withDelegate:(id)arg2 ;
-(id)video;
@end

