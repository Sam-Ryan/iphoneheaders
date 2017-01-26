/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber, CKAsset, CKPackage, CKRecordID, NSString, NSData, NSMutableArray, NSError;

@interface CKDMMCSItem : NSObject {

	BOOL _hasSize;
	BOOL _hasOffset;
	BOOL _finished;
	BOOL _temporary;
	BOOL _shouldReadRawEncryptedData;
	unsigned _chunkCount;
	NSURL* _fileURL;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	unsigned long long _itemID;
	double _progress;
	unsigned long long _size;
	unsigned long long _offset;
	unsigned long long _packageIndex;
	CKAsset* _asset;
	CKPackage* _package;
	CKRecordID* _recordID;
	NSString* _recordType;
	NSString* _recordKey;
	NSData* _signature;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSString* _authToken;
	NSData* _authRequest;
	NSString* _uploadReceipt;
	NSMutableArray* _sectionItems;
	NSError* _error;
	NSData* _assetKey;
	NSData* _wrappedAssetKey;
	NSData* _referenceSignature;
	unsigned long long _uploadTokenExpiration;
	unsigned long long _downloadTokenExpiration;
	NSString* _trackingUUID;

}

@property (nonatomic,retain) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                     //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                                       //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                                 //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) unsigned long long itemID;                               //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) double progress;                                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned chunkCount;                                     //@synthesize chunkCount=_chunkCount - In the implementation block
@property (assign,nonatomic) unsigned long long packageIndex;                         //@synthesize packageIndex=_packageIndex - In the implementation block
@property (nonatomic,retain) CKAsset * asset;                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) CKPackage * package;                                     //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * recordType;                                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSString * recordKey;                                    //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSData * signature;                                      //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,retain) NSString * authToken;                                    //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSData * authRequest;                                    //@synthesize authRequest=_authRequest - In the implementation block
@property (nonatomic,retain) NSString * uploadReceipt;                                //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionItems;                           //@synthesize sectionItems=_sectionItems - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;                                //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (assign,nonatomic) unsigned long long uploadTokenExpiration;                //@synthesize uploadTokenExpiration=_uploadTokenExpiration - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,retain) NSString * trackingUUID;                                 //@synthesize trackingUUID=_trackingUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                            //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL hasOffset;                                          //@synthesize hasOffset=_hasOffset - In the implementation block
@property (assign,nonatomic) BOOL finished;                                           //@synthesize finished=_finished - In the implementation block
@property (assign,getter=isTemporary,nonatomic) BOOL temporary;                       //@synthesize temporary=_temporary - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                         //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
-(void)setPackage:(CKPackage *)arg1 ;
-(unsigned long long)size;
-(id)init;
-(id)description;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSString *)owner;
-(void)setOwner:(NSString *)arg1 ;
-(double)progress;
-(id)initWithAsset:(id)arg1 ;
-(CKAsset *)asset;
-(void)setAsset:(CKAsset *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setFinished:(BOOL)arg1 ;
-(unsigned long long)itemID;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(void)setChunkCount:(unsigned)arg1 ;
-(unsigned)chunkCount;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)finished;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(id)CKPropertiesDescription;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(NSString *)recordKey;
-(NSString *)trackingUUID;
-(id)getFileSizeWithError:(id*)arg1 ;
-(NSMutableArray *)sectionItems;
-(unsigned long long)packageIndex;
-(id)initWithPackage:(id)arg1 ;
-(void)setPackageIndex:(unsigned long long)arg1 ;
-(void)setSectionItems:(NSMutableArray *)arg1 ;
-(void)setTrackingUUID:(NSString *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(id)getFileSizeWithProxy:(id)arg1 error:(id*)arg2 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSData *)assetKey;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSData *)referenceSignature;
-(id)openWithProxy:(id)arg1 error:(id*)arg2 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(NSData *)wrappedAssetKey;
-(id)getFileMetadataWithFileHandle:(id)arg1 error:(id*)arg2 ;
-(void)setRecordType:(NSString *)arg1 ;
-(NSString *)recordType;
-(NSData *)authRequest;
-(unsigned long long)downloadTokenExpiration;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(unsigned long long)uploadTokenExpiration;
-(BOOL)shouldReadRawEncryptedData;
-(BOOL)hasOffset;
-(BOOL)isTemporary;
-(id)_openInfo;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(void)setAuthRequest:(NSData *)arg1 ;
-(void)setUploadTokenExpiration:(unsigned long long)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(id)openWithError:(id*)arg1 ;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
-(CKPackage *)package;
@end

