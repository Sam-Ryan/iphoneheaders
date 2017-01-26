/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSMutableData, NSMutableURLRequest, NSURLConnection, NSString;

@interface WeatherHTTPRequest : NSObject <NSURLConnectionDataDelegate> {

	NSMutableData* _rawData;
	NSMutableURLRequest* _request;
	NSURLConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection;
-(void)failWithError:(id)arg1 ;
-(void)request:(id)arg1 receivedResponseData:(id)arg2 ;
-(id)aggregateDictionaryDomain;
@end

