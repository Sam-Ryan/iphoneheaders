/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:18:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreDAVLeafDataPayload.h>
#import <DADaemonCardDAV/DADataElement.h>

@class NSURL, NSData, NSString, NSArray, NSNumber, NSMutableDictionary;

@interface CardDAVVCardItem : NSObject <CoreDAVLeafDataPayload, DADataElement> {

	unsigned _abRecordType;
	NSURL* _serverID;
	NSNumber* _clientID;
	NSData* _dataPayload;
	void* _abRecord;
	NSString* _syncKey;
	NSMutableDictionary* _UUIDToPersonCache;
	NSMutableDictionary* _uuidToPersonCache;

}

@property (nonatomic,retain) NSURL * serverID;                                            //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSNumber * clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSData * dataPayload;                                        //@synthesize dataPayload=_dataPayload - In the implementation block
@property (nonatomic,readonly) void* abRecord;                                            //@synthesize abRecord=_abRecord - In the implementation block
@property (assign,nonatomic) unsigned abRecordType;                                       //@synthesize abRecordType=_abRecordType - In the implementation block
@property (nonatomic,retain) NSString * syncKey;                                          //@synthesize syncKey=_syncKey - In the implementation block
@property (assign,nonatomic,__weak) NSMutableDictionary * UUIDToPersonCache;              //@synthesize UUIDToPersonCache=_UUIDToPersonCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uuidToPersonCache;                     //@synthesize uuidToPersonCache=_uuidToPersonCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * childrenOrder; 
-(void)dealloc;
-(NSString *)syncKey;
-(void)setDataPayload:(NSData *)arg1 ;
-(void)setClientID:(NSNumber *)arg1 ;
-(NSNumber *)clientID;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(void)loadClientIDs;
-(id)convertToDAContactSearchResultElement;
-(void)setSyncKey:(NSString *)arg1 ;
-(NSData *)dataPayload;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(void*)abRecord;
-(NSMutableDictionary *)uuidToPersonCache;
-(void)setUuidToPersonCache:(NSMutableDictionary *)arg1 ;
-(void*)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned*)arg1 ;
-(unsigned)abRecordType;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7 ;
-(id)initWithABRecord:(void*)arg1 outNeedsDBSave:(BOOL*)arg2 maxImageSize:(long long)arg3 maxResourceSize:(long long)arg4 inContainerWithURL:(id)arg5 ;
-(void)setUUIDToPersonCache:(NSMutableDictionary *)arg1 ;
-(BOOL)saveIfGroupWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setAbRecordType:(unsigned)arg1 ;
-(NSMutableDictionary *)UUIDToPersonCache;
-(NSURL *)serverID;
-(void)setServerID:(NSURL *)arg1 ;
@end
