/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>

@protocol AAUIContactsSearchDelegate;
@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString;

@interface AAUIContactsSearchController : NSObject <MFContactsSearchConsumer> {

	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	long long _countOfPendingResultBatches;
	BOOL _didFindResults;
	NSNumber* _searchTaskID;
	id<AAUIContactsSearchDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)_endSearch;
-(void)beginSearchWithString:(id)arg1 ;
-(void)cancelSearch;
-(void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned long long)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
@end

