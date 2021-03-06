/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebQuotaManager;
#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject {

	WebSecurityOriginPrivate* _private;
	id<WebQuotaManager> _applicationCacheQuotaManager;
	id<WebQuotaManager> _databaseQuotaManager;

}
+(id)webSecurityOriginFromDatabaseIdentifier:(id)arg1 ;
-(unsigned long long)quota;
-(void)setQuota:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(id)databaseQuotaManager;
-(id)applicationCacheQuotaManager;
-(SecurityOrigin*)_core;
-(id)_initWithWebCoreSecurityOrigin:(SecurityOrigin*)arg1 ;
-(id)databaseIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)host;
-(id)stringValue;
-(unsigned short)port;
-(id)protocol;
-(id)toString;
-(void)finalize;
@end

