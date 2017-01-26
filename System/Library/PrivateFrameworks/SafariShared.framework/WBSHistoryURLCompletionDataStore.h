/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class WBSHistoryService, NSObject, NSDate, WBSURLCompletionHistorySnapshot;

@interface WBSHistoryURLCompletionDataStore : NSObject {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _dataStoreQueue;
	NSDate* _snapshotLastModifiedDate;
	WBSURLCompletionHistorySnapshot* _snapshot;

}
-(id)initWithHistoryService:(id)arg1 ;
-(void)_loadFromDatabaseIfNecessary;
-(Ref<SafariShared::HistoryURLCompletionItem>*)_completionItemFromRow:(id)arg1 ;
-(void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(RefPtr<SafariShared::HistoryURLCompletionItem>*)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2 ;
-(void)getSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
@end

