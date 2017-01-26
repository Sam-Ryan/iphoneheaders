/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABAssistantSyncHandler.h>
#import <AddressBook/ABAssistantSyncDelegate.h>

@class NSString;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* addressBook; 
-(id)getAnchorOfLastDeletedChangeHistory;
-(void)copyChangeHistoryAfterAnchor:(id)arg1 changedIDs:(const _CFArray*)arg2 changeTypes:(const _CFArray*)arg3 sequenceNumbers:(const _CFArray*)arg4 ;
-(id)newSADomainObjectFromDeletedRecordID:(int)arg1 ;
-(id)newSADomainObjectFromABRecordID:(int)arg1 ;
-(id)newSADomainObjectFromABRecord:(void*)arg1 ;
-(void)deleteAllChangeHistory;
-(BOOL)verifyChangeHistory;
-(void)deleteChangeHistoryToAnchor:(id)arg1 ;
-(BOOL)shouldSyncSADomainObject:(id)arg1 ;
-(CFStringRef)fullSyncSnapshotProperty;
-(CFArrayRef)copyAllRecordsForFullSync;
-(id)init;
-(id)syncKey;
-(void*)addressBook;
@end
