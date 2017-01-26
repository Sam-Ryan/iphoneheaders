/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableDictionary, NSData, NSString;

@interface HTSHTTPMessage : NSObject {

	NSMutableDictionary* _headers;
	NSData* _body;
	NSString* _versionString;

}

@property (nonatomic,retain) NSMutableDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * versionString;                     //@synthesize versionString=_versionString - In the implementation block
-(void)dealloc;
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)headers;
-(NSString *)versionString;
-(void)setVersionString:(NSString *)arg1 ;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(id)valueForHeaderField:(id)arg1 ;
@end

