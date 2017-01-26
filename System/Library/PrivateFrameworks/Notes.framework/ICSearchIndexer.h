/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@protocol OS_dispatch_queue;
@class CSSearchableIndex, NSObject, NSOperationQueue, NSDictionary, ICSelectorDelayer, NSMutableDictionary, NSArray, NSString;

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate> {

	BOOL _retryOnErrors;
	BOOL _observingChanges;
	CSSearchableIndex* _searchableIndex;
	NSObject*<OS_dispatch_queue> _indexingQueue;
	NSOperationQueue* _operationQueue;
	NSDictionary* _dataSourcesByIdentifier;
	ICSelectorDelayer* _changeProcessingDelayer;
	NSMutableDictionary* _retryTimers;

}

@property (assign,nonatomic) BOOL retryOnErrors;                                           //@synthesize retryOnErrors=_retryOnErrors - In the implementation block
@property (nonatomic,retain) CSSearchableIndex * searchableIndex;                          //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexingQueue;                   //@synthesize indexingQueue=_indexingQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * dataSourcesByIdentifier;                         //@synthesize dataSourcesByIdentifier=_dataSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * changeProcessingDelayer;                  //@synthesize changeProcessingDelayer=_changeProcessingDelayer - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryTimers;                            //@synthesize retryTimers=_retryTimers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedIndexer;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setIndexingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)indexingQueue;
-(void)setDataSourcesByIdentifier:(NSDictionary *)arg1 ;
-(void)processChanges;
-(void)setChangeProcessingDelayer:(ICSelectorDelayer *)arg1 ;
-(void)setRetryTimers:(NSMutableDictionary *)arg1 ;
-(void)setRetryOnErrors:(BOOL)arg1 ;
-(void)dataSourceDidChange:(id)arg1 ;
-(NSDictionary *)dataSourcesByIdentifier;
-(ICSelectorDelayer *)changeProcessingDelayer;
-(BOOL)retryOnErrors;
-(void)retrySelector:(SEL)arg1 ;
-(void)clearRetryForSelector:(SEL)arg1 ;
-(void)reindexAllSearchableItemsInIndex:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishRemainingOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)retryTimers;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 inIndex:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reindexAllSearchableItemsInIndex;
-(id)dataSourceWithIdentifier:(id)arg1 ;
-(void)reindexAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelIndexingOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)objectsForSearchableItems:(id)arg1 inContexts:(id)arg2 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(void)addDataSource:(id)arg1 ;
-(NSArray *)dataSources;
-(void)stopObservingChanges;
-(CSSearchableIndex *)searchableIndex;
-(void)removeDataSource:(id)arg1 ;
-(void)setObservingChanges:(BOOL)arg1 ;
@end

