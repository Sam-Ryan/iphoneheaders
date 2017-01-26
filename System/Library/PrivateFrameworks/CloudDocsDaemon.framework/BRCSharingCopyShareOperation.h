/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKShareID, CKRecordID, NSString;

@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	CKShareID* _shareID;
	CKRecordID* _recordIDNeedingFetch;

}

@property (nonatomic,retain) CKShareID * shareID;                            //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKRecordID * recordIDNeedingFetch;              //@synthesize recordIDNeedingFetch=_recordIDNeedingFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(unsigned long long)startActivity;
-(id)initWithItem:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)performAfterFetchingShares:(/*^block*/id)arg1 ;
-(CKRecordID *)recordIDNeedingFetch;
-(void)setRecordIDNeedingFetch:(CKRecordID *)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
@end

