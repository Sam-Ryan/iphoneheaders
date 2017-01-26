/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABAssistantSyncAnchor : NSObject {

	int _sequenceNumber;
	int _recordID;

}

@property (nonatomic,readonly) int sequenceNumber; 
@property (nonatomic,readonly) int recordID; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL shouldResetSync; 
@property (nonatomic,readonly) BOOL shouldFullSync; 
@property (nonatomic,readonly) BOOL shouldResumePreviousFullSync; 
@property (nonatomic,readonly) BOOL shouldDeleteSyncedRecords; 
+(id)anchorWithString:(id)arg1 forAddressBook:(void*)arg2 ;
+(id)stringValueForFullSyncWithRecordID:(int)arg1 ;
+(id)stringValueWithSequenceNumber:(int)arg1 recordID:(int)arg2 ;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(BOOL)shouldFullSync;
-(id)initWithSequenceNumber:(int)arg1 recordID:(int)arg2 ;
-(BOOL)shouldResumePreviousFullSync;
-(BOOL)shouldResetSync;
-(BOOL)shouldDeleteSyncedRecords;
-(id)init;
-(id)description;
-(NSString *)stringValue;
-(int)sequenceNumber;
-(int)recordID;
-(void)resetSync;
@end

