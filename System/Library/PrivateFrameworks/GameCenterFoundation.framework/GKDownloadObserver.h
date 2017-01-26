/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:44:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSString;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;

}

@property (retain) SSDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)dealloc;
-(id)init;
-(SSDownloadManager *)downloadManager;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(BOOL)isDownloadingGame:(id)arg1 ;
-(void)setDownloadManager:(SSDownloadManager *)arg1 ;
@end

