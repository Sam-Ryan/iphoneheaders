/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, SSDownload, SSDownloadAsset;

@interface SSDownloadSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _sessionID;
	long long _assetID;
	long long _downloadID;

}

@property (readonly) SSDownload * download; 
@property (readonly) SSDownloadAsset * downloadAsset; 
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(id)_initSSDownloadSession;
-(id)_copySessionPropertyWithKey:(const char*)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SSDownloadAsset *)downloadAsset;
-(SSDownload *)download;
@end
