/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSDate, NSDictionary, UIImage, NSURL;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {

	BOOL _HDREV0;
	BOOL _expectingPairedVideo;
	NSString* _persistenceUUID;
	NSDate* _captureDate;
	NSDictionary* _metadata;
	NSString* _burstIdentifier;
	unsigned long long _burstRepresentedCount;
	UIImage* _imageWellImage;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                      //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long burstRepresentedCount;                             //@synthesize burstRepresentedCount=_burstRepresentedCount - In the implementation block
@property (nonatomic,readonly) UIImage * imageWellImage;                                             //@synthesize imageWellImage=_imageWellImage - In the implementation block
@property (getter=isHDREV0,nonatomic,readonly) BOOL HDREV0;                                          //@synthesize HDREV0=_HDREV0 - In the implementation block
@property (nonatomic,readonly) BOOL flashFired; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;              //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) SCD_Struct_CA2 duration; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA2 irisStillDisplayTime; 
-(NSString *)description;
-(SCD_Struct_CA2)duration;
-(UIImage *)placeholderImage;
-(NSString *)uuid;
-(NSDictionary *)metadata;
-(NSDate *)captureDate;
-(unsigned long long)mediaType;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;
-(NSDictionary *)stillImageMetadata;
-(BOOL)isExpectingPairedVideo;
-(SCD_Struct_CA2)irisStillDisplayTime;
-(NSString *)persistenceUUID;
-(BOOL)isHDREV0;
-(UIImage *)imageWellImage;
-(BOOL)flashFired;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 HDREV0:(BOOL)arg8 expectingPairedVideo:(BOOL)arg9 ;
-(unsigned long long)burstRepresentedCount;
@end

