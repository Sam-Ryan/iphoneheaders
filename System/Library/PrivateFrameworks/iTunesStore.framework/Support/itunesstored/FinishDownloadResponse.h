/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DownloadHandle, DownloadHandlerSession, NSError, NSString;

@interface FinishDownloadResponse : NSObject {

	long long _assetBlockedReason;
	long long _assetID;
	DownloadHandle* _downloadHandle;
	DownloadHandlerSession* _downloadHandlerSession;
	long long _downloadID;
	NSError* _error;
	NSString* _mediaAssetInstallPath;
	long long _result;

}

@property (nonatomic,retain) DownloadHandle * downloadHandle;                            //@synthesize downloadHandle=_downloadHandle - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                               //@synthesize downloadID=_downloadID - In the implementation block
@property (assign,nonatomic) long long mediaAssetIdentifier;                             //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) long long assetBlockedReason;                               //@synthesize assetBlockedReason=_assetBlockedReason - In the implementation block
@property (nonatomic,copy) DownloadHandlerSession * downloadHandlerSession;              //@synthesize downloadHandlerSession=_downloadHandlerSession - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * mediaAssetInstallPath;                             //@synthesize mediaAssetInstallPath=_mediaAssetInstallPath - In the implementation block
@property (assign,nonatomic) long long result;                                           //@synthesize result=_result - In the implementation block
-(long long)assetBlockedReason;
-(void)setAssetBlockedReason:(long long)arg1 ;
-(DownloadHandle *)downloadHandle;
-(void)setDownloadHandle:(DownloadHandle *)arg1 ;
-(DownloadHandlerSession *)downloadHandlerSession;
-(void)setDownloadHandlerSession:(DownloadHandlerSession *)arg1 ;
-(long long)mediaAssetIdentifier;
-(void)setMediaAssetIdentifier:(long long)arg1 ;
-(NSString *)mediaAssetInstallPath;
-(void)setMediaAssetInstallPath:(NSString *)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(long long)result;
-(long long)downloadIdentifier;
-(void)setResult:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

