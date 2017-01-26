/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryResultProcessor.h>

@protocol MDSearchQueryDelegate, MDSearchQueryService, OS_dispatch_queue;
@class NSString, NSPredicate, NSDictionary, NSXPCConnection, NSObject;

@interface MDSearchQuery : NSObject <MDSearchQueryResultProcessor> {

	unsigned long long _status;
	NSString* _queryString;
	BOOL _canceled;
	NSPredicate* _predicate;
	NSDictionary* _options;
	id<MDSearchQueryDelegate> _delegate;
	id<MDSearchQueryService> _queryServiceProxy;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _clientBundleID;

}

@property (copy) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (copy) NSDictionary * options;                                      //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long status; 
@property (__weak) id<MDSearchQueryDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<MDSearchQueryService> queryServiceProxy;                //@synthesize queryServiceProxy=_queryServiceProxy - In the implementation block
@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<MDSearchQueryDelegate>)arg1 ;
-(id<MDSearchQueryDelegate>)delegate;
-(void)start;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)queryString;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)didReturnResultsData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didFinishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didFailWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didFailWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setQueryServiceProxy:(id<MDSearchQueryService>)arg1 ;
-(id)extendedOptionsFromOptions:(id)arg1 ;
-(id<MDSearchQueryService>)queryServiceProxy;
-(void)_finalize;
-(NSString *)clientBundleID;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPredicate:(id)arg1 options:(id)arg2 ;
-(void)setClientBundleID:(NSString *)arg1 ;
@end

