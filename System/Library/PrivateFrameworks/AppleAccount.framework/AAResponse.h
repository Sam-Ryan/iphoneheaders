/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSError, NSData, NSNumber, NSString;

@interface AAResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _httpResponse;
	NSError* _error;
	long long _statusCode;
	NSData* _data;
	NSNumber* _maxAge;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * protocolVersion; 
@property (nonatomic,readonly) long long statusCode;                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAge;                              //@synthesize maxAge=_maxAge - In the implementation block
-(NSData *)data;
-(long long)statusCode;
-(NSString *)protocolVersion;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(BOOL)arg3 ;
-(void)_parsePlistResponse:(id)arg1 ;
-(id)_stringWithDescriptionForResponseError:(id)arg1 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(NSNumber *)maxAge;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSDictionary *)responseDictionary;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

