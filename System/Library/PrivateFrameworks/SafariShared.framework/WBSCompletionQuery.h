/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSURLRequest;

@interface WBSCompletionQuery : NSObject {

	NSString* _normalizedQueryStringForParsec;
	BOOL _forLastSearch;
	NSString* _queryString;
	NSString* _parsecFeedbackQueryIdentifier;
	NSURLRequest* _parsecSearchRequest;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _timestamp;
	NSString* _searchSuggestionProviderIdentifier;
	duration<long long, std::__1::ratio<1, 1000> > _searchSuggestionProviderLatency;
	duration<long long, std::__1::ratio<1, 1000> > _parsecLatency;
	unsigned long long _indexInFeedbackArray;

}

@property (nonatomic,readonly) NSString * queryString;                                           //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) NSString * normalizedQueryStringForParsec; 
@property (assign,getter=isForLastSearch,nonatomic) BOOL forLastSearch;                          //@synthesize forLastSearch=_forLastSearch - In the implementation block
@property (nonatomic,copy) NSString * parsecFeedbackQueryIdentifier;                             //@synthesize parsecFeedbackQueryIdentifier=_parsecFeedbackQueryIdentifier - In the implementation block
@property (nonatomic,copy) NSURLRequest * parsecSearchRequest;                                   //@synthesize parsecSearchRequest=_parsecSearchRequest - In the implementation block
@property (nonatomic,readonly) time_point<std::__1::chrono::steady_clock timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * searchSuggestionProviderIdentifier;                        //@synthesize searchSuggestionProviderIdentifier=_searchSuggestionProviderIdentifier - In the implementation block
@property (assign,nonatomic) duration<long long searchSuggestionProviderLatency;                 //@synthesize searchSuggestionProviderLatency=_searchSuggestionProviderLatency - In the implementation block
@property (assign,nonatomic) duration<long long parsecLatency;                                   //@synthesize parsecLatency=_parsecLatency - In the implementation block
@property (assign,nonatomic) unsigned long long indexInFeedbackArray;                            //@synthesize indexInFeedbackArray=_indexInFeedbackArray - In the implementation block
-(id)description;
-(time_point<std::__1::chrono::steady_clock)timestamp;
-(NSString *)queryString;
-(id)initWithQueryString:(id)arg1 ;
-(NSString *)normalizedQueryStringForParsec;
-(BOOL)isForLastSearch;
-(void)setForLastSearch:(BOOL)arg1 ;
-(NSString *)parsecFeedbackQueryIdentifier;
-(void)setParsecFeedbackQueryIdentifier:(NSString *)arg1 ;
-(NSURLRequest *)parsecSearchRequest;
-(void)setParsecSearchRequest:(NSURLRequest *)arg1 ;
-(NSString *)searchSuggestionProviderIdentifier;
-(void)setSearchSuggestionProviderIdentifier:(NSString *)arg1 ;
-(duration<long long)searchSuggestionProviderLatency;
-(void)setSearchSuggestionProviderLatency:(duration<long long)arg1 ;
-(duration<long long)parsecLatency;
-(void)setParsecLatency:(duration<long long)arg1 ;
-(unsigned long long)indexInFeedbackArray;
-(void)setIndexInFeedbackArray:(unsigned long long)arg1 ;
@end

