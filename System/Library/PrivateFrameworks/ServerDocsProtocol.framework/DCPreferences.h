/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class NSString;

@interface DCPreferences : NSUserDefaults

@property (assign,nonatomic) BOOL traceLogsEnabled; 
@property (nonatomic,retain) NSString * logLevel; 
@property (assign,nonatomic) BOOL xmlPropertyLists; 
@property (nonatomic,retain) NSString * currentDataVersionNumber; 
+(id)preferences;
-(NSString *)logLevel;
-(void)setLogLevel:(NSString *)arg1 ;
-(BOOL)traceLogsEnabled;
-(void)clearAuthCookieAndTrustedCertDataForService:(id)arg1 ;
-(NSString *)currentDataVersionNumber;
-(void)setCurrentDataVersionNumber:(NSString *)arg1 ;
-(void)clearAllAuthCookiesAndTrustedCertData;
-(BOOL)xmlPropertyLists;
-(void)_postDidChangeNotification;
-(id)_authCookieKeyForService:(id)arg1 ;
-(id)_trustedCertDataKeyForService:(id)arg1 ;
-(void)setTraceLogsEnabled:(BOOL)arg1 ;
-(id)authCookieForService:(id)arg1 ;
-(id)trustedCertDataForService:(id)arg1 ;
-(void)setAuthCookie:(id)arg1 andTrustedCertData:(id)arg2 forService:(id)arg3 ;
-(void)setXmlPropertyLists:(BOOL)arg1 ;
@end

