/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMHTTPHandler.h>

@class NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {

	NSString* _policyVersion;
	NSDate* _startInvocationDate;
	NSString* _realm;

}

@property (nonatomic,readonly) NSString * policyVersion; 
@property (nonatomic,readonly) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSString *)realm;
-(id)requestBody;
-(NSString *)policyVersion;
-(BOOL)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2 ;
-(BOOL)shouldValidateTGTs;
@end

