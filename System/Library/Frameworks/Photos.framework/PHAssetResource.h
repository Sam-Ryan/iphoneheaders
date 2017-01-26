/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class NSString, NSURL;

@interface PHAssetResource : NSObject {

	BOOL _locallyAvailable;
	BOOL _derivative;
	long long _resourceType;
	NSString* _assetLocalIdentifier;
	NSString* _uniformTypeIdentifier;
	NSString* _originalFilename;
	NSURL* _fileURL;
	NSURL* _privateFileURL;
	/*^block*/id _privateFileLoader;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;

}

@property (nonatomic,readonly) long long type;                                                                            //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                                                      //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                                                              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                                                                   //@synthesize originalFilename=_originalFilename - In the implementation block
@property (setter=_setFileURL:,nonatomic,retain) NSURL * fileURL;                                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (getter=isLibraryAssetResource,nonatomic,readonly) BOOL libraryAssetResource; 
@property (setter=_setPrivateFileURL:,nonatomic,retain) NSURL * privateFileURL;                                           //@synthesize privateFileURL=_privateFileURL - In the implementation block
@property (setter=_setPrivateFileLoader:,nonatomic,copy) id privateFileLoader;                                            //@synthesize privateFileLoader=_privateFileLoader - In the implementation block
@property (assign,setter=_setPixelWidth:,nonatomic) unsigned long long pixelWidth;                                        //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,setter=_setPixelHeight:,nonatomic) unsigned long long pixelHeight;                                      //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (assign,setter=_setIsLocallyAvailable:,getter=isLocallyAvailable,nonatomic) BOOL locallyAvailable;              //@synthesize locallyAvailable=_locallyAvailable - In the implementation block
@property (getter=isDerivative,nonatomic,readonly) BOOL derivative;                                                       //@synthesize derivative=_derivative - In the implementation block
+(id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 ;
+(id)assetResourcesForLivePhoto:(id)arg1 ;
+(id)assetResourcesForAsset:(id)arg1 ;
-(BOOL)vcp_isLocallyAvailable;
-(CGSize)vcp_size;
-(unsigned long long)vcp_fileSize;
-(id)description;
-(long long)type;
-(void)_setFileURL:(id)arg1 ;
-(NSURL *)fileURL;
-(NSString *)originalFilename;
-(BOOL)isLocallyAvailable;
-(NSString *)assetLocalIdentifier;
-(id)initWithResourceType:(long long)arg1 ;
-(void)_setOriginalFilename:(id)arg1 ;
-(void)_setUniformTypeIdentifier:(id)arg1 ;
-(void)_setPrivateFileLoader:(/*^block*/id)arg1 ;
-(BOOL)isLibraryAssetResource;
-(NSURL *)privateFileURL;
-(void)_setPrivateFileURL:(id)arg1 ;
-(id)privateFileLoader;
-(void)_setPixelWidth:(unsigned long long)arg1 ;
-(void)_setPixelHeight:(unsigned long long)arg1 ;
-(void)_setIsLocallyAvailable:(BOOL)arg1 ;
-(BOOL)isDerivative;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(NSString *)uniformTypeIdentifier;
@end

