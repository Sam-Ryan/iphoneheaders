/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class EKEventStore, NSString, NSMutableArray;

@interface RemindersAssistantSyncHandler : NSObject <AFSyncHandler> {

	EKEventStore* _eventStore;
	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)calculateFinalAnchor:(id)arg1 ;
-(id)identifierForCalendar:(id)arg1 ;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

