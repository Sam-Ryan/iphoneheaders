/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:10:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEntity.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, SSDownloadMetadata, NSNumber, SSDownloadStatus, SSDownloadPolicy, NSArray, SSXPCConnection, NSString;

@interface SSDownload : SSEntity <SSXPCCoding> {

	NSMutableDictionary* _localAssets;
	SSDownloadMetadata* _metadata;
	NSNumber* _prioritizeAboveDownload;
	SSDownloadStatus* _status;

}

@property (readonly) long long persistentIdentifier; 
@property (getter=isCancelable,readonly) BOOL cancelable; 
@property (copy) SSDownloadPolicy * downloadPolicy; 
@property (readonly) long long downloadSizeLimit; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@property (nonatomic,readonly) id downloadIdentifier; 
@property (nonatomic,retain) NSArray * assets; 
@property (nonatomic,copy) SSDownloadMetadata * metadata; 
@property (nonatomic,retain) SSDownloadStatus * status; 
@property (getter=_XPCConnection,readonly) SSXPCConnection * _XPCConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(id)_errorWithData:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)_errorWithXPCReply:(id)arg1 ;
-(void)_applyPhase:(id)arg1 toStatus:(id)arg2 ;
-(void)_resetLocalIVars;
-(id)_newAssetWithURL:(id)arg1 assetType:(id)arg2 ;
-(id)_initWithLocalPropertyValues:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(id)networkConstraints;
-(BOOL)removeAsset:(id)arg1 ;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)_addCachedExternalValues:(id)arg1 ;
-(void)_addCachedPropertyValues:(id)arg1 ;
-(void)handleWithDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(void)_resetStatus;
-(SSXPCConnection *)_XPCConnection;
-(void)dealloc;
-(double)percentComplete;
-(void)resume;
-(BOOL)isExternal;
-(void)pause;
-(SSDownloadStatus *)status;
-(void)setStatus:(SSDownloadStatus *)arg1 ;
-(SSDownloadMetadata *)metadata;
-(void)setMetadata:(SSDownloadMetadata *)arg1 ;
-(id)downloadIdentifier;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)assetsForType:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)downloadSizeLimit;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setDownloadPolicy:(SSDownloadPolicy *)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(double)estimatedSecondsRemaining;
-(long long)persistentIdentifier;
-(id)downloadPhaseIdentifier;
-(id)initWithDownloadMetadata:(id)arg1 ;
-(BOOL)isCancelable;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(void)restart;
-(id)failureError;
@end

