/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <pipelined/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_semaphore, CLIndoorTilePrefetcherDelegate;
@class NSURL, NSDate, NSObject, NSURLSession, NSString;

@interface CLIndoorTilePrefetcher : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDownloadDelegate> {

	NSURL* _tileServer;
	ActiveRequestsSet* _activeForegroundRequests;
	NSDate* _now;
	NSObject*<OS_dispatch_semaphore> _invalidated;
	id<CLIndoorTilePrefetcherDelegate> _delegate;
	NSURLSession* _session;
	NSURLSession* _availableFloorForegroundSession;
	NSURLSession* _unavailableFloorForegroundSession;

}

@property (assign,nonatomic,__weak) id<CLIndoorTilePrefetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * now; 
@property (retain) NSURLSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (retain) NSURLSession * availableFloorForegroundSession;                            //@synthesize availableFloorForegroundSession=_availableFloorForegroundSession - In the implementation block
@property (retain) NSURLSession * unavailableFloorForegroundSession;                          //@synthesize unavailableFloorForegroundSession=_unavailableFloorForegroundSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createNewRequest:(int)arg1 withExpectedByteSize:(unsigned long long)arg2 forURL:(id)arg3 lastRelevant:(id)arg4 ;
-(id)initWithServerConfiguration:(const Urls*)arg1 usingDelegate:(id)arg2 ;
-(id)initWithServerConfiguration:(const Urls*)arg1 usingDelegate:(id)arg2 settings:(const PrefetchSettings*)arg3 ;
-(void)interruptForegroundDownload:(/*^block*/id)arg1 ;
-(void)runFromNetworkCallback:(/*^block*/id)arg1 ;
-(id)urlForFloor:(id)arg1 ;
-(void)scheduleDownloadForRequest:(id)arg1 withResumeData:(id)arg2 withSession:(int)arg3 ;
-(void)updateTask:(id)arg1 relevancy:(id)arg2 forSession:(int)arg3 ;
-(void)scheduleDownloadForFloorMetadata:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 onSession:(int)arg4 withResumeData:(id)arg5 ;
-(void)logPendingTasks;
-(void)getDownloadTasks:(/*^block*/id)arg1 ;
-(void)scheduleDownloadForTile:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 onSession:(int)arg4 withResumeData:(id)arg5 ;
-(BOOL)shouldPrefetchFloorMetadataForFloorUuid:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 forSession:(int)arg2 ;
-(void)foregroundTaskCompletedForFloor:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(id)urlForAsset:(id)arg1 forFloor:(id)arg2 ;
-(void)foregroundTaskCompletedForFloor:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 withError:(id)arg2 ;
-(void)logPendingTasksFromNetworkCallback;
-(void)getBackgroundDownloadTasks:(/*^block*/id)arg1 ;
-(void)notifyDelegateIfPrefetchComplete;
-(void)setNow:(NSDate *)arg1 ;
-(void)asyncFetchImmediatelyWithAvailableFloors:(id)arg1 withUnavailableFloors:(id)arg2 offline:(BOOL)arg3 onCompletion:(/*^block*/id)arg4 onErrors:(/*^block*/id)arg5 ;
-(void)asyncPromoteDiscretionaryTask:(id)arg1 lastRelevant:(id)arg2 onSession:(int)arg3 ;
-(NSURLSession *)availableFloorForegroundSession;
-(void)setAvailableFloorForegroundSession:(NSURLSession *)arg1 ;
-(NSURLSession *)unavailableFloorForegroundSession;
-(void)setUnavailableFloorForegroundSession:(NSURLSession *)arg1 ;
-(void)setDelegate:(id<CLIndoorTilePrefetcherDelegate>)arg1 ;
-(id)init;
-(id<CLIndoorTilePrefetcherDelegate>)delegate;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(NSURLSession *)session;
-(NSDate *)now;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)prefetch:(id)arg1 ;
-(void)invalidateAndWait;
@end

