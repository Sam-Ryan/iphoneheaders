/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CKRecordZoneID, NSMutableSet, NSOperationQueue;

@interface ICFetchRecordChangesWrapperOperation : NSOperation {

	CKRecordZoneID* _recordZoneID;
	NSMutableSet* _completionHandlers;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                  //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableSet * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)cancel;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)main;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRecordZoneID:(id)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(NSMutableSet *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
@end

