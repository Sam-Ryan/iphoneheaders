/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:18:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>

@class NSString, MobileCalDAVDaemonAccount, NSMutableSet, NSURL, DACoreDAVTaskManager, NSSet;

@interface MobileCalDAVAttachmentDownloader : NSObject <DADataclassLockWatcher, CoreDAVTaskDelegate> {

	NSString* _waiterID;
	MobileCalDAVDaemonAccount* _account;
	NSMutableSet* _consumers;
	NSString* _attachmentUUID;
	NSURL* _attachmentURL;
	long long _attachmentSize;
	NSString* _attachmentType;
	NSString* _localFilename;
	NSString* _etag;
	DACoreDAVTaskManager* _taskManager;
	BOOL _waitingForGatekeeper;
	BOOL _holdingGatekeeperLock;

}

@property (nonatomic,readonly) NSString * attachmentUUID;              //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,readonly) NSSet * consumers;                      //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)progressQueue;
-(void)dealloc;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)waiterID;
-(NSSet *)consumers;
-(void)cancelDownload;
-(NSString *)attachmentUUID;
-(void)beginDownload;
-(void)_didShowProgressDownloadedByteCount:(long long)arg1 ;
-(void)_didFinishDownloadingWithError:(id)arg1 ;
-(void)_reallySaveAttachmentDataToDatabase;
-(void)_saveAttachmentDataToDatabase;
-(id)initWithAttachmentUUID:(id)arg1 forAccount:(id)arg2 ;
-(void)addConsumer:(id)arg1 ;
-(void)removeConsumer:(id)arg1 ;
@end

