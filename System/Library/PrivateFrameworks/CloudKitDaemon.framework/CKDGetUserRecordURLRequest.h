/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest {

	/*^block*/id _recordFetchedBlock;
	CKRecord* _userRecord;

}

@property (nonatomic,copy) id recordFetchedBlock;                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(int)operationType;
-(CKRecord *)userRecord;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)recordFetchedBlock;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setUserRecord:(CKRecord *)arg1 ;
@end

