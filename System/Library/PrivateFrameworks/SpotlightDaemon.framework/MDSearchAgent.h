/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightDaemon/MDAgent.h>
#import <libobjc.A.dylib/MDSearchQueryService.h>

@protocol MDIndexer, MDSearchQueryResultProcessor;
@class SPCoreSpotlightTask, NSObject, NSString;

@interface MDSearchAgent : MDAgent <MDSearchQueryService> {

	SPCoreSpotlightTask* _queryTask;
	BOOL _isInternal;
	BOOL _finishedQuery;
	NSObject*<MDIndexer> _searchIndex;
	NSObject*<MDSearchQueryResultProcessor> _resultProcessor;
	NSString* _clientBundleID;

}

@property (retain) NSObject*<MDIndexer> searchIndex;                                     //@synthesize searchIndex=_searchIndex - In the implementation block
@property (retain) NSObject*<MDSearchQueryResultProcessor> resultProcessor;              //@synthesize resultProcessor=_resultProcessor - In the implementation block
@property (retain) NSString * clientBundleID;                                            //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign) BOOL isInternal;                                                      //@synthesize isInternal=_isInternal - In the implementation block
@property (assign) BOOL finishedQuery;                                                   //@synthesize finishedQuery=_finishedQuery - In the implementation block
+(id)xpcInterface;
+(id)machServiceName;
+(id)clientXPCInterface;
-(BOOL)isInternal;
-(void)startQueryForQueryString:(id)arg1 options:(id)arg2 resultProcessor:(id)arg3 limitToBundleID:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancelWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)clientBundleID;
-(NSObject*<MDIndexer>)searchIndex;
-(void)setSearchIndex:(NSObject*<MDIndexer>)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3 ;
-(void)_pullEntitlementsOffConnection:(id)arg1 ;
-(BOOL)finishedQuery;
-(BOOL)_convertMDSearchOptionsToSPQueryOptions:(id)arg1 ;
-(void)_badQueryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsInternal:(BOOL)arg1 ;
-(NSObject*<MDSearchQueryResultProcessor>)resultProcessor;
-(void)setResultProcessor:(NSObject*<MDSearchQueryResultProcessor>)arg1 ;
-(void)setFinishedQuery:(BOOL)arg1 ;
@end

