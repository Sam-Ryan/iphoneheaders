/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTVideoDataSource.h>

@class NSMutableArray, YTSearchRequest;

@interface YTBookmarksVideoDataSource : YTVideoDataSource {

	NSMutableArray* _bookmarkedShortIDs;
	YTSearchRequest* _bookmarksSearchRequest;
	BOOL _lastReloadWasAccountsFavorites;

}
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(BOOL)isLoading;
-(void)searchRequest:(id)arg1 foundBatchURL:(id)arg2 ;
-(void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned)arg3 videosRemaining:(unsigned)arg4 ;
-(unsigned)maxVideosToSave;
-(void)_nextBatch;
-(void)addVideo:(id)arg1 ;
@end

