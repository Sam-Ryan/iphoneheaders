/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	NSSet* _primaryElements;
	BOOL _shouldSupportVEVENT;
	BOOL _shouldSupportVTODO;
	NSDictionary* _headersToOverride;
	NSDictionary* _responseHeaders;
	NSSet* _fallbackElements;

}

@property (assign,nonatomic) BOOL shouldSupportVEVENT;                      //@synthesize shouldSupportVEVENT=_shouldSupportVEVENT - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportVTODO;                       //@synthesize shouldSupportVTODO=_shouldSupportVTODO - In the implementation block
@property (nonatomic,retain) NSDictionary * headersToOverride;              //@synthesize headersToOverride=_headersToOverride - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,retain) NSSet * fallbackElements;                      //@synthesize fallbackElements=_fallbackElements - In the implementation block
-(NSDictionary *)headersToOverride;
-(NSSet *)fallbackElements;
-(void)_mkcalendarAfterFailureCount:(unsigned long long)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)startTaskGroup;
-(BOOL)shouldSupportVEVENT;
-(void)setShouldSupportVEVENT:(BOOL)arg1 ;
-(BOOL)shouldSupportVTODO;
-(void)setShouldSupportVTODO:(BOOL)arg1 ;
-(void)setHeadersToOverride:(NSDictionary *)arg1 ;
-(void)setFallbackElements:(NSSet *)arg1 ;
-(NSDictionary *)responseHeaders;
@end

