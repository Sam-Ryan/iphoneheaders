/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(id)init;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCurrentlySelectedSearchEngineWithCompletion:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistory;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOrigins;
-(void)deleteSafariPersistentURLCacheStorage;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 ;
@end

