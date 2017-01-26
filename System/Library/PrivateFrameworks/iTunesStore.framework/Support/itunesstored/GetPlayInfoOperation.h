/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, SSPlayInfoRequestContext, SSPlayInfoResponse;

@interface GetPlayInfoOperation : ISOperation {

	NSString* _clientIdentifierHeader;
	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;
	NSString* _userAgent;

}

@property (readonly) SSPlayInfoRequestContext * playInfoContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (readonly) SSPlayInfoResponse * playInfoResponse; 
-(id)initWithPlayInfoRequestContext:(id)arg1 ;
-(id)_copyRequestBody:(id*)arg1 ;
-(void)_setResponseForOutput:(id)arg1 ;
-(void)_setPlayInfoResponse:(id)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(SSPlayInfoRequestContext *)playInfoContext;
-(SSPlayInfoResponse *)playInfoResponse;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)_failWithError:(id)arg1 ;
@end

