/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_group;
@class NSMutableDictionary, NSObject, NSString;

@interface BRCTransferBatchOperation : _BRCOperation <BRCOperationSubclass> {

	NSMutableDictionary* _entriesByRecordID;
	NSMutableDictionary* _entriesBySecondaryRecordID;
	NSMutableDictionary* _entriesByTransferID;
	unsigned long long _totalSize;
	unsigned long long _doneSize;
	unsigned long long _itemsCount;
	/*^block*/id _didProgressBlock;
	NSObject*<OS_dispatch_group> _pendingGroup;

}

@property (assign) unsigned long long totalSize;                                       //@synthesize totalSize=_totalSize - In the implementation block
@property (assign) unsigned long long doneSize;                                        //@synthesize doneSize=_doneSize - In the implementation block
@property (readonly) unsigned long long itemsCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> pendingGroup;              //@synthesize pendingGroup=_pendingGroup - In the implementation block
@property (copy) id didProgressBlock;                                                  //@synthesize didProgressBlock=_didProgressBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 syncContext:(id)arg2 ;
-(id)fetchOperationForTransfers:(id)arg1 traceCode:(int)arg2 ;
-(void)main;
-(unsigned long long)itemsCount;
-(unsigned long long)startActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(unsigned long long)totalSize;
-(id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3 ;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1 ;
-(void)addTransfer:(id)arg1 ;
-(void)finishedTransfer:(id)arg1 error:(id)arg2 ;
-(NSObject*<OS_dispatch_group>)pendingGroup;
-(void)progressForRecordID:(id)arg1 progress:(double)arg2 ;
-(void)finishedTransferForRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
-(void)setDidProgressBlock:(id)arg1 ;
-(void)cancelTransferID:(id)arg1 ;
-(void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 ;
-(double)progressForTransferID:(id)arg1 ;
-(id)transferredObjectsPrettyName;
-(void)_cancelTransferID:(id)arg1 ;
-(void)_progressForTransfer:(id)arg1 progress:(double)arg2 ;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(id)didProgressBlock;
@end

