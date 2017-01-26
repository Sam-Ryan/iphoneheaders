/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VimeoPostDelegate;
@class NSURL, NSString, ALAssetsLibrary, NSData, NSArray, ACAccount, ALAsset, VUDataReader;

@interface VimeoPost : NSObject {

	NSURL* _baseURL;
	int _uploadState;
	NSString* _videoID;
	NSString* _ticketID;
	NSURL* _uploadEndpoint;
	BOOL _continuingUpload;
	unsigned long long _countOfBytesStored;
	int _retryCount;
	BOOL _canUploadOverCellular;
	ALAssetsLibrary* _assetsLibrary;
	id<VimeoPostDelegate> _delegate;
	NSURL* _assetURL;
	NSData* _assetData;
	NSString* _title;
	NSString* _postDescription;
	NSArray* _tags;
	unsigned long long _accessType;
	long long _videoSize;
	long long _privacySettings;
	ACAccount* _account;
	ALAsset* _asset;
	NSURL* _exportedVideoURL;
	VUDataReader* _dataReader;

}

@property (assign,nonatomic,__weak) id<VimeoPostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                                   //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSData * assetData;                                 //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * postDescription;                         //@synthesize postDescription=_postDescription - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                     //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) unsigned long long accessType;                      //@synthesize accessType=_accessType - In the implementation block
@property (assign,nonatomic) long long videoSize;                                //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) long long privacySettings;                          //@synthesize privacySettings=_privacySettings - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ALAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * exportedVideoURL;                           //@synthesize exportedVideoURL=_exportedVideoURL - In the implementation block
@property (nonatomic,retain) VUDataReader * dataReader;                          //@synthesize dataReader=_dataReader - In the implementation block
+(BOOL)_isUsingCellular;
+(id)dictionaryWithResponseData:(id)arg1 error:(id*)arg2 ;
+(void)getAvailableQuotaForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssetData:(NSData *)arg1 ;
-(NSData *)assetData;
-(NSString *)postDescription;
-(void)setDelegate:(id<VimeoPostDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id<VimeoPostDelegate>)delegate;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)_cleanup;
-(NSArray *)tags;
-(ALAsset *)asset;
-(void)setAsset:(ALAsset *)arg1 ;
-(void)_commit;
-(unsigned long long)accessType;
-(void)_verify;
-(id)serializedDictionary;
-(id)assetsLibrary;
-(long long)privacySettings;
-(void)setPrivacySettings:(long long)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(long long)videoSize;
-(NSURL *)assetURL;
-(void)setVideoSize:(long long)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(void)setPostDescription:(NSString *)arg1 ;
-(id)_tags;
-(NSURL *)exportedVideoURL;
-(void)setExportedVideoURL:(NSURL *)arg1 ;
-(void)setDataReader:(VUDataReader *)arg1 ;
-(void)_checkQuota;
-(unsigned long long)postSize;
-(void)failWithErrorCode:(int)arg1 ;
-(void)_getTicket;
-(void)_warningWithCode:(int)arg1 ;
-(void)_uploadData;
-(void)_setTitle;
-(BOOL)uploadToAccount:(id)arg1 error:(id*)arg2 ;
-(void)_setDescription;
-(void)_setTags;
-(void)_setPrivacy;
-(void)setAccessType:(unsigned long long)arg1 ;
-(VUDataReader *)dataReader;
@end

