/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:51 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/SagaCreatePlaylistOperation.h>

@class NSString;

@interface SagaSDKCreatePlaylistOperation : SagaCreatePlaylistOperation {

	NSString* _requestingBundleID;

}
-(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 ;
-(id)initWithPlaylistPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

