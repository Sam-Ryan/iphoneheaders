/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, ATStoreInfo, NSError;

@interface ATAsset : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _dataclass;
	NSString* _assetType;
	NSDictionary* _variantOptions;
	NSString* _localPath;
	NSURL* _icon;
	NSString* _prettyName;
	BOOL _isDownload;
	BOOL _isRestore;
	BOOL _bypassStore;
	BOOL _installOnly;
	BOOL _readyForStore;
	long long _storePID;
	unsigned _priority;
	float _downloadProgress;
	float _installProgress;
	ATStoreInfo* _storeInfo;
	NSString* _storePlist;
	NSString* _infoPlist;
	NSError* _error;
	NSDictionary* _clientParams;
	BOOL _installStarted;
	BOOL _legacy;
	BOOL _installed;
	unsigned long long _totalBytes;
	unsigned long long _bytesRemaining;
	unsigned long long _completedAssetParts;
	/*^block*/id _completionBlock;
	/*^block*/id _progressBlock;

}

@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * dataclass;                                //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,retain) NSString * assetType;                                //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSDictionary * variantOptions;                       //@synthesize variantOptions=_variantOptions - In the implementation block
@property (nonatomic,retain) NSString * prettyName;                               //@synthesize prettyName=_prettyName - In the implementation block
@property (nonatomic,retain) NSString * path;                                     //@synthesize localPath=_localPath - In the implementation block
@property (nonatomic,retain) NSURL * icon;                                        //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL isDownload;                                     //@synthesize isDownload=_isDownload - In the implementation block
@property (assign,nonatomic) BOOL isRestore;                                      //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) BOOL bypassStore;                                    //@synthesize bypassStore=_bypassStore - In the implementation block
@property (assign,nonatomic) BOOL installOnly;                                    //@synthesize installOnly=_installOnly - In the implementation block
@property (assign,nonatomic) BOOL readyForStore;                                  //@synthesize readyForStore=_readyForStore - In the implementation block
@property (assign,nonatomic) long long storePID;                                  //@synthesize storePID=_storePID - In the implementation block
@property (assign,nonatomic) unsigned priority;                                   //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) float downloadProgress;                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) float installProgress;                               //@synthesize installProgress=_installProgress - In the implementation block
@property (nonatomic,retain) ATStoreInfo * storeInfo;                             //@synthesize storeInfo=_storeInfo - In the implementation block
@property (nonatomic,retain) NSString * storePlist;                               //@synthesize storePlist=_storePlist - In the implementation block
@property (nonatomic,retain) NSString * infoPlist;                                //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL installStarted;                                 //@synthesize installStarted=_installStarted - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                       //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long bytesRemaining;                   //@synthesize bytesRemaining=_bytesRemaining - In the implementation block
@property (nonatomic,retain) NSDictionary * clientParams;                         //@synthesize clientParams=_clientParams - In the implementation block
@property (assign,nonatomic) unsigned long long completedAssetParts;              //@synthesize completedAssetParts=_completedAssetParts - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id progressBlock;                                      //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,getter=isLegacy,nonatomic) BOOL legacy;                         //@synthesize legacy=_legacy - In the implementation block
@property (assign,getter=isInstalled,nonatomic) BOOL installed;                   //@synthesize installed=_installed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3 ;
+(id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4 ;
+(id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5 ;
+(id)assetWithSerializedAsset:(id)arg1 ;
-(NSString *)assetType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)path;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIcon:(NSURL *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)shortDescription;
-(NSURL *)icon;
-(BOOL)isLegacy;
-(void)setLegacy:(BOOL)arg1 ;
-(ATStoreInfo *)storeInfo;
-(void)setStoreInfo:(ATStoreInfo *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(BOOL)isRestore;
-(id)progressBlock;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(void)setDataclass:(NSString *)arg1 ;
-(BOOL)isInstalled;
-(id)_variantDescription;
-(void)setInstallOnly:(BOOL)arg1 ;
-(void)setReadyForStore:(BOOL)arg1 ;
-(void)setInstallProgress:(float)arg1 ;
-(NSDictionary *)clientParams;
-(void)setClientParams:(NSDictionary *)arg1 ;
-(void)setBytesRemaining:(unsigned long long)arg1 ;
-(unsigned long long)completedAssetParts;
-(NSString *)dataclass;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(float)installProgress;
-(NSString *)prettyName;
-(BOOL)isDownload;
-(unsigned long long)assetParts;
-(NSString *)storePlist;
-(void)setCompletedAssetParts:(unsigned long long)arg1 ;
-(BOOL)bypassStore;
-(void)setInstallStarted:(BOOL)arg1 ;
-(void)setInstalled:(BOOL)arg1 ;
-(long long)storePID;
-(void)setStorePlist:(NSString *)arg1 ;
-(void)setInfoPlist:(NSString *)arg1 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(void)setVariantOptions:(NSDictionary *)arg1 ;
-(void)setIsRestore:(BOOL)arg1 ;
-(void)setPrettyName:(NSString *)arg1 ;
-(void)setStorePID:(long long)arg1 ;
-(BOOL)installStarted;
-(id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3 ;
-(NSDictionary *)variantOptions;
-(unsigned long long)bytesRemaining;
-(id)serializedAsset;
-(BOOL)installOnly;
-(id)manifestEntry;
-(void)setBypassStore:(BOOL)arg1 ;
-(BOOL)readyForStore;
-(NSString *)infoPlist;
@end

