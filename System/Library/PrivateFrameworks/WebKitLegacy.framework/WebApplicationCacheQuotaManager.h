/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebQuotaManager.h>

@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {

	WebSecurityOrigin* _origin;

}
-(id)initWithOrigin:(id)arg1 ;
-(unsigned long long)quota;
-(id)origin;
-(void)setQuota:(unsigned long long)arg1 ;
-(unsigned long long)usage;
@end

