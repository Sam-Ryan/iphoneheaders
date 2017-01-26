/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/AFSyncHandler.h>

@protocol ABAssistantSyncDelegate;
@class NSString;

@interface ABAssistantSyncWorker : NSObject <AFSyncHandler> {

	id<ABAssistantSyncDelegate> _delegate;
	CFArrayRef _allRecords;
	CFArrayRef _changedIDs;
	CFArrayRef _changeTypes;
	CFArrayRef _sequenceNumbers;
	long long _syncIndex;
	long long _syncCount;
	BOOL _databaseNotAvailable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)getCurrentValidity;
-(void)clearSyncCache;
-(id)initWithDelegate:(id)arg1 ;
@end

