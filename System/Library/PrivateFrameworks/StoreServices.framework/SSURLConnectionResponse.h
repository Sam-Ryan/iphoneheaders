/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSData, SSMetricsPageEvent, NSHTTPURLResponse, NSString, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {

	NSData* _bodyData;
	SSMetricsPageEvent* _metricsPageEvent;
	NSHTTPURLResponse* _urlResponse;

}

@property (nonatomic,readonly) BOOL ssv_isExpiredResponse; 
@property (nonatomic,readonly) NSData * bodyData;                                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * suggestedFilename; 
@property (nonatomic,readonly) NSString * textEncodingName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSData * databaseEncoding; 
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                  //@synthesize urlResponse=_urlResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)ssv_isExpiredResponse;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(NSData *)databaseEncoding;
-(NSString *)suggestedFilename;
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(long long)statusCode;
-(id)allHeaderFields;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)textEncodingName;
-(NSData *)bodyData;
-(SSMetricsPageEvent *)metricsPageEvent;
-(NSHTTPURLResponse *)URLResponse;
-(long long)expectedContentLength;
@end
