/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:16:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libamsupport.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSDictionary, NSURLResponse, NSMutableData, NSError, NSData, NSString;

@interface AMSupportURLConnectionDelegate : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	BOOL requestComplete;
	NSDictionary* options;
	NSURLResponse* response;
	NSMutableData* _data;
	NSError* _error;

}

@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(NSError *)error;
-(id)initWithData:(id)arg1 Options:(id)arg2 ;
-(id)waitForResponseOrError:(id*)arg1 ;
@end

