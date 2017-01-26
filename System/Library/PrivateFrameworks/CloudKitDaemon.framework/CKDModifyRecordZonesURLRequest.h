/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {

	BOOL _markZonesAsUserPurged;
	/*^block*/id _recordZoneModifiedBlock;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (assign,nonatomic) BOOL markZonesAsUserPurged;                                 //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,copy) id recordZoneModifiedBlock;                                   //@synthesize recordZoneModifiedBlock=_recordZoneModifiedBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordZonesToSave;                                //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;                            //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
-(int)operationType;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZonesToSave;
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)markZonesAsUserPurged;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setRecordZoneModifiedBlock:(id)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(id)recordZoneModifiedBlock;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

