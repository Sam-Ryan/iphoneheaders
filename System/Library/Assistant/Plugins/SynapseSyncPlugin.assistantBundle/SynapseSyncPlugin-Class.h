/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/SynapseSyncPlugin.assistantBundle/SynapseSyncPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class NSMutableDictionary, NSEnumerator, NSString;

@interface SynapseSyncPlugin : NSObject <AFSyncHandler> {

	NSMutableDictionary* _deletedIDs;
	NSMutableDictionary* _newItems;
	NSEnumerator* _anchorEnumerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2 ;
-(BOOL)_checkIfResetIsNeededForSyncTransaction:(id)arg1 validity:(id)arg2 serverCountOfItems:(long long)arg3 startAnchorFromServer:(id)arg4 ;
-(id)_prepareToVendChangeInfoForSyncTransaction:(id)arg1 startAnchorFromServer:(id)arg2 ;
-(void)_clearChangeInfo;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)init;
@end
