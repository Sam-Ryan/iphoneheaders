/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, MPStoreDownloadManager, NSObject, NSString;

@interface CloudTrackDownloadManager : NSObject <MPStoreDownloadManagerObserver> {

	NSMutableDictionary* _tracksToCollections;
	MPStoreDownloadManager* _downloadManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)cancelAllTracksMissingFromLibrary:(id)arg1 ;
-(void)addTracks:(id)arg1 forCollectionEntity:(id)arg2 backgroundRequest:(BOOL)arg3 ;
-(void)cancelTracksForCollectionEntity:(id)arg1 ;
-(void)cancelAllTracksFromLibrary:(id)arg1 withPersistentIDs:(id)arg2 ;
-(id)init;
-(BOOL)isBusy;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
@end

